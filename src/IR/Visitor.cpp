//
// Created by Ando on 2023-08-26.
//

#include "Visitor.h"
#include "Module.h"
#include "Frontend/SysYParser.h"
#include "IRBuildFactory.h"

using namespace IR;

Function* CurFunction;
Value* CurValue;
BasicBlock* CurBasicBlock;
std::vector<BasicBlock*> whileEntryBlocks;
std::vector<BasicBlock*> whileOutBlocks;
std::unordered_map<std::string, Value> argHashMap;

IRBuildFactory f = IRBuildFactory::getInstance();
std::vector<std::unordered_map<std::string, Value*>> sym_tables;

Function* print_func = new Function("@putint", VoidType::get_instance());
Function* input_func = new Function("@getint", IntegerType::get_instance());
Function* print_ch_func = new Function("@putch", VoidType::get_instance());
Function* input_ch_func = new Function("@getch", IntegerType::get_instance());
Function* print_arr_func = new Function("@putarray", VoidType::get_instance());
Function* input_arr_func = new Function("@getarray", IntegerType::get_instance());
Function* print_float_func = new Function("@putfloat", VoidType::get_instance());
Function* input_float_func = new Function("@getfloat", FloatType::get_instance());
Function* print_farr_func = new Function("@putfarray", VoidType::get_instance());
Function* input_farr_func = new Function("@getfarray", IntegerType::get_instance());
Function* memset_func = new Function("@memset", VoidType::get_instance());
Function* start_time_func = new Function("@_sysy_starttime", VoidType::get_instance());
Function* stop_time_func = new Function("@_sysy_stoptime", VoidType::get_instance());

void Visitor::push_sym_table() {
    sym_tables.emplace_back();
}

void Visitor::pop_sym_table() {
    sym_tables.pop_back();
}

void Visitor::push_symbol(const std::string& ident, Value* value) {
    int len = sym_tables.size();
    sym_tables[len - 1][ident] = value;
}

Value* Visitor::find(const std::string& ident){
    int len = sym_tables.size();
    for (int i = len - 1; i >= 0; i--) {
        std::unordered_map<std::string, Value*>& sym_table = sym_tables[i];
        auto it = sym_table.find(ident);
        if (it != sym_table.end()) {
            return it->second;
        }
    }

    if (ident == "getint") {
        return input_func;
    } else if (ident == "putint") {
        return print_func;
    } else if (ident == "getch") {
        return input_ch_func;
    } else if (ident == "putch") {
        return print_ch_func;
    } else if (ident == "getarray") {
        return input_arr_func;
    } else if (ident == "putarray") {
        return print_arr_func;
    } else if (ident == "getfloat") {
        return input_float_func;
    } else if (ident == "putfloat") {
        return print_float_func;
    } else if (ident == "getfarray") {
        return input_farr_func;
    } else if (ident == "putfarray") {
        return print_farr_func;
    } else if (ident == "starttime") {
        return start_time_func;
    } else if (ident == "stoptime") {
        return stop_time_func;
    } else {
        return nullptr;
    }
}

antlrcpp::Any Visitor::visitLVal(SysYParser::LValContext *ctx, bool is_fetch) {
    std::string ident = ctx->Ident()->getText();
    CurValue = find(ident);

    if(CurValue->get_type()->is_pointer_type()){
        if(is_fetch){
            Type* ele_type = dynamic_cast<PointerType*>(CurValue->get_type())->get_ele_type();
            CurValue = f.build_load_inst(CurValue, CurBasicBlock);
        }
    }

    return nullptr;
}

