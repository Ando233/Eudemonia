
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
      "compUnit", "decl", "def", "initVal", "initArray", "exp", "binaryExp", 
      "unaryExp", "primaryExp", "call", "number", "lVal", "funcDef", "funcFParam", 
      "block", "stmt", "assign", "expStmt", "ifStmt", "whileStmt", "break", 
      "continue", "return", "unaryOP", "op", "bType", "funcType"
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
      "Le", "Gt", "Ge", "IntConst", "HexadecimalDigits", "ExponentPart", 
      "FractionPart", "FloatConst", "Ident", "STRING", "WS", "LINE_COMMENT", 
      "COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,47,258,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,1,0,1,0,5,0,57,8,
  	0,10,0,12,0,60,9,0,1,0,1,0,1,1,3,1,65,8,1,1,1,1,1,1,1,1,1,5,1,71,8,1,
  	10,1,12,1,74,9,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,5,2,83,8,2,10,2,12,2,86,
  	9,2,1,2,1,2,1,2,3,2,91,8,2,3,2,93,8,2,1,3,1,3,1,4,1,4,1,4,1,4,5,4,101,
  	8,4,10,4,12,4,104,9,4,3,4,106,8,4,1,4,1,4,1,5,1,5,1,6,1,6,1,6,1,6,5,6,
  	116,8,6,10,6,12,6,119,9,6,1,7,5,7,122,8,7,10,7,12,7,125,9,7,1,7,1,7,1,
  	8,1,8,1,8,1,8,1,8,1,8,1,8,3,8,136,8,8,1,9,1,9,1,9,1,9,1,9,5,9,143,8,9,
  	10,9,12,9,146,9,9,3,9,148,8,9,1,9,1,9,1,10,1,10,1,11,1,11,1,11,1,11,1,
  	11,5,11,159,8,11,10,11,12,11,162,9,11,1,12,1,12,1,12,1,12,1,12,1,12,5,
  	12,170,8,12,10,12,12,12,173,9,12,3,12,175,8,12,1,12,1,12,1,12,1,13,1,
  	13,1,13,1,13,1,13,1,13,1,13,1,13,5,13,188,8,13,10,13,12,13,191,9,13,1,
  	14,1,14,1,14,5,14,196,8,14,10,14,12,14,199,9,14,1,14,1,14,1,15,1,15,1,
  	15,1,15,1,15,1,15,1,15,1,15,3,15,211,8,15,1,16,1,16,1,16,1,16,1,16,1,
  	17,3,17,219,8,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,3,18,230,
  	8,18,1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,21,1,21,1,21,1,22,
  	1,22,3,22,246,8,22,1,22,1,22,1,23,1,23,1,24,1,24,1,25,1,25,1,26,1,26,
  	1,26,0,0,27,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,
  	42,44,46,48,50,52,0,5,2,0,38,38,42,42,1,0,24,26,1,0,24,37,1,0,2,3,1,0,
  	2,4,262,0,58,1,0,0,0,2,64,1,0,0,0,4,77,1,0,0,0,6,94,1,0,0,0,8,96,1,0,
  	0,0,10,109,1,0,0,0,12,111,1,0,0,0,14,123,1,0,0,0,16,135,1,0,0,0,18,137,
  	1,0,0,0,20,151,1,0,0,0,22,153,1,0,0,0,24,163,1,0,0,0,26,179,1,0,0,0,28,
  	192,1,0,0,0,30,210,1,0,0,0,32,212,1,0,0,0,34,218,1,0,0,0,36,222,1,0,0,
  	0,38,231,1,0,0,0,40,237,1,0,0,0,42,240,1,0,0,0,44,243,1,0,0,0,46,249,
  	1,0,0,0,48,251,1,0,0,0,50,253,1,0,0,0,52,255,1,0,0,0,54,57,3,2,1,0,55,
  	57,3,24,12,0,56,54,1,0,0,0,56,55,1,0,0,0,57,60,1,0,0,0,58,56,1,0,0,0,
  	58,59,1,0,0,0,59,61,1,0,0,0,60,58,1,0,0,0,61,62,5,0,0,1,62,1,1,0,0,0,
  	63,65,5,5,0,0,64,63,1,0,0,0,64,65,1,0,0,0,65,66,1,0,0,0,66,67,3,50,25,
  	0,67,72,3,4,2,0,68,69,5,20,0,0,69,71,3,4,2,0,70,68,1,0,0,0,71,74,1,0,
  	0,0,72,70,1,0,0,0,72,73,1,0,0,0,73,75,1,0,0,0,74,72,1,0,0,0,75,76,5,21,
  	0,0,76,3,1,0,0,0,77,84,5,43,0,0,78,79,5,16,0,0,79,80,3,10,5,0,80,81,5,
  	17,0,0,81,83,1,0,0,0,82,78,1,0,0,0,83,86,1,0,0,0,84,82,1,0,0,0,84,85,
  	1,0,0,0,85,92,1,0,0,0,86,84,1,0,0,0,87,90,5,1,0,0,88,91,3,6,3,0,89,91,
  	3,8,4,0,90,88,1,0,0,0,90,89,1,0,0,0,91,93,1,0,0,0,92,87,1,0,0,0,92,93,
  	1,0,0,0,93,5,1,0,0,0,94,95,3,10,5,0,95,7,1,0,0,0,96,105,5,18,0,0,97,102,
  	3,6,3,0,98,99,5,20,0,0,99,101,3,6,3,0,100,98,1,0,0,0,101,104,1,0,0,0,
  	102,100,1,0,0,0,102,103,1,0,0,0,103,106,1,0,0,0,104,102,1,0,0,0,105,97,
  	1,0,0,0,105,106,1,0,0,0,106,107,1,0,0,0,107,108,5,19,0,0,108,9,1,0,0,
  	0,109,110,3,12,6,0,110,11,1,0,0,0,111,117,3,14,7,0,112,113,3,48,24,0,
  	113,114,3,14,7,0,114,116,1,0,0,0,115,112,1,0,0,0,116,119,1,0,0,0,117,
  	115,1,0,0,0,117,118,1,0,0,0,118,13,1,0,0,0,119,117,1,0,0,0,120,122,3,
  	46,23,0,121,120,1,0,0,0,122,125,1,0,0,0,123,121,1,0,0,0,123,124,1,0,0,
  	0,124,126,1,0,0,0,125,123,1,0,0,0,126,127,3,16,8,0,127,15,1,0,0,0,128,
  	129,5,14,0,0,129,130,3,10,5,0,130,131,5,15,0,0,131,136,1,0,0,0,132,136,
  	3,22,11,0,133,136,3,20,10,0,134,136,3,18,9,0,135,128,1,0,0,0,135,132,
  	1,0,0,0,135,133,1,0,0,0,135,134,1,0,0,0,136,17,1,0,0,0,137,138,5,43,0,
  	0,138,147,5,14,0,0,139,144,3,10,5,0,140,141,5,20,0,0,141,143,3,10,5,0,
  	142,140,1,0,0,0,143,146,1,0,0,0,144,142,1,0,0,0,144,145,1,0,0,0,145,148,
  	1,0,0,0,146,144,1,0,0,0,147,139,1,0,0,0,147,148,1,0,0,0,148,149,1,0,0,
  	0,149,150,5,15,0,0,150,19,1,0,0,0,151,152,7,0,0,0,152,21,1,0,0,0,153,
  	160,5,43,0,0,154,155,5,16,0,0,155,156,3,10,5,0,156,157,5,17,0,0,157,159,
  	1,0,0,0,158,154,1,0,0,0,159,162,1,0,0,0,160,158,1,0,0,0,160,161,1,0,0,
  	0,161,23,1,0,0,0,162,160,1,0,0,0,163,164,3,52,26,0,164,165,5,43,0,0,165,
  	174,5,14,0,0,166,171,3,26,13,0,167,168,5,20,0,0,168,170,3,26,13,0,169,
  	167,1,0,0,0,170,173,1,0,0,0,171,169,1,0,0,0,171,172,1,0,0,0,172,175,1,
  	0,0,0,173,171,1,0,0,0,174,166,1,0,0,0,174,175,1,0,0,0,175,176,1,0,0,0,
  	176,177,5,15,0,0,177,178,3,28,14,0,178,25,1,0,0,0,179,180,3,50,25,0,180,
  	181,5,43,0,0,181,182,5,16,0,0,182,189,5,17,0,0,183,184,5,16,0,0,184,185,
  	3,10,5,0,185,186,5,17,0,0,186,188,1,0,0,0,187,183,1,0,0,0,188,191,1,0,
  	0,0,189,187,1,0,0,0,189,190,1,0,0,0,190,27,1,0,0,0,191,189,1,0,0,0,192,
  	197,5,18,0,0,193,196,3,2,1,0,194,196,3,30,15,0,195,193,1,0,0,0,195,194,
  	1,0,0,0,196,199,1,0,0,0,197,195,1,0,0,0,197,198,1,0,0,0,198,200,1,0,0,
  	0,199,197,1,0,0,0,200,201,5,19,0,0,201,29,1,0,0,0,202,211,3,32,16,0,203,
  	211,3,34,17,0,204,211,3,28,14,0,205,211,3,36,18,0,206,211,3,38,19,0,207,
  	211,3,40,20,0,208,211,3,42,21,0,209,211,3,44,22,0,210,202,1,0,0,0,210,
  	203,1,0,0,0,210,204,1,0,0,0,210,205,1,0,0,0,210,206,1,0,0,0,210,207,1,
  	0,0,0,210,208,1,0,0,0,210,209,1,0,0,0,211,31,1,0,0,0,212,213,3,22,11,
  	0,213,214,5,1,0,0,214,215,3,10,5,0,215,216,5,21,0,0,216,33,1,0,0,0,217,
  	219,3,10,5,0,218,217,1,0,0,0,218,219,1,0,0,0,219,220,1,0,0,0,220,221,
  	5,21,0,0,221,35,1,0,0,0,222,223,5,7,0,0,223,224,5,14,0,0,224,225,3,10,
  	5,0,225,226,5,15,0,0,226,229,3,30,15,0,227,228,5,8,0,0,228,230,3,30,15,
  	0,229,227,1,0,0,0,229,230,1,0,0,0,230,37,1,0,0,0,231,232,5,10,0,0,232,
  	233,5,14,0,0,233,234,3,10,5,0,234,235,5,15,0,0,235,236,3,30,15,0,236,
  	39,1,0,0,0,237,238,5,12,0,0,238,239,5,21,0,0,239,41,1,0,0,0,240,241,5,
  	13,0,0,241,242,5,21,0,0,242,43,1,0,0,0,243,245,5,6,0,0,244,246,3,10,5,
  	0,245,244,1,0,0,0,245,246,1,0,0,0,246,247,1,0,0,0,247,248,5,21,0,0,248,
  	45,1,0,0,0,249,250,7,1,0,0,250,47,1,0,0,0,251,252,7,2,0,0,252,49,1,0,
  	0,0,253,254,7,3,0,0,254,51,1,0,0,0,255,256,7,4,0,0,256,53,1,0,0,0,24,
  	56,58,64,72,84,90,92,102,105,117,123,135,144,147,160,171,174,189,195,
  	197,210,218,229,245
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
    setState(58);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 60) != 0)) {
      setState(56);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(54);
        decl();
        break;
      }

      case 2: {
        setState(55);
        funcDef();
        break;
      }

      default:
        break;
      }
      setState(60);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(61);
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
    setState(64);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SysYParser::Const) {
      setState(63);
      match(SysYParser::Const);
    }
    setState(66);
    bType();
    setState(67);
    def();
    setState(72);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::Comma) {
      setState(68);
      match(SysYParser::Comma);
      setState(69);
      def();
      setState(74);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(75);
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
    setState(77);
    match(SysYParser::Ident);
    setState(84);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::Lbrkt) {
      setState(78);
      match(SysYParser::Lbrkt);
      setState(79);
      exp();
      setState(80);
      match(SysYParser::Rbrkt);
      setState(86);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(92);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SysYParser::T__0) {
      setState(87);
      match(SysYParser::T__0);
      setState(90);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SysYParser::Lparen:
        case SysYParser::Sub:
        case SysYParser::Not:
        case SysYParser::Add:
        case SysYParser::IntConst:
        case SysYParser::FloatConst:
        case SysYParser::Ident: {
          setState(88);
          initVal();
          break;
        }

        case SysYParser::Lbrace: {
          setState(89);
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
    setState(94);
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
    setState(96);
    match(SysYParser::Lbrace);
    setState(105);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 13469134897152) != 0)) {
      setState(97);
      initVal();
      setState(102);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysYParser::Comma) {
        setState(98);
        match(SysYParser::Comma);
        setState(99);
        initVal();
        setState(104);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(107);
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

SysYParser::BinaryExpContext* SysYParser::ExpContext::binaryExp() {
  return getRuleContext<SysYParser::BinaryExpContext>(0);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    binaryExp();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BinaryExpContext ------------------------------------------------------------------

SysYParser::BinaryExpContext::BinaryExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SysYParser::UnaryExpContext *> SysYParser::BinaryExpContext::unaryExp() {
  return getRuleContexts<SysYParser::UnaryExpContext>();
}

SysYParser::UnaryExpContext* SysYParser::BinaryExpContext::unaryExp(size_t i) {
  return getRuleContext<SysYParser::UnaryExpContext>(i);
}

std::vector<SysYParser::OpContext *> SysYParser::BinaryExpContext::op() {
  return getRuleContexts<SysYParser::OpContext>();
}

SysYParser::OpContext* SysYParser::BinaryExpContext::op(size_t i) {
  return getRuleContext<SysYParser::OpContext>(i);
}


size_t SysYParser::BinaryExpContext::getRuleIndex() const {
  return SysYParser::RuleBinaryExp;
}


std::any SysYParser::BinaryExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitBinaryExp(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::BinaryExpContext* SysYParser::binaryExp() {
  BinaryExpContext *_localctx = _tracker.createInstance<BinaryExpContext>(_ctx, getState());
  enterRule(_localctx, 12, SysYParser::RuleBinaryExp);
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
    setState(111);
    unaryExp();
    setState(117);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 274861129728) != 0)) {
      setState(112);
      op();
      setState(113);
      unaryExp();
      setState(119);
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
  enterRule(_localctx, 14, SysYParser::RuleUnaryExp);
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
    setState(123);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 117440512) != 0)) {
      setState(120);
      unaryOP();
      setState(125);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(126);
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
  enterRule(_localctx, 16, SysYParser::RulePrimaryExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(135);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(128);
      match(SysYParser::Lparen);
      setState(129);
      exp();
      setState(130);
      match(SysYParser::Rparen);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(132);
      lVal();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(133);
      number();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(134);
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
  enterRule(_localctx, 18, SysYParser::RuleCall);
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
    setState(137);
    match(SysYParser::Ident);
    setState(138);
    match(SysYParser::Lparen);
    setState(147);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 13469134897152) != 0)) {
      setState(139);
      exp();
      setState(144);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysYParser::Comma) {
        setState(140);
        match(SysYParser::Comma);
        setState(141);
        exp();
        setState(146);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(149);
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
  enterRule(_localctx, 20, SysYParser::RuleNumber);
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
    setState(151);
    _la = _input->LA(1);
    if (!(_la == SysYParser::IntConst

    || _la == SysYParser::FloatConst)) {
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
  enterRule(_localctx, 22, SysYParser::RuleLVal);
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
    setState(153);
    match(SysYParser::Ident);
    setState(160);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::Lbrkt) {
      setState(154);
      match(SysYParser::Lbrkt);
      setState(155);
      exp();
      setState(156);
      match(SysYParser::Rbrkt);
      setState(162);
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
  enterRule(_localctx, 24, SysYParser::RuleFuncDef);
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
    setState(163);
    funcType();
    setState(164);
    match(SysYParser::Ident);
    setState(165);
    match(SysYParser::Lparen);
    setState(174);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SysYParser::Int

    || _la == SysYParser::Float) {
      setState(166);
      funcFParam();
      setState(171);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysYParser::Comma) {
        setState(167);
        match(SysYParser::Comma);
        setState(168);
        funcFParam();
        setState(173);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(176);
    match(SysYParser::Rparen);
    setState(177);
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
  enterRule(_localctx, 26, SysYParser::RuleFuncFParam);
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
    setState(179);
    bType();
    setState(180);
    match(SysYParser::Ident);

    setState(181);
    match(SysYParser::Lbrkt);
    setState(182);
    match(SysYParser::Rbrkt);
    setState(189);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::Lbrkt) {
      setState(183);
      match(SysYParser::Lbrkt);
      setState(184);
      exp();
      setState(185);
      match(SysYParser::Rbrkt);
      setState(191);
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
  enterRule(_localctx, 28, SysYParser::RuleBlock);
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
    setState(192);
    match(SysYParser::Lbrace);
    setState(197);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 13469137269996) != 0)) {
      setState(195);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SysYParser::Int:
        case SysYParser::Float:
        case SysYParser::Const: {
          setState(193);
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
        case SysYParser::IntConst:
        case SysYParser::FloatConst:
        case SysYParser::Ident: {
          setState(194);
          stmt();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(199);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(200);
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
  enterRule(_localctx, 30, SysYParser::RuleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(210);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(202);
      assign();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(203);
      expStmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(204);
      block();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(205);
      ifStmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(206);
      whileStmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(207);
      break_();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(208);
      continue_();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(209);
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
  enterRule(_localctx, 32, SysYParser::RuleAssign);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    lVal();
    setState(213);
    match(SysYParser::T__0);
    setState(214);
    exp();
    setState(215);
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
  enterRule(_localctx, 34, SysYParser::RuleExpStmt);
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
    setState(218);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 13469134897152) != 0)) {
      setState(217);
      exp();
    }
    setState(220);
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
  enterRule(_localctx, 36, SysYParser::RuleIfStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
    match(SysYParser::If);
    setState(223);
    match(SysYParser::Lparen);
    setState(224);
    exp();
    setState(225);
    match(SysYParser::Rparen);
    setState(226);
    stmt();
    setState(229);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(227);
      match(SysYParser::Else);
      setState(228);
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
  enterRule(_localctx, 38, SysYParser::RuleWhileStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(231);
    match(SysYParser::While);
    setState(232);
    match(SysYParser::Lparen);
    setState(233);
    exp();
    setState(234);
    match(SysYParser::Rparen);
    setState(235);
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
  enterRule(_localctx, 40, SysYParser::RuleBreak);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(237);
    match(SysYParser::Break);
    setState(238);
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
  enterRule(_localctx, 42, SysYParser::RuleContinue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(240);
    match(SysYParser::Continue);
    setState(241);
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
  enterRule(_localctx, 44, SysYParser::RuleReturn);
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
    setState(243);
    match(SysYParser::Return);
    setState(245);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 13469134897152) != 0)) {
      setState(244);
      exp();
    }
    setState(247);
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
  enterRule(_localctx, 46, SysYParser::RuleUnaryOP);
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
  enterRule(_localctx, 48, SysYParser::RuleOp);
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
  enterRule(_localctx, 50, SysYParser::RuleBType);
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
    setState(253);
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
  enterRule(_localctx, 52, SysYParser::RuleFuncType);
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
    setState(255);
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
