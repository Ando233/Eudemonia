
// Generated from SysY.g4 by ANTLR 4.13.0


#include "SysYVisitor.h"

#include "SysYParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct SysYParserStaticData final {
  SysYParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SysYParserStaticData(const SysYParserStaticData&) = delete;
  SysYParserStaticData(SysYParserStaticData&&) = delete;
  SysYParserStaticData& operator=(const SysYParserStaticData&) = delete;
  SysYParserStaticData& operator=(SysYParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag sysyParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
SysYParserStaticData *sysyParserStaticData = nullptr;

void sysyParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (sysyParserStaticData != nullptr) {
    return;
  }
#else
  assert(sysyParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<SysYParserStaticData>(
    std::vector<std::string>{
      "compUnit", "decl", "def", "initVal", "initArray", "exp", "unaryExp", 
      "primaryExp", "call", "number", "lVal", "funcDef", "funcFParam", "block", 
      "stmt", "assign", "expStmt", "ifStmt", "whileStmt", "break", "continue", 
      "return", "unaryOP", "op", "bType", "funcType"
    },
    std::vector<std::string>{
      "", "'='", "'int'", "'float'", "'void'", "'const'", "'return'", "'if'", 
      "'else'", "'for'", "'while'", "'do'", "'break'", "'continue'", "'('", 
      "')'", "'['", "']'", "'{'", "'}'", "','", "';'", "'\\u003F'", "':'", 
      "'-'", "'!'", "'+'", "'*'", "'/'", "'%'", "'&&'", "'||'", "'=='", 
      "'!='", "'<'", "'<='", "'>'", "'>='"
    },
    std::vector<std::string>{
      "", "", "Int", "Float", "Void", "Const", "Return", "If", "Else", "For", 
      "While", "Do", "Break", "Continue", "Lparen", "Rparen", "Lbrkt", "Rbrkt", 
      "Lbrace", "Rbrace", "Comma", "Semicolon", "Question", "Colon", "Sub", 
      "Not", "Add", "Mul", "Div", "Mod", "LAnd", "LOr", "Eq", "Ne", "Lt", 
      "Le", "Gt", "Ge", "FloatConst", "DecimalFloatConst", "HexadecimalFloatConst", 
      "IntConst", "Ident", "STRING", "WS", "LINE_COMMENT", "COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,46,254,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,1,0,1,0,5,0,55,8,0,10,0,12,
  	0,58,9,0,1,0,1,0,1,1,3,1,63,8,1,1,1,1,1,1,1,1,1,5,1,69,8,1,10,1,12,1,
  	72,9,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,5,2,81,8,2,10,2,12,2,84,9,2,1,2,1,
  	2,1,2,3,2,89,8,2,3,2,91,8,2,1,3,1,3,1,4,1,4,1,4,1,4,5,4,99,8,4,10,4,12,
  	4,102,9,4,3,4,104,8,4,1,4,1,4,1,5,1,5,1,5,1,5,5,5,112,8,5,10,5,12,5,115,
  	9,5,1,6,5,6,118,8,6,10,6,12,6,121,9,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,
  	1,7,3,7,132,8,7,1,8,1,8,1,8,1,8,1,8,5,8,139,8,8,10,8,12,8,142,9,8,3,8,
  	144,8,8,1,8,1,8,1,9,1,9,1,10,1,10,1,10,1,10,1,10,5,10,155,8,10,10,10,
  	12,10,158,9,10,1,11,1,11,1,11,1,11,1,11,1,11,5,11,166,8,11,10,11,12,11,
  	169,9,11,3,11,171,8,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,1,
  	12,1,12,5,12,184,8,12,10,12,12,12,187,9,12,1,13,1,13,1,13,5,13,192,8,
  	13,10,13,12,13,195,9,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,
  	1,14,3,14,207,8,14,1,15,1,15,1,15,1,15,1,15,1,16,3,16,215,8,16,1,16,1,
  	16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,3,17,226,8,17,1,18,1,18,1,18,1,
  	18,1,18,1,18,1,19,1,19,1,19,1,20,1,20,1,20,1,21,1,21,3,21,242,8,21,1,
  	21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,1,25,1,25,1,25,0,0,26,0,2,4,6,8,
  	10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,0,5,2,
  	0,38,38,41,41,1,0,24,26,1,0,24,37,1,0,2,3,1,0,2,4,259,0,56,1,0,0,0,2,
  	62,1,0,0,0,4,75,1,0,0,0,6,92,1,0,0,0,8,94,1,0,0,0,10,107,1,0,0,0,12,119,
  	1,0,0,0,14,131,1,0,0,0,16,133,1,0,0,0,18,147,1,0,0,0,20,149,1,0,0,0,22,
  	159,1,0,0,0,24,175,1,0,0,0,26,188,1,0,0,0,28,206,1,0,0,0,30,208,1,0,0,
  	0,32,214,1,0,0,0,34,218,1,0,0,0,36,227,1,0,0,0,38,233,1,0,0,0,40,236,
  	1,0,0,0,42,239,1,0,0,0,44,245,1,0,0,0,46,247,1,0,0,0,48,249,1,0,0,0,50,
  	251,1,0,0,0,52,55,3,2,1,0,53,55,3,22,11,0,54,52,1,0,0,0,54,53,1,0,0,0,
  	55,58,1,0,0,0,56,54,1,0,0,0,56,57,1,0,0,0,57,59,1,0,0,0,58,56,1,0,0,0,
  	59,60,5,0,0,1,60,1,1,0,0,0,61,63,5,5,0,0,62,61,1,0,0,0,62,63,1,0,0,0,
  	63,64,1,0,0,0,64,65,3,48,24,0,65,70,3,4,2,0,66,67,5,20,0,0,67,69,3,4,
  	2,0,68,66,1,0,0,0,69,72,1,0,0,0,70,68,1,0,0,0,70,71,1,0,0,0,71,73,1,0,
  	0,0,72,70,1,0,0,0,73,74,5,21,0,0,74,3,1,0,0,0,75,82,5,42,0,0,76,77,5,
  	16,0,0,77,78,3,10,5,0,78,79,5,17,0,0,79,81,1,0,0,0,80,76,1,0,0,0,81,84,
  	1,0,0,0,82,80,1,0,0,0,82,83,1,0,0,0,83,90,1,0,0,0,84,82,1,0,0,0,85,88,
  	5,1,0,0,86,89,3,6,3,0,87,89,3,8,4,0,88,86,1,0,0,0,88,87,1,0,0,0,89,91,
  	1,0,0,0,90,85,1,0,0,0,90,91,1,0,0,0,91,5,1,0,0,0,92,93,3,10,5,0,93,7,
  	1,0,0,0,94,103,5,18,0,0,95,100,3,6,3,0,96,97,5,20,0,0,97,99,3,6,3,0,98,
  	96,1,0,0,0,99,102,1,0,0,0,100,98,1,0,0,0,100,101,1,0,0,0,101,104,1,0,
  	0,0,102,100,1,0,0,0,103,95,1,0,0,0,103,104,1,0,0,0,104,105,1,0,0,0,105,
  	106,5,19,0,0,106,9,1,0,0,0,107,113,3,12,6,0,108,109,3,46,23,0,109,110,
  	3,12,6,0,110,112,1,0,0,0,111,108,1,0,0,0,112,115,1,0,0,0,113,111,1,0,
  	0,0,113,114,1,0,0,0,114,11,1,0,0,0,115,113,1,0,0,0,116,118,3,44,22,0,
  	117,116,1,0,0,0,118,121,1,0,0,0,119,117,1,0,0,0,119,120,1,0,0,0,120,122,
  	1,0,0,0,121,119,1,0,0,0,122,123,3,14,7,0,123,13,1,0,0,0,124,125,5,14,
  	0,0,125,126,3,10,5,0,126,127,5,15,0,0,127,132,1,0,0,0,128,132,3,20,10,
  	0,129,132,3,18,9,0,130,132,3,16,8,0,131,124,1,0,0,0,131,128,1,0,0,0,131,
  	129,1,0,0,0,131,130,1,0,0,0,132,15,1,0,0,0,133,134,5,42,0,0,134,143,5,
  	14,0,0,135,140,3,10,5,0,136,137,5,20,0,0,137,139,3,10,5,0,138,136,1,0,
  	0,0,139,142,1,0,0,0,140,138,1,0,0,0,140,141,1,0,0,0,141,144,1,0,0,0,142,
  	140,1,0,0,0,143,135,1,0,0,0,143,144,1,0,0,0,144,145,1,0,0,0,145,146,5,
  	15,0,0,146,17,1,0,0,0,147,148,7,0,0,0,148,19,1,0,0,0,149,156,5,42,0,0,
  	150,151,5,16,0,0,151,152,3,10,5,0,152,153,5,17,0,0,153,155,1,0,0,0,154,
  	150,1,0,0,0,155,158,1,0,0,0,156,154,1,0,0,0,156,157,1,0,0,0,157,21,1,
  	0,0,0,158,156,1,0,0,0,159,160,3,50,25,0,160,161,5,42,0,0,161,170,5,14,
  	0,0,162,167,3,24,12,0,163,164,5,20,0,0,164,166,3,24,12,0,165,163,1,0,
  	0,0,166,169,1,0,0,0,167,165,1,0,0,0,167,168,1,0,0,0,168,171,1,0,0,0,169,
  	167,1,0,0,0,170,162,1,0,0,0,170,171,1,0,0,0,171,172,1,0,0,0,172,173,5,
  	15,0,0,173,174,3,26,13,0,174,23,1,0,0,0,175,176,3,48,24,0,176,177,5,42,
  	0,0,177,178,5,16,0,0,178,185,5,17,0,0,179,180,5,16,0,0,180,181,3,10,5,
  	0,181,182,5,17,0,0,182,184,1,0,0,0,183,179,1,0,0,0,184,187,1,0,0,0,185,
  	183,1,0,0,0,185,186,1,0,0,0,186,25,1,0,0,0,187,185,1,0,0,0,188,193,5,
  	18,0,0,189,192,3,2,1,0,190,192,3,28,14,0,191,189,1,0,0,0,191,190,1,0,
  	0,0,192,195,1,0,0,0,193,191,1,0,0,0,193,194,1,0,0,0,194,196,1,0,0,0,195,
  	193,1,0,0,0,196,197,5,19,0,0,197,27,1,0,0,0,198,207,3,30,15,0,199,207,
  	3,32,16,0,200,207,3,26,13,0,201,207,3,34,17,0,202,207,3,36,18,0,203,207,
  	3,38,19,0,204,207,3,40,20,0,205,207,3,42,21,0,206,198,1,0,0,0,206,199,
  	1,0,0,0,206,200,1,0,0,0,206,201,1,0,0,0,206,202,1,0,0,0,206,203,1,0,0,
  	0,206,204,1,0,0,0,206,205,1,0,0,0,207,29,1,0,0,0,208,209,3,20,10,0,209,
  	210,5,1,0,0,210,211,3,10,5,0,211,212,5,21,0,0,212,31,1,0,0,0,213,215,
  	3,10,5,0,214,213,1,0,0,0,214,215,1,0,0,0,215,216,1,0,0,0,216,217,5,21,
  	0,0,217,33,1,0,0,0,218,219,5,7,0,0,219,220,5,14,0,0,220,221,3,10,5,0,
  	221,222,5,15,0,0,222,225,3,28,14,0,223,224,5,8,0,0,224,226,3,28,14,0,
  	225,223,1,0,0,0,225,226,1,0,0,0,226,35,1,0,0,0,227,228,5,10,0,0,228,229,
  	5,14,0,0,229,230,3,10,5,0,230,231,5,15,0,0,231,232,3,28,14,0,232,37,1,
  	0,0,0,233,234,5,12,0,0,234,235,5,21,0,0,235,39,1,0,0,0,236,237,5,13,0,
  	0,237,238,5,21,0,0,238,41,1,0,0,0,239,241,5,6,0,0,240,242,3,10,5,0,241,
  	240,1,0,0,0,241,242,1,0,0,0,242,243,1,0,0,0,243,244,5,21,0,0,244,43,1,
  	0,0,0,245,246,7,1,0,0,246,45,1,0,0,0,247,248,7,2,0,0,248,47,1,0,0,0,249,
  	250,7,3,0,0,250,49,1,0,0,0,251,252,7,4,0,0,252,51,1,0,0,0,24,54,56,62,
  	70,82,88,90,100,103,113,119,131,140,143,156,167,170,185,191,193,206,214,
  	225,241
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  sysyParserStaticData = staticData.release();
}

}

SysYParser::SysYParser(TokenStream *input) : SysYParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

SysYParser::SysYParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  SysYParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *sysyParserStaticData->atn, sysyParserStaticData->decisionToDFA, sysyParserStaticData->sharedContextCache, options);
}