antlrcpp::Any Visitor::visitPrimaryExp(SysYParser::PrimaryExpContext *ctx, bool is_const) {
    if(ctx->number()){
        SysYParser::NumberContext* num = ctx->number();
        std::string num_string = ctx->number()->getText();
        if(num->IntConst()){
            int val = stoi(num_string, nullptr, 0);
            CurValue = f.build_number(val);
        }
        else if(num->FloatConst()){
            float val = stof(num_string);
            CurValue = f.build_number(val);
        }
    }
    else if(ctx->exp()){
        visitExp(ctx->exp(), is_const);
    }
    else if(ctx->lVal()){
        visitLVal(ctx->lVal(), true);
    }
    else if(ctx->call()){
        Function* function = (Function*) find(ctx->call()->Ident()->getText());
        std::vector<Value*> values;

        for(auto exp : ctx->call()->exp()){
            visitExp(exp, is_const);
            values.push_back(CurValue);
        }

        for(int i = 0; i < function->get_args().size(); i++){
            Value* value = values[i];
            Type* arg_type = function->get_args()[i]->get_type();
            Type* cur_type = value->get_type();
            if(cur_type == IntegerType::get_instance() && arg_type == FloatType::get_instance()){
                values[i] = f.build_conversion_inst(value, OP::itof, CurBasicBlock);
            }
            else if(cur_type == FloatType::get_instance() && arg_type == IntegerType::get_instance()){
                values[i] = f.build_conversion_inst(value, OP::ftoi, CurBasicBlock);
            }
        }

        if(function == start_time_func || function == stop_time_func){
            values.push_back(f.build_number(0));
        }
        CurValue = IRBuildFactory::build_call_inst(function, values, CurBasicBlock);
    }
    return nullptr;
}

antlrcpp::Any Visitor::visitUnaryExp(SysYParser::UnaryExpContext *ctx, bool is_const) {
    visitPrimaryExp(ctx->primaryExp(), is_const);

    int count = 0;
    for(int i = ctx->unaryOP().size() - 1; i >= 0; i--){
        std::string unary_op_string = ctx->unaryOP(i)->getText();
        if(unary_op_string == "-"){
            count++;
        }
        else if(unary_op_string == "!"){
            count = 0;
            Value* zero;
            if(CurValue->get_type()->is_integer_type()){
                zero = f.build_number(0);
            }
            else if(CurValue->get_type()->is_float_type()){
                zero = f.build_number((float) 0);
            }
            CurValue = f.build_bin_inst(CurValue, zero, OP::eq, CurBasicBlock);
        }
    }
    if(count % 2 == 1){
        if(auto* const_int = dynamic_cast<ConstInt*>(CurValue)){
            CurValue = f.build_number(-const_int->get_value());
        }
        else if(auto* const_float = dynamic_cast<ConstFloat*>(CurValue)){
            CurValue = f.build_number(-const_float->get_value());
        }
        else{
            Value* zero;
            if(CurValue->get_type()->is_integer_type()){
                zero = f.build_number(0);
            }
            else if(CurValue->get_type()->is_float_type()){
                zero = f.build_number((float) 0);
            }
            CurValue = f.build_bin_inst(zero, CurValue, OP::sub, CurBasicBlock);
        }
    }
    return nullptr;
}

antlrcpp::Any Visitor::visitMulExp(SysYParser::MulExpContext *ctx, bool is_const){
    visitUnaryExp(ctx->unaryExp(0), is_const);
    for(int i = 0; i < ctx->mulOP().size(); i++){
        std::string op_string = ctx->mulOP(i)->getText();
        Value* tmp_value = CurValue;
        visitUnaryExp(ctx->unaryExp(i + 1), is_const);
        auto const_left = dynamic_cast<Const*>(tmp_value);
        auto const_right = dynamic_cast<Const*>(CurValue);
        if(const_left && const_right){
            CurValue = f.build_cal_number(const_left, const_right, op_string);
        }
        else{
            CurValue = f.build_bin_inst(tmp_value, CurValue, Instruction::str_to_op(op_string), CurBasicBlock);
        }
    }
    return nullptr;
}

antlrcpp::Any Visitor::visitExp(SysYParser::ExpContext *ctx, bool is_const) {
    visitMulExp(ctx->mulExp(0), is_const);
    for(int i = 0; i < ctx->addOP().size(); i++){
        std::string op_string = ctx->addOP(i)->getText();
        Value* tmp_value = CurValue;
        visitMulExp(ctx->mulExp(i + 1), is_const);
        auto const_left = dynamic_cast<Const*>(tmp_value);
        auto const_right = dynamic_cast<Const*>(CurValue);
        if(const_left && const_right){
            CurValue = f.build_cal_number(const_left, const_right, op_string);
        }
        else{
            CurValue = f.build_bin_inst(tmp_value, CurValue, Instruction::str_to_op(op_string), CurBasicBlock);
        }
    }

    return nullptr;
}

