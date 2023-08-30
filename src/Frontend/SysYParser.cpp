
// Generated from D:/Clion Projects/Eudemonia/src/Frontend\SysY.g4 by ANTLR 4.12.0


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
SysYParserStaticData *sysyParserStaticData = nullptr;

void sysyParserInitialize() {
  assert(sysyParserStaticData == nullptr);
  auto staticData = std::make_unique<SysYParserStaticData>(
    std::vector<std::string>{
      "compUnit", "globalDecl", "decl", "def", "initVal", "initArray", "mulExp", 
      "exp", "lorExp", "landExp", "eqExp", "relExp", "unaryExp", "primaryExp", 
      "call", "number", "lVal", "funcDef", "funcFParam", "block", "blockItem", 
      "stmt", "assign", "expStmt", "ifStmt", "whileStmt", "break", "continue", 
      "return", "unaryOP", "addOP", "mulOP", "eqOP", "relOP", "bType", "funcType"
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
  	4,1,46,330,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,1,0,1,0,5,0,75,8,0,10,0,12,0,78,9,0,1,0,1,0,1,1,1,1,1,2,3,2,85,8,2,
  	1,2,1,2,1,2,1,2,5,2,91,8,2,10,2,12,2,94,9,2,1,2,1,2,1,3,1,3,1,3,1,3,1,
  	3,5,3,103,8,3,10,3,12,3,106,9,3,1,3,1,3,1,3,3,3,111,8,3,3,3,113,8,3,1,
  	4,1,4,1,5,1,5,1,5,1,5,5,5,121,8,5,10,5,12,5,124,9,5,3,5,126,8,5,1,5,1,
  	5,1,6,1,6,1,6,1,6,5,6,134,8,6,10,6,12,6,137,9,6,1,7,1,7,1,7,1,7,5,7,143,
  	8,7,10,7,12,7,146,9,7,1,8,1,8,1,8,5,8,151,8,8,10,8,12,8,154,9,8,1,9,1,
  	9,1,9,5,9,159,8,9,10,9,12,9,162,9,9,1,10,1,10,1,10,1,10,5,10,168,8,10,
  	10,10,12,10,171,9,10,1,11,1,11,1,11,1,11,5,11,177,8,11,10,11,12,11,180,
  	9,11,1,12,5,12,183,8,12,10,12,12,12,186,9,12,1,12,1,12,1,13,1,13,1,13,
  	1,13,1,13,1,13,1,13,3,13,197,8,13,1,14,1,14,1,14,1,14,1,14,5,14,204,8,
  	14,10,14,12,14,207,9,14,3,14,209,8,14,1,14,1,14,1,15,1,15,1,16,1,16,1,
  	16,1,16,1,16,5,16,220,8,16,10,16,12,16,223,9,16,1,17,1,17,1,17,1,17,1,
  	17,1,17,5,17,231,8,17,10,17,12,17,234,9,17,3,17,236,8,17,1,17,1,17,1,
  	17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,5,18,249,8,18,10,18,12,18,
  	252,9,18,3,18,254,8,18,1,19,1,19,5,19,258,8,19,10,19,12,19,261,9,19,1,
  	19,1,19,1,20,1,20,3,20,267,8,20,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,
  	21,3,21,277,8,21,1,22,1,22,1,22,1,22,1,22,1,23,3,23,285,8,23,1,23,1,23,
  	1,24,1,24,1,24,1,24,1,24,1,24,1,24,3,24,296,8,24,1,25,1,25,1,25,1,25,
  	1,25,1,25,1,26,1,26,1,26,1,27,1,27,1,27,1,28,1,28,3,28,312,8,28,1,28,
  	1,28,1,29,1,29,1,30,1,30,1,31,1,31,1,32,1,32,1,33,1,33,1,34,1,34,1,35,
  	1,35,1,35,0,0,36,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,
  	38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,0,8,2,0,38,38,41,41,
  	1,0,24,26,2,0,24,24,26,26,1,0,27,29,1,0,32,33,1,0,34,37,1,0,2,3,1,0,2,
  	4,331,0,76,1,0,0,0,2,81,1,0,0,0,4,84,1,0,0,0,6,97,1,0,0,0,8,114,1,0,0,
  	0,10,116,1,0,0,0,12,129,1,0,0,0,14,138,1,0,0,0,16,147,1,0,0,0,18,155,
  	1,0,0,0,20,163,1,0,0,0,22,172,1,0,0,0,24,184,1,0,0,0,26,196,1,0,0,0,28,
  	198,1,0,0,0,30,212,1,0,0,0,32,214,1,0,0,0,34,224,1,0,0,0,36,240,1,0,0,
  	0,38,255,1,0,0,0,40,266,1,0,0,0,42,276,1,0,0,0,44,278,1,0,0,0,46,284,
  	1,0,0,0,48,288,1,0,0,0,50,297,1,0,0,0,52,303,1,0,0,0,54,306,1,0,0,0,56,
  	309,1,0,0,0,58,315,1,0,0,0,60,317,1,0,0,0,62,319,1,0,0,0,64,321,1,0,0,
  	0,66,323,1,0,0,0,68,325,1,0,0,0,70,327,1,0,0,0,72,75,3,2,1,0,73,75,3,
  	34,17,0,74,72,1,0,0,0,74,73,1,0,0,0,75,78,1,0,0,0,76,74,1,0,0,0,76,77,
  	1,0,0,0,77,79,1,0,0,0,78,76,1,0,0,0,79,80,5,0,0,1,80,1,1,0,0,0,81,82,
  	3,4,2,0,82,3,1,0,0,0,83,85,5,5,0,0,84,83,1,0,0,0,84,85,1,0,0,0,85,86,
  	1,0,0,0,86,87,3,68,34,0,87,92,3,6,3,0,88,89,5,20,0,0,89,91,3,6,3,0,90,
  	88,1,0,0,0,91,94,1,0,0,0,92,90,1,0,0,0,92,93,1,0,0,0,93,95,1,0,0,0,94,
  	92,1,0,0,0,95,96,5,21,0,0,96,5,1,0,0,0,97,104,5,42,0,0,98,99,5,16,0,0,
  	99,100,3,14,7,0,100,101,5,17,0,0,101,103,1,0,0,0,102,98,1,0,0,0,103,106,
  	1,0,0,0,104,102,1,0,0,0,104,105,1,0,0,0,105,112,1,0,0,0,106,104,1,0,0,
  	0,107,110,5,1,0,0,108,111,3,8,4,0,109,111,3,10,5,0,110,108,1,0,0,0,110,
  	109,1,0,0,0,111,113,1,0,0,0,112,107,1,0,0,0,112,113,1,0,0,0,113,7,1,0,
  	0,0,114,115,3,14,7,0,115,9,1,0,0,0,116,125,5,18,0,0,117,122,3,8,4,0,118,
  	119,5,20,0,0,119,121,3,8,4,0,120,118,1,0,0,0,121,124,1,0,0,0,122,120,
  	1,0,0,0,122,123,1,0,0,0,123,126,1,0,0,0,124,122,1,0,0,0,125,117,1,0,0,
  	0,125,126,1,0,0,0,126,127,1,0,0,0,127,128,5,19,0,0,128,11,1,0,0,0,129,
  	135,3,24,12,0,130,131,3,62,31,0,131,132,3,24,12,0,132,134,1,0,0,0,133,
  	130,1,0,0,0,134,137,1,0,0,0,135,133,1,0,0,0,135,136,1,0,0,0,136,13,1,
  	0,0,0,137,135,1,0,0,0,138,144,3,12,6,0,139,140,3,60,30,0,140,141,3,12,
  	6,0,141,143,1,0,0,0,142,139,1,0,0,0,143,146,1,0,0,0,144,142,1,0,0,0,144,
  	145,1,0,0,0,145,15,1,0,0,0,146,144,1,0,0,0,147,152,3,18,9,0,148,149,5,
  	31,0,0,149,151,3,18,9,0,150,148,1,0,0,0,151,154,1,0,0,0,152,150,1,0,0,
  	0,152,153,1,0,0,0,153,17,1,0,0,0,154,152,1,0,0,0,155,160,3,20,10,0,156,
  	157,5,30,0,0,157,159,3,20,10,0,158,156,1,0,0,0,159,162,1,0,0,0,160,158,
  	1,0,0,0,160,161,1,0,0,0,161,19,1,0,0,0,162,160,1,0,0,0,163,169,3,22,11,
  	0,164,165,3,64,32,0,165,166,3,22,11,0,166,168,1,0,0,0,167,164,1,0,0,0,
  	168,171,1,0,0,0,169,167,1,0,0,0,169,170,1,0,0,0,170,21,1,0,0,0,171,169,
  	1,0,0,0,172,178,3,14,7,0,173,174,3,66,33,0,174,175,3,14,7,0,175,177,1,
  	0,0,0,176,173,1,0,0,0,177,180,1,0,0,0,178,176,1,0,0,0,178,179,1,0,0,0,
  	179,23,1,0,0,0,180,178,1,0,0,0,181,183,3,58,29,0,182,181,1,0,0,0,183,
  	186,1,0,0,0,184,182,1,0,0,0,184,185,1,0,0,0,185,187,1,0,0,0,186,184,1,
  	0,0,0,187,188,3,26,13,0,188,25,1,0,0,0,189,190,5,14,0,0,190,191,3,14,
  	7,0,191,192,5,15,0,0,192,197,1,0,0,0,193,197,3,32,16,0,194,197,3,30,15,
  	0,195,197,3,28,14,0,196,189,1,0,0,0,196,193,1,0,0,0,196,194,1,0,0,0,196,
  	195,1,0,0,0,197,27,1,0,0,0,198,199,5,42,0,0,199,208,5,14,0,0,200,205,
  	3,14,7,0,201,202,5,20,0,0,202,204,3,14,7,0,203,201,1,0,0,0,204,207,1,
  	0,0,0,205,203,1,0,0,0,205,206,1,0,0,0,206,209,1,0,0,0,207,205,1,0,0,0,
  	208,200,1,0,0,0,208,209,1,0,0,0,209,210,1,0,0,0,210,211,5,15,0,0,211,
  	29,1,0,0,0,212,213,7,0,0,0,213,31,1,0,0,0,214,221,5,42,0,0,215,216,5,
  	16,0,0,216,217,3,14,7,0,217,218,5,17,0,0,218,220,1,0,0,0,219,215,1,0,
  	0,0,220,223,1,0,0,0,221,219,1,0,0,0,221,222,1,0,0,0,222,33,1,0,0,0,223,
  	221,1,0,0,0,224,225,3,70,35,0,225,226,5,42,0,0,226,235,5,14,0,0,227,232,
  	3,36,18,0,228,229,5,20,0,0,229,231,3,36,18,0,230,228,1,0,0,0,231,234,
  	1,0,0,0,232,230,1,0,0,0,232,233,1,0,0,0,233,236,1,0,0,0,234,232,1,0,0,
  	0,235,227,1,0,0,0,235,236,1,0,0,0,236,237,1,0,0,0,237,238,5,15,0,0,238,
  	239,3,38,19,0,239,35,1,0,0,0,240,241,3,68,34,0,241,253,5,42,0,0,242,243,
  	5,16,0,0,243,250,5,17,0,0,244,245,5,16,0,0,245,246,3,14,7,0,246,247,5,
  	17,0,0,247,249,1,0,0,0,248,244,1,0,0,0,249,252,1,0,0,0,250,248,1,0,0,
  	0,250,251,1,0,0,0,251,254,1,0,0,0,252,250,1,0,0,0,253,242,1,0,0,0,253,
  	254,1,0,0,0,254,37,1,0,0,0,255,259,5,18,0,0,256,258,3,40,20,0,257,256,
  	1,0,0,0,258,261,1,0,0,0,259,257,1,0,0,0,259,260,1,0,0,0,260,262,1,0,0,
  	0,261,259,1,0,0,0,262,263,5,19,0,0,263,39,1,0,0,0,264,267,3,4,2,0,265,
  	267,3,42,21,0,266,264,1,0,0,0,266,265,1,0,0,0,267,41,1,0,0,0,268,277,
  	3,44,22,0,269,277,3,46,23,0,270,277,3,38,19,0,271,277,3,48,24,0,272,277,
  	3,50,25,0,273,277,3,52,26,0,274,277,3,54,27,0,275,277,3,56,28,0,276,268,
  	1,0,0,0,276,269,1,0,0,0,276,270,1,0,0,0,276,271,1,0,0,0,276,272,1,0,0,
  	0,276,273,1,0,0,0,276,274,1,0,0,0,276,275,1,0,0,0,277,43,1,0,0,0,278,
  	279,3,32,16,0,279,280,5,1,0,0,280,281,3,14,7,0,281,282,5,21,0,0,282,45,
  	1,0,0,0,283,285,3,14,7,0,284,283,1,0,0,0,284,285,1,0,0,0,285,286,1,0,
  	0,0,286,287,5,21,0,0,287,47,1,0,0,0,288,289,5,7,0,0,289,290,5,14,0,0,
  	290,291,3,16,8,0,291,292,5,15,0,0,292,295,3,42,21,0,293,294,5,8,0,0,294,
  	296,3,42,21,0,295,293,1,0,0,0,295,296,1,0,0,0,296,49,1,0,0,0,297,298,
  	5,10,0,0,298,299,5,14,0,0,299,300,3,16,8,0,300,301,5,15,0,0,301,302,3,
  	42,21,0,302,51,1,0,0,0,303,304,5,12,0,0,304,305,5,21,0,0,305,53,1,0,0,
  	0,306,307,5,13,0,0,307,308,5,21,0,0,308,55,1,0,0,0,309,311,5,6,0,0,310,
  	312,3,14,7,0,311,310,1,0,0,0,311,312,1,0,0,0,312,313,1,0,0,0,313,314,
  	5,21,0,0,314,57,1,0,0,0,315,316,7,1,0,0,316,59,1,0,0,0,317,318,7,2,0,
  	0,318,61,1,0,0,0,319,320,7,3,0,0,320,63,1,0,0,0,321,322,7,4,0,0,322,65,
  	1,0,0,0,323,324,7,5,0,0,324,67,1,0,0,0,325,326,7,6,0,0,326,69,1,0,0,0,
  	327,328,7,7,0,0,328,71,1,0,0,0,30,74,76,84,92,104,110,112,122,125,135,
  	144,152,160,169,178,184,196,205,208,221,232,235,250,253,259,266,276,284,
  	295,311
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

std::vector<SysYParser::GlobalDeclContext *> SysYParser::CompUnitContext::globalDecl() {
  return getRuleContexts<SysYParser::GlobalDeclContext>();
}

SysYParser::GlobalDeclContext* SysYParser::CompUnitContext::globalDecl(size_t i) {
  return getRuleContext<SysYParser::GlobalDeclContext>(i);
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
    setState(76);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 60) != 0)) {
      setState(74);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(72);
        globalDecl();
        break;
      }

      case 2: {
        setState(73);
        funcDef();
        break;
      }

      default:
        break;
      }
      setState(78);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(79);
    match(SysYParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GlobalDeclContext ------------------------------------------------------------------

SysYParser::GlobalDeclContext::GlobalDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::DeclContext* SysYParser::GlobalDeclContext::decl() {
  return getRuleContext<SysYParser::DeclContext>(0);
}


size_t SysYParser::GlobalDeclContext::getRuleIndex() const {
  return SysYParser::RuleGlobalDecl;
}


std::any SysYParser::GlobalDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitGlobalDecl(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::GlobalDeclContext* SysYParser::globalDecl() {
  GlobalDeclContext *_localctx = _tracker.createInstance<GlobalDeclContext>(_ctx, getState());
  enterRule(_localctx, 2, SysYParser::RuleGlobalDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    decl();
   
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
  enterRule(_localctx, 4, SysYParser::RuleDecl);
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
    setState(84);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SysYParser::Const) {
      setState(83);
      match(SysYParser::Const);
    }
    setState(86);
    bType();
    setState(87);
    def();
    setState(92);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::Comma) {
      setState(88);
      match(SysYParser::Comma);
      setState(89);
      def();
      setState(94);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(95);
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
  enterRule(_localctx, 6, SysYParser::RuleDef);
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
    setState(97);
    match(SysYParser::Ident);
    setState(104);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::Lbrkt) {
      setState(98);
      match(SysYParser::Lbrkt);
      setState(99);
      exp();
      setState(100);
      match(SysYParser::Rbrkt);
      setState(106);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(112);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SysYParser::T__0) {
      setState(107);
      match(SysYParser::T__0);
      setState(110);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SysYParser::Lparen:
        case SysYParser::Sub:
        case SysYParser::Not:
        case SysYParser::Add:
        case SysYParser::FloatConst:
        case SysYParser::IntConst:
        case SysYParser::Ident: {
          setState(108);
          initVal();
          break;
        }

        case SysYParser::Lbrace: {
          setState(109);
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
  enterRule(_localctx, 8, SysYParser::RuleInitVal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
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
  enterRule(_localctx, 10, SysYParser::RuleInitArray);
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
    setState(116);
    match(SysYParser::Lbrace);
    setState(125);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6872065130496) != 0)) {
      setState(117);
      initVal();
      setState(122);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysYParser::Comma) {
        setState(118);
        match(SysYParser::Comma);
        setState(119);
        initVal();
        setState(124);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(127);
    match(SysYParser::Rbrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulExpContext ------------------------------------------------------------------

SysYParser::MulExpContext::MulExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SysYParser::UnaryExpContext *> SysYParser::MulExpContext::unaryExp() {
  return getRuleContexts<SysYParser::UnaryExpContext>();
}

SysYParser::UnaryExpContext* SysYParser::MulExpContext::unaryExp(size_t i) {
  return getRuleContext<SysYParser::UnaryExpContext>(i);
}

std::vector<SysYParser::MulOPContext *> SysYParser::MulExpContext::mulOP() {
  return getRuleContexts<SysYParser::MulOPContext>();
}

SysYParser::MulOPContext* SysYParser::MulExpContext::mulOP(size_t i) {
  return getRuleContext<SysYParser::MulOPContext>(i);
}


size_t SysYParser::MulExpContext::getRuleIndex() const {
  return SysYParser::RuleMulExp;
}


std::any SysYParser::MulExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitMulExp(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::MulExpContext* SysYParser::mulExp() {
  MulExpContext *_localctx = _tracker.createInstance<MulExpContext>(_ctx, getState());
  enterRule(_localctx, 12, SysYParser::RuleMulExp);
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
    setState(129);
    unaryExp();
    setState(135);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 939524096) != 0)) {
      setState(130);
      mulOP();
      setState(131);
      unaryExp();
      setState(137);
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

//----------------- ExpContext ------------------------------------------------------------------

SysYParser::ExpContext::ExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SysYParser::MulExpContext *> SysYParser::ExpContext::mulExp() {
  return getRuleContexts<SysYParser::MulExpContext>();
}

SysYParser::MulExpContext* SysYParser::ExpContext::mulExp(size_t i) {
  return getRuleContext<SysYParser::MulExpContext>(i);
}

std::vector<SysYParser::AddOPContext *> SysYParser::ExpContext::addOP() {
  return getRuleContexts<SysYParser::AddOPContext>();
}

SysYParser::AddOPContext* SysYParser::ExpContext::addOP(size_t i) {
  return getRuleContext<SysYParser::AddOPContext>(i);
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
  enterRule(_localctx, 14, SysYParser::RuleExp);
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
    setState(138);
    mulExp();
    setState(144);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::Sub

    || _la == SysYParser::Add) {
      setState(139);
      addOP();
      setState(140);
      mulExp();
      setState(146);
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

//----------------- LorExpContext ------------------------------------------------------------------

SysYParser::LorExpContext::LorExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SysYParser::LandExpContext *> SysYParser::LorExpContext::landExp() {
  return getRuleContexts<SysYParser::LandExpContext>();
}

SysYParser::LandExpContext* SysYParser::LorExpContext::landExp(size_t i) {
  return getRuleContext<SysYParser::LandExpContext>(i);
}

std::vector<tree::TerminalNode *> SysYParser::LorExpContext::LOr() {
  return getTokens(SysYParser::LOr);
}

tree::TerminalNode* SysYParser::LorExpContext::LOr(size_t i) {
  return getToken(SysYParser::LOr, i);
}


size_t SysYParser::LorExpContext::getRuleIndex() const {
  return SysYParser::RuleLorExp;
}


std::any SysYParser::LorExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitLorExp(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::LorExpContext* SysYParser::lorExp() {
  LorExpContext *_localctx = _tracker.createInstance<LorExpContext>(_ctx, getState());
  enterRule(_localctx, 16, SysYParser::RuleLorExp);
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
    landExp();
    setState(152);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::LOr) {
      setState(148);
      match(SysYParser::LOr);
      setState(149);
      landExp();
      setState(154);
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

//----------------- LandExpContext ------------------------------------------------------------------

SysYParser::LandExpContext::LandExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SysYParser::EqExpContext *> SysYParser::LandExpContext::eqExp() {
  return getRuleContexts<SysYParser::EqExpContext>();
}

SysYParser::EqExpContext* SysYParser::LandExpContext::eqExp(size_t i) {
  return getRuleContext<SysYParser::EqExpContext>(i);
}

std::vector<tree::TerminalNode *> SysYParser::LandExpContext::LAnd() {
  return getTokens(SysYParser::LAnd);
}

tree::TerminalNode* SysYParser::LandExpContext::LAnd(size_t i) {
  return getToken(SysYParser::LAnd, i);
}


size_t SysYParser::LandExpContext::getRuleIndex() const {
  return SysYParser::RuleLandExp;
}


std::any SysYParser::LandExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitLandExp(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::LandExpContext* SysYParser::landExp() {
  LandExpContext *_localctx = _tracker.createInstance<LandExpContext>(_ctx, getState());
  enterRule(_localctx, 18, SysYParser::RuleLandExp);
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
    setState(155);
    eqExp();
    setState(160);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::LAnd) {
      setState(156);
      match(SysYParser::LAnd);
      setState(157);
      eqExp();
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

//----------------- EqExpContext ------------------------------------------------------------------

SysYParser::EqExpContext::EqExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SysYParser::RelExpContext *> SysYParser::EqExpContext::relExp() {
  return getRuleContexts<SysYParser::RelExpContext>();
}

SysYParser::RelExpContext* SysYParser::EqExpContext::relExp(size_t i) {
  return getRuleContext<SysYParser::RelExpContext>(i);
}

std::vector<SysYParser::EqOPContext *> SysYParser::EqExpContext::eqOP() {
  return getRuleContexts<SysYParser::EqOPContext>();
}

SysYParser::EqOPContext* SysYParser::EqExpContext::eqOP(size_t i) {
  return getRuleContext<SysYParser::EqOPContext>(i);
}


size_t SysYParser::EqExpContext::getRuleIndex() const {
  return SysYParser::RuleEqExp;
}


std::any SysYParser::EqExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitEqExp(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::EqExpContext* SysYParser::eqExp() {
  EqExpContext *_localctx = _tracker.createInstance<EqExpContext>(_ctx, getState());
  enterRule(_localctx, 20, SysYParser::RuleEqExp);
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
    relExp();
    setState(169);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::Eq

    || _la == SysYParser::Ne) {
      setState(164);
      eqOP();
      setState(165);
      relExp();
      setState(171);
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

//----------------- RelExpContext ------------------------------------------------------------------

SysYParser::RelExpContext::RelExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SysYParser::ExpContext *> SysYParser::RelExpContext::exp() {
  return getRuleContexts<SysYParser::ExpContext>();
}

SysYParser::ExpContext* SysYParser::RelExpContext::exp(size_t i) {
  return getRuleContext<SysYParser::ExpContext>(i);
}

std::vector<SysYParser::RelOPContext *> SysYParser::RelExpContext::relOP() {
  return getRuleContexts<SysYParser::RelOPContext>();
}

SysYParser::RelOPContext* SysYParser::RelExpContext::relOP(size_t i) {
  return getRuleContext<SysYParser::RelOPContext>(i);
}


size_t SysYParser::RelExpContext::getRuleIndex() const {
  return SysYParser::RuleRelExp;
}


std::any SysYParser::RelExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitRelExp(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::RelExpContext* SysYParser::relExp() {
  RelExpContext *_localctx = _tracker.createInstance<RelExpContext>(_ctx, getState());
  enterRule(_localctx, 22, SysYParser::RuleRelExp);
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
    setState(172);
    exp();
    setState(178);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 257698037760) != 0)) {
      setState(173);
      relOP();
      setState(174);
      exp();
      setState(180);
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
  enterRule(_localctx, 24, SysYParser::RuleUnaryExp);
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
    setState(184);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 117440512) != 0)) {
      setState(181);
      unaryOP();
      setState(186);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(187);
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
  enterRule(_localctx, 26, SysYParser::RulePrimaryExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(196);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(189);
      match(SysYParser::Lparen);
      setState(190);
      exp();
      setState(191);
      match(SysYParser::Rparen);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(193);
      lVal();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(194);
      number();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(195);
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
  enterRule(_localctx, 28, SysYParser::RuleCall);
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
    setState(198);
    match(SysYParser::Ident);
    setState(199);
    match(SysYParser::Lparen);
    setState(208);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6872065130496) != 0)) {
      setState(200);
      exp();
      setState(205);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysYParser::Comma) {
        setState(201);
        match(SysYParser::Comma);
        setState(202);
        exp();
        setState(207);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(210);
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
  enterRule(_localctx, 30, SysYParser::RuleNumber);
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
    setState(212);
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
  enterRule(_localctx, 32, SysYParser::RuleLVal);
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
    match(SysYParser::Ident);
    setState(221);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysYParser::Lbrkt) {
      setState(215);
      match(SysYParser::Lbrkt);
      setState(216);
      exp();
      setState(217);
      match(SysYParser::Rbrkt);
      setState(223);
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
  enterRule(_localctx, 34, SysYParser::RuleFuncDef);
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
    setState(224);
    funcType();
    setState(225);
    match(SysYParser::Ident);
    setState(226);
    match(SysYParser::Lparen);
    setState(235);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SysYParser::Int

    || _la == SysYParser::Float) {
      setState(227);
      funcFParam();
      setState(232);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysYParser::Comma) {
        setState(228);
        match(SysYParser::Comma);
        setState(229);
        funcFParam();
        setState(234);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(237);
    match(SysYParser::Rparen);
    setState(238);
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
  enterRule(_localctx, 36, SysYParser::RuleFuncFParam);
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
    setState(240);
    bType();
    setState(241);
    match(SysYParser::Ident);
    setState(253);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SysYParser::Lbrkt) {
      setState(242);
      match(SysYParser::Lbrkt);
      setState(243);
      match(SysYParser::Rbrkt);
      setState(250);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysYParser::Lbrkt) {
        setState(244);
        match(SysYParser::Lbrkt);
        setState(245);
        exp();
        setState(246);
        match(SysYParser::Rbrkt);
        setState(252);
        _errHandler->sync(this);
        _la = _input->LA(1);
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

std::vector<SysYParser::BlockItemContext *> SysYParser::BlockContext::blockItem() {
  return getRuleContexts<SysYParser::BlockItemContext>();
}

SysYParser::BlockItemContext* SysYParser::BlockContext::blockItem(size_t i) {
  return getRuleContext<SysYParser::BlockItemContext>(i);
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
  enterRule(_localctx, 38, SysYParser::RuleBlock);
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
    match(SysYParser::Lbrace);
    setState(259);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6872067503340) != 0)) {
      setState(256);
      blockItem();
      setState(261);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(262);
    match(SysYParser::Rbrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockItemContext ------------------------------------------------------------------

SysYParser::BlockItemContext::BlockItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysYParser::DeclContext* SysYParser::BlockItemContext::decl() {
  return getRuleContext<SysYParser::DeclContext>(0);
}

SysYParser::StmtContext* SysYParser::BlockItemContext::stmt() {
  return getRuleContext<SysYParser::StmtContext>(0);
}


size_t SysYParser::BlockItemContext::getRuleIndex() const {
  return SysYParser::RuleBlockItem;
}


std::any SysYParser::BlockItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitBlockItem(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::BlockItemContext* SysYParser::blockItem() {
  BlockItemContext *_localctx = _tracker.createInstance<BlockItemContext>(_ctx, getState());
  enterRule(_localctx, 40, SysYParser::RuleBlockItem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(266);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysYParser::Int:
      case SysYParser::Float:
      case SysYParser::Const: {
        enterOuterAlt(_localctx, 1);
        setState(264);
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
        enterOuterAlt(_localctx, 2);
        setState(265);
        stmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
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
  enterRule(_localctx, 42, SysYParser::RuleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(276);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(268);
      assign();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(269);
      expStmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(270);
      block();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(271);
      ifStmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(272);
      whileStmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(273);
      break_();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(274);
      continue_();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(275);
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
  enterRule(_localctx, 44, SysYParser::RuleAssign);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(278);
    lVal();
    setState(279);
    match(SysYParser::T__0);
    setState(280);
    exp();
    setState(281);
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
  enterRule(_localctx, 46, SysYParser::RuleExpStmt);
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
    setState(284);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6872065130496) != 0)) {
      setState(283);
      exp();
    }
    setState(286);
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

SysYParser::LorExpContext* SysYParser::IfStmtContext::lorExp() {
  return getRuleContext<SysYParser::LorExpContext>(0);
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
  enterRule(_localctx, 48, SysYParser::RuleIfStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(288);
    match(SysYParser::If);
    setState(289);
    match(SysYParser::Lparen);
    setState(290);
    lorExp();
    setState(291);
    match(SysYParser::Rparen);
    setState(292);
    stmt();
    setState(295);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      setState(293);
      match(SysYParser::Else);
      setState(294);
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

SysYParser::LorExpContext* SysYParser::WhileStmtContext::lorExp() {
  return getRuleContext<SysYParser::LorExpContext>(0);
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
  enterRule(_localctx, 50, SysYParser::RuleWhileStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(297);
    match(SysYParser::While);
    setState(298);
    match(SysYParser::Lparen);
    setState(299);
    lorExp();
    setState(300);
    match(SysYParser::Rparen);
    setState(301);
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
  enterRule(_localctx, 52, SysYParser::RuleBreak);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(303);
    match(SysYParser::Break);
    setState(304);
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
  enterRule(_localctx, 54, SysYParser::RuleContinue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(306);
    match(SysYParser::Continue);
    setState(307);
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
  enterRule(_localctx, 56, SysYParser::RuleReturn);
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
    setState(309);
    match(SysYParser::Return);
    setState(311);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6872065130496) != 0)) {
      setState(310);
      exp();
    }
    setState(313);
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
  enterRule(_localctx, 58, SysYParser::RuleUnaryOP);
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
    setState(315);
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

//----------------- AddOPContext ------------------------------------------------------------------

SysYParser::AddOPContext::AddOPContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::AddOPContext::Add() {
  return getToken(SysYParser::Add, 0);
}

tree::TerminalNode* SysYParser::AddOPContext::Sub() {
  return getToken(SysYParser::Sub, 0);
}


size_t SysYParser::AddOPContext::getRuleIndex() const {
  return SysYParser::RuleAddOP;
}


std::any SysYParser::AddOPContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitAddOP(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::AddOPContext* SysYParser::addOP() {
  AddOPContext *_localctx = _tracker.createInstance<AddOPContext>(_ctx, getState());
  enterRule(_localctx, 60, SysYParser::RuleAddOP);
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
    setState(317);
    _la = _input->LA(1);
    if (!(_la == SysYParser::Sub

    || _la == SysYParser::Add)) {
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

//----------------- MulOPContext ------------------------------------------------------------------

SysYParser::MulOPContext::MulOPContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::MulOPContext::Mul() {
  return getToken(SysYParser::Mul, 0);
}

tree::TerminalNode* SysYParser::MulOPContext::Div() {
  return getToken(SysYParser::Div, 0);
}

tree::TerminalNode* SysYParser::MulOPContext::Mod() {
  return getToken(SysYParser::Mod, 0);
}


size_t SysYParser::MulOPContext::getRuleIndex() const {
  return SysYParser::RuleMulOP;
}


std::any SysYParser::MulOPContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitMulOP(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::MulOPContext* SysYParser::mulOP() {
  MulOPContext *_localctx = _tracker.createInstance<MulOPContext>(_ctx, getState());
  enterRule(_localctx, 62, SysYParser::RuleMulOP);
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
    setState(319);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 939524096) != 0))) {
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

//----------------- EqOPContext ------------------------------------------------------------------

SysYParser::EqOPContext::EqOPContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::EqOPContext::Eq() {
  return getToken(SysYParser::Eq, 0);
}

tree::TerminalNode* SysYParser::EqOPContext::Ne() {
  return getToken(SysYParser::Ne, 0);
}


size_t SysYParser::EqOPContext::getRuleIndex() const {
  return SysYParser::RuleEqOP;
}


std::any SysYParser::EqOPContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitEqOP(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::EqOPContext* SysYParser::eqOP() {
  EqOPContext *_localctx = _tracker.createInstance<EqOPContext>(_ctx, getState());
  enterRule(_localctx, 64, SysYParser::RuleEqOP);
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
    setState(321);
    _la = _input->LA(1);
    if (!(_la == SysYParser::Eq

    || _la == SysYParser::Ne)) {
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

//----------------- RelOPContext ------------------------------------------------------------------

SysYParser::RelOPContext::RelOPContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysYParser::RelOPContext::Lt() {
  return getToken(SysYParser::Lt, 0);
}

tree::TerminalNode* SysYParser::RelOPContext::Gt() {
  return getToken(SysYParser::Gt, 0);
}

tree::TerminalNode* SysYParser::RelOPContext::Le() {
  return getToken(SysYParser::Le, 0);
}

tree::TerminalNode* SysYParser::RelOPContext::Ge() {
  return getToken(SysYParser::Ge, 0);
}


size_t SysYParser::RelOPContext::getRuleIndex() const {
  return SysYParser::RuleRelOP;
}


std::any SysYParser::RelOPContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysYVisitor*>(visitor))
    return parserVisitor->visitRelOP(this);
  else
    return visitor->visitChildren(this);
}

SysYParser::RelOPContext* SysYParser::relOP() {
  RelOPContext *_localctx = _tracker.createInstance<RelOPContext>(_ctx, getState());
  enterRule(_localctx, 66, SysYParser::RuleRelOP);
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
    setState(323);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 257698037760) != 0))) {
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
  enterRule(_localctx, 68, SysYParser::RuleBType);
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
    setState(325);
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
  enterRule(_localctx, 70, SysYParser::RuleFuncType);
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
    setState(327);
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
  ::antlr4::internal::call_once(sysyParserOnceFlag, sysyParserInitialize);
}