SysYParser::~SysYParser() {
  delete _interpreter;
}

const atn::ATN& SysYParser::getATN() const {
  return *sysyParserStaticData->atn;
}

std::string SysYParser::getGrammarFileName() const {
  return "SysY.g4";
}

const std::vector<std::string>& SysYParser::getRuleNames() const {
  return sysyParserStaticData->ruleNames;
}

const dfa::Vocabulary& SysYParser::getVocabulary() const {
  return sysyParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SysYParser::getSerializedATN() const {
  return sysyParserStaticData->serializedATN;
}


//----------------- CompUnitContext ------------------------------------------------------------------

SysYParser::CompUnitContext::CompUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::CompUnitContext::EOF() {
  return getToken(SysYParser::EOF, 0);
}

std::vector<SysYParser::DeclContext *> SysYParser::CompUnitContext::decl() {
  return getRuleContexts<SysYParser::DeclContext>();
}

SysYParser::DeclContext* SysYParser::CompUnitContext::decl(size_t i) {
  return getRuleContext<SysYParser::DeclContext>(i);
}

std::vector<SysYParser::FuncDefContext *> SysYParser::CompUnitContext::funcDef() {
  return getRuleContexts<SysYParser::FuncDefContext>();
}

SysYParser::FuncDefContext* SysYParser::CompUnitContext::funcDef(size_t i) {
  return getRuleContext<SysYParser::FuncDefContext>(i);
}


size_t SysYParser::CompUnitContext::getRuleIndex() const {
  return SysYParser::RuleCompUnit;
}


std::any SysYParser::CompUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitCompUnit(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::CompUnitContext* SysYParser::compUnit() {
  CompUnitContext *_localctx = _tracker.createInstance<CompUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, SysYParser::RuleCompUnit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 60) != 0)) {
      setState(54);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(52);
        decl();
        break;
      }

      case 2: {
        setState(53);
        funcDef();
        break;
      }

      default:
        break;
      }
      setState(58);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(59);
    match(SysYParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

SysYParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::BTypeContext* SysYParser::DeclContext::bType() {
  return getRuleContext<SysYParser::BTypeContext>(0);
}

std::vector<SysYParser::DefContext *> SysYParser::DeclContext::def() {
  return getRuleContexts<SysYParser::DefContext>();
}

SysYParser::DefContext* SysYParser::DeclContext::def(size_t i) {
  return getRuleContext<SysYParser::DefContext>(i);
}

tree::TerminalNode* SysYParser::DeclContext::Semicolon() {
  return getToken(SysYParser::Semicolon, 0);
}

tree::TerminalNode* SysYParser::DeclContext::Const() {
  return getToken(SysYParser::Const, 0);
}

std::vector<tree::TerminalNode *> SysYParser::DeclContext::Comma() {
  return getTokens(SysYParser::Comma);
}

tree::TerminalNode* SysYParser::DeclContext::Comma(size_t i) {
  return getToken(SysYParser::Comma, i);
}


size_t SysYParser::DeclContext::getRuleIndex() const {
  return SysYParser::RuleDecl;
}


std::any SysYParser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::DeclContext* SysYParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 2, SysYParser::RuleDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SysYParser::Const) {
      setState(61);
      match(SysYParser::Const);
    }
    setState(64);
    bType();
    setState(65);
    def();
    setState(70);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::Comma) {
      setState(66);
      match(SysYParser::Comma);
      setState(67);
      def();
      setState(72);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(73);
    match(SysYParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefContext ------------------------------------------------------------------

SysYParser::DefContext::DefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::DefContext::Ident() {
  return getToken(SysYParser::Ident, 0);
}

std::vector<tree::TerminalNode *> SysYParser::DefContext::Lbrkt() {
  return getTokens(SysYParser::Lbrkt);
}

tree::TerminalNode* SysYParser::DefContext::Lbrkt(size_t i) {
  return getToken(SysYParser::Lbrkt, i);
}

std::vector<SysYParser::ExpContext *> SysYParser::DefContext::exp() {
  return getRuleContexts<SysYParser::ExpContext>();
}

SysYParser::ExpContext* SysYParser::DefContext::exp(size_t i) {
  return getRuleContext<SysYParser::ExpContext>(i);
}

std::vector<tree::TerminalNode *> SysYParser::DefContext::Rbrkt() {
  return getTokens(SysYParser::Rbrkt);
}

tree::TerminalNode* SysYParser::DefContext::Rbrkt(size_t i) {
  return getToken(SysYParser::Rbrkt, i);
}

SysYParser::InitValContext* SysYParser::DefContext::initVal() {
  return getRuleContext<SysYParser::InitValContext>(0);
}

SysYParser::InitArrayContext* SysYParser::DefContext::initArray() {
  return getRuleContext<SysYParser::InitArrayContext>(0);
}


size_t SysYParser::DefContext::getRuleIndex() const {
  return SysYParser::RuleDef;
}


std::any SysYParser::DefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitDef(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::DefContext* SysYParser::def() {
  DefContext *_localctx = _tracker.createInstance<DefContext>(_ctx, getState());
  enterRule(_localctx, 4, SysYParser::RuleDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    match(SysYParser::Ident);
    setState(82);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::Lbrkt) {
      setState(76);
      match(SysYParser::Lbrkt);
      setState(77);
      exp();
      setState(78);
      match(SysYParser::Rbrkt);
      setState(84);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(90);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SysYParser::T__0) {
      setState(85);
      match(SysYParser::T__0);
      setState(88);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SysYParser::Lparen:
        case SysYParser::Sub:
        case SysYParser::Not:
        case SysYParser::Add:
        case SysYParser::FloatConst:
        case SysYParser::IntConst:
        case SysYParser::Ident: {
          setState(86);
          initVal();
          break;
        }

        case SysYParser::Lbrace: {
          setState(87);
          initArray();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitValContext ------------------------------------------------------------------

SysYParser::InitValContext::InitValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::ExpContext* SysYParser::InitValContext::exp() {
  return getRuleContext<SysYParser::ExpContext>(0);
}


size_t SysYParser::InitValContext::getRuleIndex() const {
  return SysYParser::RuleInitVal;
}


std::any SysYParser::InitValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitInitVal(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::InitValContext* SysYParser::initVal() {
  InitValContext *_localctx = _tracker.createInstance<InitValContext>(_ctx, getState());
  enterRule(_localctx, 6, SysYParser::RuleInitVal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    exp();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitArrayContext ------------------------------------------------------------------

SysYParser::InitArrayContext::InitArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::InitArrayContext::Lbrace() {
  return getToken(SysYParser::Lbrace, 0);
}

tree::TerminalNode* SysYParser::InitArrayContext::Rbrace() {
  return getToken(SysYParser::Rbrace, 0);
}

std::vector<SysYParser::InitValContext *> SysYParser::InitArrayContext::initVal() {
  return getRuleContexts<SysYParser::InitValContext>();
}

SysYParser::InitValContext* SysYParser::InitArrayContext::initVal(size_t i) {
  return getRuleContext<SysYParser::InitValContext>(i);
}

std::vector<tree::TerminalNode *> SysYParser::InitArrayContext::Comma() {
  return getTokens(SysYParser::Comma);
}

tree::TerminalNode* SysYParser::InitArrayContext::Comma(size_t i) {
  return getToken(SysYParser::Comma, i);
}


size_t SysYParser::InitArrayContext::getRuleIndex() const {
  return SysYParser::RuleInitArray;
}


std::any SysYParser::InitArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitInitArray(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::InitArrayContext* SysYParser::initArray() {
  InitArrayContext *_localctx = _tracker.createInstance<InitArrayContext>(_ctx, getState());
  enterRule(_localctx, 8, SysYParser::RuleInitArray);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    match(SysYParser::Lbrace);
    setState(103);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6872065130496) != 0)) {
      setState(95);
      initVal();
      setState(100);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysYParser::Comma) {
        setState(96);
        match(SysYParser::Comma);
        setState(97);
        initVal();
        setState(102);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(105);
    match(SysYParser::Rbrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpContext ------------------------------------------------------------------

SysYParser::ExpContext::ExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SysYParser::UnaryExpContext *> SysYParser::ExpContext::unaryExp() {
  return getRuleContexts<SysYParser::UnaryExpContext>();
}

SysYParser::UnaryExpContext* SysYParser::ExpContext::unaryExp(size_t i) {
  return getRuleContext<SysYParser::UnaryExpContext>(i);
}

std::vector<SysYParser::OpContext *> SysYParser::ExpContext::op() {
  return getRuleContexts<SysYParser::OpContext>();
}

SysYParser::OpContext* SysYParser::ExpContext::op(size_t i) {
  return getRuleContext<SysYParser::OpContext>(i);
}


size_t SysYParser::ExpContext::getRuleIndex() const {
  return SysYParser::RuleExp;
}


std::any SysYParser::ExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitExp(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::ExpContext* SysYParser::exp() {
  ExpContext *_localctx = _tracker.createInstance<ExpContext>(_ctx, getState());
  enterRule(_localctx, 10, SysYParser::RuleExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107);
    unaryExp();
    setState(113);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 274861129728) != 0)) {
      setState(108);
      op();
      setState(109);
      unaryExp();
      setState(115);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpContext ------------------------------------------------------------------

SysYParser::UnaryExpContext::UnaryExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::PrimaryExpContext* SysYParser::UnaryExpContext::primaryExp() {
  return getRuleContext<SysYParser::PrimaryExpContext>(0);
}

std::vector<SysYParser::UnaryOPContext *> SysYParser::UnaryExpContext::unaryOP() {
  return getRuleContexts<SysYParser::UnaryOPContext>();
}

SysYParser::UnaryOPContext* SysYParser::UnaryExpContext::unaryOP(size_t i) {
  return getRuleContext<SysYParser::UnaryOPContext>(i);
}


size_t SysYParser::UnaryExpContext::getRuleIndex() const {
  return SysYParser::RuleUnaryExp;
}


std::any SysYParser::UnaryExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitUnaryExp(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::UnaryExpContext* SysYParser::unaryExp() {
  UnaryExpContext *_localctx = _tracker.createInstance<UnaryExpContext>(_ctx, getState());
  enterRule(_localctx, 12, SysYParser::RuleUnaryExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 117440512) != 0)) {
      setState(116);
      unaryOP();
      setState(121);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(122);
    primaryExp();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryExpContext ------------------------------------------------------------------

SysYParser::PrimaryExpContext::PrimaryExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::PrimaryExpContext::Lparen() {
  return getToken(SysYParser::Lparen, 0);
}

SysYParser::ExpContext* SysYParser::PrimaryExpContext::exp() {
  return getRuleContext<SysYParser::ExpContext>(0);
}

tree::TerminalNode* SysYParser::PrimaryExpContext::Rparen() {
  return getToken(SysYParser::Rparen, 0);
}

SysYParser::LValContext* SysYParser::PrimaryExpContext::lVal() {
  return getRuleContext<SysYParser::LValContext>(0);
}

SysYParser::NumberContext* SysYParser::PrimaryExpContext::number() {
  return getRuleContext<SysYParser::NumberContext>(0);
}

SysYParser::CallContext* SysYParser::PrimaryExpContext::call() {
  return getRuleContext<SysYParser::CallContext>(0);
}


size_t SysYParser::PrimaryExpContext::getRuleIndex() const {
  return SysYParser::RulePrimaryExp;
}


std::any SysYParser::PrimaryExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitPrimaryExp(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::PrimaryExpContext* SysYParser::primaryExp() {
  PrimaryExpContext *_localctx = _tracker.createInstance<PrimaryExpContext>(_ctx, getState());
  enterRule(_localctx, 14, SysYParser::RulePrimaryExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(131);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(124);
      match(SysYParser::Lparen);
      setState(125);
      exp();
      setState(126);
      match(SysYParser::Rparen);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(128);
      lVal();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(129);
      number();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(130);
      call();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallContext ------------------------------------------------------------------

SysYParser::CallContext::CallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::CallContext::Ident() {
  return getToken(SysYParser::Ident, 0);
}

tree::TerminalNode* SysYParser::CallContext::Lparen() {
  return getToken(SysYParser::Lparen, 0);
}

tree::TerminalNode* SysYParser::CallContext::Rparen() {
  return getToken(SysYParser::Rparen, 0);
}

std::vector<SysYParser::ExpContext *> SysYParser::CallContext::exp() {
  return getRuleContexts<SysYParser::ExpContext>();
}

SysYParser::ExpContext* SysYParser::CallContext::exp(size_t i) {
  return getRuleContext<SysYParser::ExpContext>(i);
}

std::vector<tree::TerminalNode *> SysYParser::CallContext::Comma() {
  return getTokens(SysYParser::Comma);
}

tree::TerminalNode* SysYParser::CallContext::Comma(size_t i) {
  return getToken(SysYParser::Comma, i);
}


size_t SysYParser::CallContext::getRuleIndex() const {
  return SysYParser::RuleCall;
}


std::any SysYParser::CallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitCall(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::CallContext* SysYParser::call() {
  CallContext *_localctx = _tracker.createInstance<CallContext>(_ctx, getState());
  enterRule(_localctx, 16, SysYParser::RuleCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(133);
    match(SysYParser::Ident);
    setState(134);
    match(SysYParser::Lparen);
    setState(143);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6872065130496) != 0)) {
      setState(135);
      exp();
      setState(140);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysYParser::Comma) {
        setState(136);
        match(SysYParser::Comma);
        setState(137);
        exp();
        setState(142);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(145);
    match(SysYParser::Rparen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

SysYParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::NumberContext::IntConst() {
  return getToken(SysYParser::IntConst, 0);
}

tree::TerminalNode* SysYParser::NumberContext::FloatConst() {
  return getToken(SysYParser::FloatConst, 0);
}


size_t SysYParser::NumberContext::getRuleIndex() const {
  return SysYParser::RuleNumber;
}


std::any SysYParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::NumberContext* SysYParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 18, SysYParser::RuleNumber);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
    _la = _input->LA(1);
    if (!(_la == SysYParser::FloatConst

    || _la == SysYParser::IntConst)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LValContext ------------------------------------------------------------------

SysYParser::LValContext::LValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::LValContext::Ident() {
  return getToken(SysYParser::Ident, 0);
}

std::vector<tree::TerminalNode *> SysYParser::LValContext::Lbrkt() {
  return getTokens(SysYParser::Lbrkt);
}

tree::TerminalNode* SysYParser::LValContext::Lbrkt(size_t i) {
  return getToken(SysYParser::Lbrkt, i);
}

std::vector<SysYParser::ExpContext *> SysYParser::LValContext::exp() {
  return getRuleContexts<SysYParser::ExpContext>();
}

SysYParser::ExpContext* SysYParser::LValContext::exp(size_t i) {
  return getRuleContext<SysYParser::ExpContext>(i);
}

std::vector<tree::TerminalNode *> SysYParser::LValContext::Rbrkt() {
  return getTokens(SysYParser::Rbrkt);
}

tree::TerminalNode* SysYParser::LValContext::Rbrkt(size_t i) {
  return getToken(SysYParser::Rbrkt, i);
}


size_t SysYParser::LValContext::getRuleIndex() const {
  return SysYParser::RuleLVal;
}


std::any SysYParser::LValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitLVal(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::LValContext* SysYParser::lVal() {
  LValContext *_localctx = _tracker.createInstance<LValContext>(_ctx, getState());
  enterRule(_localctx, 20, SysYParser::RuleLVal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    match(SysYParser::Ident);
    setState(156);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::Lbrkt) {
      setState(150);
      match(SysYParser::Lbrkt);
      setState(151);
      exp();
      setState(152);
      match(SysYParser::Rbrkt);
      setState(158);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDefContext ------------------------------------------------------------------

SysYParser::FuncDefContext::FuncDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::FuncTypeContext* SysYParser::FuncDefContext::funcType() {
  return getRuleContext<SysYParser::FuncTypeContext>(0);
}

tree::TerminalNode* SysYParser::FuncDefContext::Ident() {
  return getToken(SysYParser::Ident, 0);
}

tree::TerminalNode* SysYParser::FuncDefContext::Lparen() {
  return getToken(SysYParser::Lparen, 0);
}

tree::TerminalNode* SysYParser::FuncDefContext::Rparen() {
  return getToken(SysYParser::Rparen, 0);
}

SysYParser::BlockContext* SysYParser::FuncDefContext::block() {
  return getRuleContext<SysYParser::BlockContext>(0);
}

std::vector<SysYParser::FuncFParamContext *> SysYParser::FuncDefContext::funcFParam() {
  return getRuleContexts<SysYParser::FuncFParamContext>();
}

SysYParser::FuncFParamContext* SysYParser::FuncDefContext::funcFParam(size_t i) {
  return getRuleContext<SysYParser::FuncFParamContext>(i);
}

std::vector<tree::TerminalNode *> SysYParser::FuncDefContext::Comma() {
  return getTokens(SysYParser::Comma);
}

tree::TerminalNode* SysYParser::FuncDefContext::Comma(size_t i) {
  return getToken(SysYParser::Comma, i);
}


size_t SysYParser::FuncDefContext::getRuleIndex() const {
  return SysYParser::RuleFuncDef;
}


std::any SysYParser::FuncDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitFuncDef(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::FuncDefContext* SysYParser::funcDef() {
  FuncDefContext *_localctx = _tracker.createInstance<FuncDefContext>(_ctx, getState());
  enterRule(_localctx, 22, SysYParser::RuleFuncDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
    funcType();
    setState(160);
    match(SysYParser::Ident);
    setState(161);
    match(SysYParser::Lparen);
    setState(170);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SysYParser::Int

    || _la == SysYParser::Float) {
      setState(162);
      funcFParam();
      setState(167);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysYParser::Comma) {
        setState(163);
        match(SysYParser::Comma);
        setState(164);
        funcFParam();
        setState(169);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(172);
    match(SysYParser::Rparen);
    setState(173);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncFParamContext ------------------------------------------------------------------

SysYParser::FuncFParamContext::FuncFParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::BTypeContext* SysYParser::FuncFParamContext::bType() {
  return getRuleContext<SysYParser::BTypeContext>(0);
}

tree::TerminalNode* SysYParser::FuncFParamContext::Ident() {
  return getToken(SysYParser::Ident, 0);
}

std::vector<tree::TerminalNode *> SysYParser::FuncFParamContext::Lbrkt() {
  return getTokens(SysYParser::Lbrkt);
}

tree::TerminalNode* SysYParser::FuncFParamContext::Lbrkt(size_t i) {
  return getToken(SysYParser::Lbrkt, i);
}

std::vector<tree::TerminalNode *> SysYParser::FuncFParamContext::Rbrkt() {
  return getTokens(SysYParser::Rbrkt);
}

tree::TerminalNode* SysYParser::FuncFParamContext::Rbrkt(size_t i) {
  return getToken(SysYParser::Rbrkt, i);
}

std::vector<SysYParser::ExpContext *> SysYParser::FuncFParamContext::exp() {
  return getRuleContexts<SysYParser::ExpContext>();
}

SysYParser::ExpContext* SysYParser::FuncFParamContext::exp(size_t i) {
  return getRuleContext<SysYParser::ExpContext>(i);
}


size_t SysYParser::FuncFParamContext::getRuleIndex() const {
  return SysYParser::RuleFuncFParam;
}


std::any SysYParser::FuncFParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitFuncFParam(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::FuncFParamContext* SysYParser::funcFParam() {
  FuncFParamContext *_localctx = _tracker.createInstance<FuncFParamContext>(_ctx, getState());
  enterRule(_localctx, 24, SysYParser::RuleFuncFParam);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    bType();
    setState(176);
    match(SysYParser::Ident);

    setState(177);
    match(SysYParser::Lbrkt);
    setState(178);
    match(SysYParser::Rbrkt);
    setState(185);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::Lbrkt) {
      setState(179);
      match(SysYParser::Lbrkt);
      setState(180);
      exp();
      setState(181);
      match(SysYParser::Rbrkt);
      setState(187);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

SysYParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::BlockContext::Lbrace() {
  return getToken(SysYParser::Lbrace, 0);
}

tree::TerminalNode* SysYParser::BlockContext::Rbrace() {
  return getToken(SysYParser::Rbrace, 0);
}

std::vector<SysYParser::DeclContext *> SysYParser::BlockContext::decl() {
  return getRuleContexts<SysYParser::DeclContext>();
}

SysYParser::DeclContext* SysYParser::BlockContext::decl(size_t i) {
  return getRuleContext<SysYParser::DeclContext>(i);
}

std::vector<SysYParser::StmtContext *> SysYParser::BlockContext::stmt() {
  return getRuleContexts<SysYParser::StmtContext>();
}

SysYParser::StmtContext* SysYParser::BlockContext::stmt(size_t i) {
  return getRuleContext<SysYParser::StmtContext>(i);
}


size_t SysYParser::BlockContext::getRuleIndex() const {
  return SysYParser::RuleBlock;
}


std::any SysYParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::BlockContext* SysYParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 26, SysYParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
    match(SysYParser::Lbrace);
    setState(193);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6872067503340) != 0)) {
      setState(191);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SysYParser::Int:
        case SysYParser::Float:
        case SysYParser::Const: {
          setState(189);
          decl();
          break;
        }

        case SysYParser::Return:
        case SysYParser::If:
        case SysYParser::While:
        case SysYParser::Break:
        case SysYParser::Continue:
        case SysYParser::Lparen:
        case SysYParser::Lbrace:
        case SysYParser::Semicolon:
        case SysYParser::Sub:
        case SysYParser::Not:
        case SysYParser::Add:
        case SysYParser::FloatConst:
        case SysYParser::IntConst:
        case SysYParser::Ident: {
          setState(190);
          stmt();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(195);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(196);
    match(SysYParser::Rbrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

SysYParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::AssignContext* SysYParser::StmtContext::assign() {
  return getRuleContext<SysYParser::AssignContext>(0);
}

SysYParser::ExpStmtContext* SysYParser::StmtContext::expStmt() {
  return getRuleContext<SysYParser::ExpStmtContext>(0);
}

SysYParser::BlockContext* SysYParser::StmtContext::block() {
  return getRuleContext<SysYParser::BlockContext>(0);
}

SysYParser::IfStmtContext* SysYParser::StmtContext::ifStmt() {
  return getRuleContext<SysYParser::IfStmtContext>(0);
}

SysYParser::WhileStmtContext* SysYParser::StmtContext::whileStmt() {
  return getRuleContext<SysYParser::WhileStmtContext>(0);
}

SysYParser::BreakContext* SysYParser::StmtContext::break_() {
  return getRuleContext<SysYParser::BreakContext>(0);
}

SysYParser::ContinueContext* SysYParser::StmtContext::continue_() {
  return getRuleContext<SysYParser::ContinueContext>(0);
}

SysYParser::ReturnContext* SysYParser::StmtContext::return_() {
  return getRuleContext<SysYParser::ReturnContext>(0);
}


size_t SysYParser::StmtContext::getRuleIndex() const {
  return SysYParser::RuleStmt;
}


std::any SysYParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::StmtContext* SysYParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 28, SysYParser::RuleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(206);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(198);
      assign();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(199);
      expStmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(200);
      block();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(201);
      ifStmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(202);
      whileStmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(203);
      break_();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(204);
      continue_();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(205);
      return_();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignContext ------------------------------------------------------------------

SysYParser::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::LValContext* SysYParser::AssignContext::lVal() {
  return getRuleContext<SysYParser::LValContext>(0);
}

SysYParser::ExpContext* SysYParser::AssignContext::exp() {
  return getRuleContext<SysYParser::ExpContext>(0);
}

tree::TerminalNode* SysYParser::AssignContext::Semicolon() {
  return getToken(SysYParser::Semicolon, 0);
}


size_t SysYParser::AssignContext::getRuleIndex() const {
  return SysYParser::RuleAssign;
}


std::any SysYParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::AssignContext* SysYParser::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 30, SysYParser::RuleAssign);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208);
    lVal();
    setState(209);
    match(SysYParser::T__0);
    setState(210);
    exp();
    setState(211);
    match(SysYParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpStmtContext ------------------------------------------------------------------

SysYParser::ExpStmtContext::ExpStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::ExpStmtContext::Semicolon() {
  return getToken(SysYParser::Semicolon, 0);
}

SysYParser::ExpContext* SysYParser::ExpStmtContext::exp() {
  return getRuleContext<SysYParser::ExpContext>(0);
}


size_t SysYParser::ExpStmtContext::getRuleIndex() const {
  return SysYParser::RuleExpStmt;
}


std::any SysYParser::ExpStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitExpStmt(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::ExpStmtContext* SysYParser::expStmt() {
  ExpStmtContext *_localctx = _tracker.createInstance<ExpStmtContext>(_ctx, getState());
  enterRule(_localctx, 32, SysYParser::RuleExpStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(214);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6872065130496) != 0)) {
      setState(213);
      exp();
    }
    setState(216);
    match(SysYParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStmtContext ------------------------------------------------------------------

SysYParser::IfStmtContext::IfStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::IfStmtContext::If() {
  return getToken(SysYParser::If, 0);
}

tree::TerminalNode* SysYParser::IfStmtContext::Lparen() {
  return getToken(SysYParser::Lparen, 0);
}

SysYParser::ExpContext* SysYParser::IfStmtContext::exp() {
  return getRuleContext<SysYParser::ExpContext>(0);
}

tree::TerminalNode* SysYParser::IfStmtContext::Rparen() {
  return getToken(SysYParser::Rparen, 0);
}

std::vector<SysYParser::StmtContext *> SysYParser::IfStmtContext::stmt() {
  return getRuleContexts<SysYParser::StmtContext>();
}

SysYParser::StmtContext* SysYParser::IfStmtContext::stmt(size_t i) {
  return getRuleContext<SysYParser::StmtContext>(i);
}

tree::TerminalNode* SysYParser::IfStmtContext::Else() {
  return getToken(SysYParser::Else, 0);
}


size_t SysYParser::IfStmtContext::getRuleIndex() const {
  return SysYParser::RuleIfStmt;
}


std::any SysYParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::IfStmtContext* SysYParser::ifStmt() {
  IfStmtContext *_localctx = _tracker.createInstance<IfStmtContext>(_ctx, getState());
  enterRule(_localctx, 34, SysYParser::RuleIfStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(218);
    match(SysYParser::If);
    setState(219);
    match(SysYParser::Lparen);
    setState(220);
    exp();
    setState(221);
    match(SysYParser::Rparen);
    setState(222);
    stmt();
    setState(225);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(223);
      match(SysYParser::Else);
      setState(224);
      stmt();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStmtContext ------------------------------------------------------------------

SysYParser::WhileStmtContext::WhileStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::WhileStmtContext::While() {
  return getToken(SysYParser::While, 0);
}

tree::TerminalNode* SysYParser::WhileStmtContext::Lparen() {
  return getToken(SysYParser::Lparen, 0);
}

SysYParser::ExpContext* SysYParser::WhileStmtContext::exp() {
  return getRuleContext<SysYParser::ExpContext>(0);
}

tree::TerminalNode* SysYParser::WhileStmtContext::Rparen() {
  return getToken(SysYParser::Rparen, 0);
}

SysYParser::StmtContext* SysYParser::WhileStmtContext::stmt() {
  return getRuleContext<SysYParser::StmtContext>(0);
}


size_t SysYParser::WhileStmtContext::getRuleIndex() const {
  return SysYParser::RuleWhileStmt;
}


std::any SysYParser::WhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitWhileStmt(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::WhileStmtContext* SysYParser::whileStmt() {
  WhileStmtContext *_localctx = _tracker.createInstance<WhileStmtContext>(_ctx, getState());
  enterRule(_localctx, 36, SysYParser::RuleWhileStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    match(SysYParser::While);
    setState(228);
    match(SysYParser::Lparen);
    setState(229);
    exp();
    setState(230);
    match(SysYParser::Rparen);
    setState(231);
    stmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakContext ------------------------------------------------------------------

SysYParser::BreakContext::BreakContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::BreakContext::Break() {
  return getToken(SysYParser::Break, 0);
}

tree::TerminalNode* SysYParser::BreakContext::Semicolon() {
  return getToken(SysYParser::Semicolon, 0);
}


size_t SysYParser::BreakContext::getRuleIndex() const {
  return SysYParser::RuleBreak;
}


std::any SysYParser::BreakContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitBreak(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::BreakContext* SysYParser::break_() {
  BreakContext *_localctx = _tracker.createInstance<BreakContext>(_ctx, getState());
  enterRule(_localctx, 38, SysYParser::RuleBreak);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(233);
    match(SysYParser::Break);
    setState(234);
    match(SysYParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContinueContext ------------------------------------------------------------------

SysYParser::ContinueContext::ContinueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::ContinueContext::Continue() {
  return getToken(SysYParser::Continue, 0);
}

tree::TerminalNode* SysYParser::ContinueContext::Semicolon() {
  return getToken(SysYParser::Semicolon, 0);
}


size_t SysYParser::ContinueContext::getRuleIndex() const {
  return SysYParser::RuleContinue;
}


std::any SysYParser::ContinueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitContinue(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::ContinueContext* SysYParser::continue_() {
  ContinueContext *_localctx = _tracker.createInstance<ContinueContext>(_ctx, getState());
  enterRule(_localctx, 40, SysYParser::RuleContinue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(236);
    match(SysYParser::Continue);
    setState(237);
    match(SysYParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnContext ------------------------------------------------------------------

SysYParser::ReturnContext::ReturnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::ReturnContext::Return() {
  return getToken(SysYParser::Return, 0);
}

tree::TerminalNode* SysYParser::ReturnContext::Semicolon() {
  return getToken(SysYParser::Semicolon, 0);
}

SysYParser::ExpContext* SysYParser::ReturnContext::exp() {
  return getRuleContext<SysYParser::ExpContext>(0);
}


size_t SysYParser::ReturnContext::getRuleIndex() const {
  return SysYParser::RuleReturn;
}


std::any SysYParser::ReturnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitReturn(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::ReturnContext* SysYParser::return_() {
  ReturnContext *_localctx = _tracker.createInstance<ReturnContext>(_ctx, getState());
  enterRule(_localctx, 42, SysYParser::RuleReturn);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(239);
    match(SysYParser::Return);
    setState(241);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6872065130496) != 0)) {
      setState(240);
      exp();
    }
    setState(243);
    match(SysYParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryOPContext ------------------------------------------------------------------

SysYParser::UnaryOPContext::UnaryOPContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::UnaryOPContext::Add() {
  return getToken(SysYParser::Add, 0);
}

tree::TerminalNode* SysYParser::UnaryOPContext::Sub() {
  return getToken(SysYParser::Sub, 0);
}

tree::TerminalNode* SysYParser::UnaryOPContext::Not() {
  return getToken(SysYParser::Not, 0);
}


size_t SysYParser::UnaryOPContext::getRuleIndex() const {
  return SysYParser::RuleUnaryOP;
}


std::any SysYParser::UnaryOPContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitUnaryOP(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::UnaryOPContext* SysYParser::unaryOP() {
  UnaryOPContext *_localctx = _tracker.createInstance<UnaryOPContext>(_ctx, getState());
  enterRule(_localctx, 44, SysYParser::RuleUnaryOP);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 117440512) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpContext ------------------------------------------------------------------

SysYParser::OpContext::OpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::OpContext::Add() {
  return getToken(SysYParser::Add, 0);
}

tree::TerminalNode* SysYParser::OpContext::Sub() {
  return getToken(SysYParser::Sub, 0);
}

tree::TerminalNode* SysYParser::OpContext::Not() {
  return getToken(SysYParser::Not, 0);
}

tree::TerminalNode* SysYParser::OpContext::Mul() {
  return getToken(SysYParser::Mul, 0);
}

tree::TerminalNode* SysYParser::OpContext::Div() {
  return getToken(SysYParser::Div, 0);
}

tree::TerminalNode* SysYParser::OpContext::Mod() {
  return getToken(SysYParser::Mod, 0);
}

tree::TerminalNode* SysYParser::OpContext::LAnd() {
  return getToken(SysYParser::LAnd, 0);
}

tree::TerminalNode* SysYParser::OpContext::LOr() {
  return getToken(SysYParser::LOr, 0);
}

tree::TerminalNode* SysYParser::OpContext::Eq() {
  return getToken(SysYParser::Eq, 0);
}

tree::TerminalNode* SysYParser::OpContext::Ne() {
  return getToken(SysYParser::Ne, 0);
}

tree::TerminalNode* SysYParser::OpContext::Lt() {
  return getToken(SysYParser::Lt, 0);
}

tree::TerminalNode* SysYParser::OpContext::Le() {
  return getToken(SysYParser::Le, 0);
}

tree::TerminalNode* SysYParser::OpContext::Gt() {
  return getToken(SysYParser::Gt, 0);
}

tree::TerminalNode* SysYParser::OpContext::Ge() {
  return getToken(SysYParser::Ge, 0);
}


size_t SysYParser::OpContext::getRuleIndex() const {
  return SysYParser::RuleOp;
}


std::any SysYParser::OpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitOp(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::OpContext* SysYParser::op() {
  OpContext *_localctx = _tracker.createInstance<OpContext>(_ctx, getState());
  enterRule(_localctx, 46, SysYParser::RuleOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(247);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 274861129728) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BTypeContext ------------------------------------------------------------------

SysYParser::BTypeContext::BTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::BTypeContext::Int() {
  return getToken(SysYParser::Int, 0);
}

tree::TerminalNode* SysYParser::BTypeContext::Float() {
  return getToken(SysYParser::Float, 0);
}


size_t SysYParser::BTypeContext::getRuleIndex() const {
  return SysYParser::RuleBType;
}


std::any SysYParser::BTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitBType(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::BTypeContext* SysYParser::bType() {
  BTypeContext *_localctx = _tracker.createInstance<BTypeContext>(_ctx, getState());
  enterRule(_localctx, 48, SysYParser::RuleBType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(249);
    _la = _input->LA(1);
    if (!(_la == SysYParser::Int

    || _la == SysYParser::Float)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncTypeContext ------------------------------------------------------------------

SysYParser::FuncTypeContext::FuncTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::FuncTypeContext::Int() {
  return getToken(SysYParser::Int, 0);
}

tree::TerminalNode* SysYParser::FuncTypeContext::Float() {
  return getToken(SysYParser::Float, 0);
}

tree::TerminalNode* SysYParser::FuncTypeContext::Void() {
  return getToken(SysYParser::Void, 0);
}


size_t SysYParser::FuncTypeContext::getRuleIndex() const {
  return SysYParser::RuleFuncType;
}


std::any SysYParser::FuncTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitFuncType(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::FuncTypeContext* SysYParser::funcType() {
  FuncTypeContext *_localctx = _tracker.createInstance<FuncTypeContext>(_ctx, getState());
  enterRule(_localctx, 50, SysYParser::RuleFuncType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(251);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 28) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void SysYParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  sysyParserInitialize();
#else
  ::antlr4::internal::call_once(sysyParserOnceFlag, sysyParserInitialize);
#endif
}