antlrcpp::Any Visitor::visitReturn(SysYParser::ReturnContext *ctx) {
    if(ctx->exp()){
        visitExp(ctx->exp(), false);

        Type* CurType = CurValue->get_type();
        Type* CurFuncType = CurFunction->get_type();
        if(CurType->is_integer_type() && CurFuncType->is_float_type()){
            CurValue = f.build_conversion_inst(CurValue, OP::itof, CurBasicBlock);
        }
        else if(CurFuncType->is_integer_type() && CurType->is_float_type()){
            CurValue = f.build_conversion_inst(CurValue, OP::ftoi, CurBasicBlock);
        }

        CurValue = f.build_ret_inst(CurValue, CurBasicBlock);
    }
    else{
        f.build_ret_inst(CurBasicBlock);
    }

    return nullptr;
}

antlrcpp::Any Visitor::visitRelExp(SysYParser::RelExpContext *ctx, bool is_const) {
    visitExp(ctx->exp(0), is_const);
    for(int i = 0; i < ctx->relOP().size(); i++){
        std::string op_string = ctx->relOP(i)->getText();
        Value* tmp_value = CurValue;
        visitExp(ctx->exp(i + 1), is_const);
        auto const_left = dynamic_cast<Const*>(tmp_value);
        auto const_right = dynamic_cast<Const*>(CurValue);
        if(const_left && const_right){
            CurValue = f.build_cal_number(const_left, const_right, op_string);
        }
        else{
            CurValue = f.build_bin_inst(tmp_value, CurValue, Instruction::str_to_op(op_string), CurBasicBlock);
        }
    }
    return nullptr;
}

antlrcpp::Any Visitor::visitEqExp(SysYParser::EqExpContext *ctx, bool is_const) {
    visitRelExp(ctx->relExp(0), is_const);
    for(int i = 0; i < ctx->eqOP().size(); i++){
        std::string op_string = ctx->eqOP(i)->getText();
        Value* tmp_value = CurValue;
        visitRelExp(ctx->relExp(i + 1), is_const);
        auto const_left = dynamic_cast<Const*>(tmp_value);
        auto const_right = dynamic_cast<Const*>(CurValue);
        if(const_left && const_right){
            CurValue = f.build_cal_number(const_left, const_right, op_string);
        }
        else{
            CurValue = f.build_bin_inst(tmp_value, CurValue, Instruction::str_to_op(op_string), CurBasicBlock);
        }
    }
    return nullptr;
}

antlrcpp::Any Visitor::visitLandExp(SysYParser::LandExpContext *ctx, BasicBlock* true_bb, BasicBlock* false_bb) {
    BasicBlock* nxt_land_block;
    auto now = ctx->eqExp(0);
    for(int i = 0; i < ctx->eqExp().size(); i++){
        if(i != ctx->eqExp().size() - 1){
            nxt_land_block = f.build_basic_block(CurFunction);
        }
        else nxt_land_block = true_bb;
        visitEqExp(ctx->eqExp(i), false);
        CurValue = f.build_bin_inst(CurValue, f.build_number(0), OP::ne, CurBasicBlock);
        f.build_br_inst(CurValue, nxt_land_block, false_bb, CurBasicBlock);
        CurBasicBlock = nxt_land_block;
    }
    return nullptr;
}

antlrcpp::Any Visitor::visitLorExp(SysYParser::LorExpContext *ctx, BasicBlock* true_bb, BasicBlock* false_bb) {
    BasicBlock* nxt_lor_block;
    auto now = ctx->landExp(0);
    for(int i = 0; i < ctx->landExp().size(); i++){
        if(i != ctx->landExp().size() - 1){
            nxt_lor_block = f.build_basic_block(CurFunction);
        }
        else nxt_lor_block = false_bb;
        visitLandExp(now, true_bb, nxt_lor_block);
        CurValue = nxt_lor_block;
    }
    return nullptr;
}

antlrcpp::Any Visitor::visitIfStmt(SysYParser::IfStmtContext *ctx) {
    BasicBlock* true_bb = f.build_basic_block(CurFunction);
    BasicBlock* nxt_bb = f.build_basic_block(CurFunction);
    BasicBlock* false_bb = nullptr;

    if(ctx->Else()){
        false_bb = f.build_basic_block(CurFunction);
        visitLorExp(ctx->lorExp(), true_bb, false_bb);
    }
    else visitLorExp(ctx->lorExp(), true_bb, nxt_bb);

    //  VisitCondAST之后，CurBlock的br已经构建完并指向正确的Block
    //  接下来我们为TrueBlock填写指令
    CurBasicBlock = true_bb;
    visitStmt(ctx->stmt(0));
    f.build_br_inst(nxt_bb, CurBasicBlock);

    if(ctx->Else()){
        //  开始构建FalseBlock
        CurBasicBlock = false_bb;
        visitStmt(ctx->stmt(1));

        //  原理同上，为CurBLock构建Br指令
        f.build_br_inst(nxt_bb, CurBasicBlock);
    }
    CurBasicBlock = nxt_bb;
    return nullptr;
}

antlrcpp::Any Visitor::visitWhileStmt(SysYParser::WhileStmtContext *ctx) {
    //  构建要跳转的CurCondBlock
    BasicBlock* cond_block = f.build_basic_block(CurFunction);
    f.build_br_inst(cond_block, CurBasicBlock);
    CurBasicBlock = cond_block;

    BasicBlock* true_bb = f.build_basic_block(CurFunction);
    BasicBlock* false_bb = f.build_basic_block(CurFunction);
    //  入栈，注意这里entry为CurCondBlock，因为continue要重新判断条件
    whileEntryBlocks.push_back(cond_block);
    whileOutBlocks.push_back(false_bb);

    visitLorExp(ctx->lorExp(), true_bb, false_bb);

    CurBasicBlock = true_bb;
    visitStmt(ctx->stmt());
    f.build_br_inst(cond_block, CurBasicBlock);
    CurBasicBlock = false_bb;

    //  while内的指令构建完了，出栈
    whileEntryBlocks.pop_back();
    whileOutBlocks.pop_back();
    return nullptr;
}

antlrcpp::Any Visitor::visitStmt(SysYParser::StmtContext *ctx) {
    if(ctx->return_()){
        visitReturn(ctx->return_());
    }
    else if(ctx->expStmt()){
        visitExp(ctx->expStmt()->exp(), false);
    }
    else if(ctx->block()){
        push_sym_table();
        visitBlock(ctx->block());
        pop_sym_table();
    }
    else if(ctx->assign()){
        visitLVal(ctx->assign()->lVal(), false);
        Value* pointer = CurValue;
        visitExp(ctx->assign()->exp(), false);
        f.build_store_inst(CurValue, pointer, CurBasicBlock);
    }
    else if(ctx->ifStmt()){
        visitIfStmt(ctx->ifStmt());
    }
    else if(ctx->whileStmt()){
        visitWhileStmt(ctx->whileStmt());
    }
    else if(ctx->break_()){
        if(whileOutBlocks.empty()) return nullptr;
        BasicBlock* whileOutBlock = whileOutBlocks.back();
        f.build_br_inst(whileOutBlock, CurBasicBlock);
        CurBasicBlock = f.build_basic_block(CurFunction);
    }
    else if(ctx->continue_()){
        if(whileEntryBlocks.empty()) return nullptr;
        BasicBlock* whileEntryBlock = whileEntryBlocks.back();
        f.build_br_inst(whileEntryBlock, CurBasicBlock);
        CurBasicBlock = f.build_basic_block(CurFunction);
    }
    return nullptr;
}

//  finished
antlrcpp::Any Visitor::visitBlockItem(SysYParser::BlockItemContext *ctx) {
    if(ctx->stmt()){
        visitStmt(ctx->stmt());
    }
    else if(ctx->decl()){
        visitDecl(ctx->decl(), false);
    }
    return nullptr;
}

antlrcpp::Any Visitor::visitBlock(SysYParser::BlockContext *ctx) {
    visitChildren(ctx);
    return nullptr;
}

antlrcpp::Any Visitor::visitFuncDef(SysYParser::FuncDefContext *ctx) {
    std::string ident = ctx->Ident()->getText();
    std::string type = ctx->funcType()->getText();

    CurFunction = f.build_function(ident, type, ir_module);

    push_symbol(ident, CurFunction);
    argHashMap.clear();

    push_sym_table();
    CurBasicBlock = f.build_basic_block(CurFunction);
    if(!ctx->funcFParam().empty()){
        for(auto func_fparam : ctx->funcFParam()){
            std::string arg_name = func_fparam->Ident()->getText();
            std::string arg_type = func_fparam->bType()->getText();
            Argument* arg;

            if(!func_fparam->exp().empty()){
                //  TODO:
            }
            else {
                arg = IRBuildFactory::build_arg(arg_name, arg_type, CurFunction);
            }
            AllocInst* allocInst = f.build_alloc_inst(arg->get_type(), CurBasicBlock);
            f.build_store_inst(arg, allocInst, CurBasicBlock);
            push_symbol(arg_name, allocInst);
        }
        BasicBlock* tmp_bb = f.build_basic_block(CurFunction);
        IRBuildFactory::build_br_inst(tmp_bb, CurBasicBlock);
        CurBasicBlock = tmp_bb;
    }

    visitBlock(ctx->block());

    pop_sym_table();
    return nullptr;
}

std::vector<Value*> Visitor::visitInitArray(std::vector<int> indexs, SysYParser::InitArrayContext *ctx, IR::Value *fillValue, bool isConst) {
    int curNum = 0;
    int totSize = 1;
    std::vector<Value*> values;
    for (int index : indexs) {
        totSize *= index;
    }

    for(auto init : ctx->init()){
        if(init->exp()){
            curNum++;
            visitExp(init->exp(), isConst);
            values.push_back(CurValue);
            //  TODO ！！！常量数组的优化！！！
        }
        else if(init->initArray()){
            std::vector<int> newIndexs;
            int start = 0;
            if(curNum == 0){
                start = 1;
            }
            else{
                int tmpMul = 1;
                for(int i = indexs.size() - 1; i >= 0; i--){
                    tmpMul *= indexs[i];
                    if(curNum % tmpMul != 0){
                        start = i + 1;
                        break;
                    }
                }
            }

            for(int i = start; i < indexs.size(); i++){
                newIndexs.push_back(indexs[i]);
            }
            std::vector<Value*> newValues = visitInitArray(newIndexs, init->initArray(), fillValue, isConst);
            values.insert(values.end(), newValues.begin(), newValues.end());
            curNum += newValues.size();
        }
    }

    //  填充元素
    for(int i = curNum; i < totSize; i++){
        values.push_back(fillValue);
    }
    return values;
}

antlrcpp::Any Visitor::visitVarDef(SysYParser::DefContext* ctx, Type* type, bool is_global){
    std::string ident = ctx->Ident()->getText();
    Value* fill_value;
    if(type == IntegerType::get_instance()) {
        fill_value = f.build_number(0);
    }
    else if(type == FloatType::get_instance()){
        fill_value = f.build_number((float) 0.0);
    }

    //  数组
    if(!ctx->exp().empty()){
        visitArray(ident, type, ctx->init()->initArray(), ctx->exp(), is_global, is_global);
    }
    //  普通变量
    else {
        if (is_global) {
            if(ctx->init()){
                visitExp(ctx->init()->exp(), true);
                CurValue = IRBuildFactory::get_global_var(ident, CurValue->get_type(), CurValue);
            }
            else{
                CurValue = IRBuildFactory::get_global_var(ident, type, fill_value);
            }
            ir_module->add_global_var(dynamic_cast<GlobalVar*>(CurValue));
        }
        else {
            CurValue = IRBuildFactory::build_alloc_inst(type, CurBasicBlock);
            if(ctx->init()->exp()){
                Value* tmp_value = CurValue;
                visitExp(ctx->init()->exp(), false);
                f.build_store_inst(CurValue, tmp_value, CurBasicBlock);
                CurValue = tmp_value;
            }
        }
        push_symbol(ident, CurValue);
    }
    return nullptr;
}

void Visitor::visitArray(const std::string& ident, Type* type, SysYParser::InitArrayContext* initArray, std::vector<SysYParser::ExpContext*>exps, bool is_global, bool is_const){
    Value* fill_value;
    if(type == IntegerType::get_instance()) {
        fill_value = f.build_number(0);
    }
    else if(type == FloatType::get_instance()){
        fill_value = f.build_number((float) 0.0);
    }

    int size = 1;
    std::vector<int> dim_indexs;
    for(auto exp : exps){
        visitExp(exp, is_const);
        int x = dynamic_cast<ConstInt*>(CurValue)->get_value();
        dim_indexs.push_back(x);
        size *= x;
    }
    std::vector<Value*> init_values = visitInitArray(dim_indexs, initArray, fill_value, is_const);

    //  全局变量数组
    if(is_global){
        GlobalVar* global_var = IRBuildFactory::get_global_var(ident, type, init_values);
        ir_module->add_global_var(global_var);
        push_symbol(ident, global_var);
    }
    //  局部变量数组
    else{
        Value* base_ptr = f.build_alloc_inst(size, type, CurBasicBlock);
        for(int i = 0; i < init_values.size(); i++){
            Value* init_value = init_values[i];
            if(init_value->get_name() == "flag"){
                continue;
            }
            CurValue = f.build_ptr_inst(base_ptr, f.build_number(i), CurBasicBlock);
            f.build_store_inst(init_value, CurValue, CurBasicBlock);
        }
        push_symbol(ident, base_ptr);
    }
}

antlrcpp::Any Visitor::visitConstDef(SysYParser::DefContext *ctx, Type* type, bool is_global){
    std::string ident = ctx->Ident()->getText();

    //  数组
    if(ctx->exp().size() != 0){
        visitArray(ident, type, ctx->init()->initArray(), ctx->exp(), is_global, true);
    }
    else{
        visitExp(ctx->init()->exp(), true);
        if(type == IntegerType::get_instance() && CurValue->get_type() == FloatType::get_instance()){
            auto const_float = dynamic_cast<ConstFloat*>(CurValue);
            CurValue = f.build_number((int) const_float->get_value());
        }
        else if(type == FloatType::get_instance() && CurValue->get_type() == IntegerType::get_instance()){
            auto const_int = dynamic_cast<ConstInt*>(CurValue);
            CurValue = f.build_number((float) const_int->get_value());
        }
        push_symbol(ident, CurValue);
    }
    return nullptr;
}

antlrcpp::Any Visitor::visitDecl(SysYParser::DeclContext *ctx, bool is_global) {
    bool is_const = false;
    if(ctx->Const()) is_const = true;
    std::string type_string = ctx->bType()->getText();
    Type* type;
    if(type_string == "int") type = IntegerType::get_instance();
    else if(type_string == "float") type = FloatType::get_instance();

    for(auto def : ctx->def()){
        if(is_const) visitConstDef(def, type, is_global);
        else visitVarDef(def, type, is_global);
    }
    return nullptr;
}

antlrcpp::Any Visitor::visitGlobalDecl(SysYParser::GlobalDeclContext *ctx) {
    visitDecl(ctx->decl(), true);
    return nullptr;
}

void Visitor::register_lib_func(){
    print_func->add_arg(new Argument("x", IntegerType::get_instance(), print_func));
    print_ch_func->add_arg(new Argument("x", IntegerType::get_instance(), print_ch_func));
    print_float_func->add_arg(new Argument("x", FloatType::get_instance(), print_float_func));
    print_arr_func->add_arg(new Argument("x", IntegerType::get_instance(), print_arr_func));
    print_arr_func->add_arg(new Argument("x2", PointerType::get_i32_ptr_instance(), print_arr_func));
    print_farr_func->add_arg(new Argument("x", IntegerType::get_instance(), print_farr_func));
    print_farr_func->add_arg(new Argument("x2", PointerType::get_f32_ptr_instance(), print_farr_func));

    input_arr_func->add_arg(new Argument("x", PointerType::get_i32_ptr_instance(), input_arr_func));
    input_farr_func->add_arg(new Argument("x", PointerType::get_f32_ptr_instance(), input_farr_func));

    memset_func->add_arg(new Argument("x", PointerType::get_i32_ptr_instance(), memset_func));
    memset_func->add_arg(new Argument("x2", IntegerType::get_instance(), memset_func));
    memset_func->add_arg(new Argument("x3", IntegerType::get_instance(), memset_func));

    start_time_func->add_arg(new Argument("x", IntegerType::get_instance(), start_time_func));
    stop_time_func->add_arg(new Argument("x2", IntegerType::get_instance(), stop_time_func));

    print_func->set_as_lib_function();
    print_ch_func->set_as_lib_function();
    print_float_func->set_as_lib_function();
    print_arr_func->set_as_lib_function();
    print_farr_func->set_as_lib_function();

    input_func->set_as_lib_function();
    input_ch_func->set_as_lib_function();
    input_float_func->set_as_lib_function();
    input_arr_func->set_as_lib_function();
    input_farr_func->set_as_lib_function();

    memset_func->set_as_lib_function();
    start_time_func->set_as_lib_function();
    stop_time_func->set_as_lib_function();
}

antlrcpp::Any Visitor::visitCompUnit(SysYParser::CompUnitContext *ctx){

    register_lib_func();
    push_sym_table();
    visitChildren(ctx);

    return nullptr;
}
