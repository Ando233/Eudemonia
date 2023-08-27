
// Generated from SysY.g4 by ANTLR 4.13.0


#include "SysYLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct SysYLexerStaticData final {
  SysYLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SysYLexerStaticData(const SysYLexerStaticData&) = delete;
  SysYLexerStaticData(SysYLexerStaticData&&) = delete;
  SysYLexerStaticData& operator=(const SysYLexerStaticData&) = delete;
  SysYLexerStaticData& operator=(SysYLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag sysylexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
SysYLexerStaticData *sysylexerLexerStaticData = nullptr;

void sysylexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (sysylexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(sysylexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<SysYLexerStaticData>(
    std::vector<std::string>{
      "T__0", "Int", "Float", "Void", "Const", "Return", "If", "Else", "For", 
      "While", "Do", "Break", "Continue", "Lparen", "Rparen", "Lbrkt", "Rbrkt", 
      "Lbrace", "Rbrace", "Comma", "Semicolon", "Question", "Colon", "Sub", 
      "Not", "Add", "Mul", "Div", "Mod", "LAnd", "LOr", "Eq", "Ne", "Lt", 
      "Le", "Gt", "Ge", "IntConst", "HexadecimalDigits", "ExponentPart", 
      "FractionPart", "FloatConst", "Ident", "STRING", "ESC", "WS", "LINE_COMMENT", 
      "COMMENT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,47,362,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,1,0,1,0,1,1,1,
  	1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,
  	8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,11,1,
  	11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,
  	14,1,14,1,15,1,15,1,16,1,16,1,17,1,17,1,18,1,18,1,19,1,19,1,20,1,20,1,
  	21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,1,25,1,25,1,26,1,26,1,27,1,27,1,
  	28,1,28,1,29,1,29,1,29,1,30,1,30,1,30,1,31,1,31,1,31,1,32,1,32,1,32,1,
  	33,1,33,1,34,1,34,1,34,1,35,1,35,1,36,1,36,1,36,1,37,4,37,219,8,37,11,
  	37,12,37,220,1,37,1,37,1,37,1,37,4,37,227,8,37,11,37,12,37,228,1,37,1,
  	37,1,37,1,37,4,37,235,8,37,11,37,12,37,236,3,37,239,8,37,1,38,1,38,1,
  	38,1,38,4,38,245,8,38,11,38,12,38,246,1,38,1,38,1,38,1,38,4,38,253,8,
  	38,11,38,12,38,254,3,38,257,8,38,1,39,1,39,1,39,4,39,262,8,39,11,39,12,
  	39,263,1,40,5,40,267,8,40,10,40,12,40,270,9,40,1,40,1,40,4,40,274,8,40,
  	11,40,12,40,275,1,40,4,40,279,8,40,11,40,12,40,280,1,40,3,40,284,8,40,
  	1,41,1,41,3,41,288,8,41,1,41,4,41,291,8,41,11,41,12,41,292,1,41,1,41,
  	3,41,297,8,41,1,41,1,41,1,41,1,41,1,41,3,41,304,8,41,1,42,1,42,5,42,308,
  	8,42,10,42,12,42,311,9,42,1,43,1,43,1,43,5,43,316,8,43,10,43,12,43,319,
  	9,43,1,43,1,43,1,44,1,44,1,44,1,44,3,44,327,8,44,1,45,1,45,1,45,1,45,
  	1,46,1,46,1,46,1,46,5,46,337,8,46,10,46,12,46,340,9,46,1,46,3,46,343,
  	8,46,1,46,1,46,1,46,1,46,1,47,1,47,1,47,1,47,5,47,353,8,47,10,47,12,47,
  	356,9,47,1,47,1,47,1,47,1,47,1,47,3,317,338,354,0,48,1,1,3,2,5,3,7,4,
  	9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,
  	17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,
  	57,29,59,30,61,31,63,32,65,33,67,34,69,35,71,36,73,37,75,38,77,39,79,
  	40,81,41,83,42,85,43,87,44,89,0,91,45,93,46,95,47,1,0,7,1,0,48,57,3,0,
  	48,57,65,70,97,102,2,0,69,69,101,101,2,0,43,43,45,45,3,0,65,90,95,95,
  	97,122,4,0,48,57,65,90,95,95,97,122,3,0,9,10,13,13,32,32,386,0,1,1,0,
  	0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,
  	1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,
  	0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,
  	0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,
  	1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,
  	0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,
  	0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,
  	1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,0,83,1,0,0,0,0,85,1,0,0,0,0,87,1,0,
  	0,0,0,91,1,0,0,0,0,93,1,0,0,0,0,95,1,0,0,0,1,97,1,0,0,0,3,99,1,0,0,0,
  	5,103,1,0,0,0,7,109,1,0,0,0,9,114,1,0,0,0,11,120,1,0,0,0,13,127,1,0,0,
  	0,15,130,1,0,0,0,17,135,1,0,0,0,19,139,1,0,0,0,21,145,1,0,0,0,23,148,
  	1,0,0,0,25,154,1,0,0,0,27,163,1,0,0,0,29,165,1,0,0,0,31,167,1,0,0,0,33,
  	169,1,0,0,0,35,171,1,0,0,0,37,173,1,0,0,0,39,175,1,0,0,0,41,177,1,0,0,
  	0,43,179,1,0,0,0,45,181,1,0,0,0,47,183,1,0,0,0,49,185,1,0,0,0,51,187,
  	1,0,0,0,53,189,1,0,0,0,55,191,1,0,0,0,57,193,1,0,0,0,59,195,1,0,0,0,61,
  	198,1,0,0,0,63,201,1,0,0,0,65,204,1,0,0,0,67,207,1,0,0,0,69,209,1,0,0,
  	0,71,212,1,0,0,0,73,214,1,0,0,0,75,238,1,0,0,0,77,256,1,0,0,0,79,258,
  	1,0,0,0,81,283,1,0,0,0,83,303,1,0,0,0,85,305,1,0,0,0,87,312,1,0,0,0,89,
  	326,1,0,0,0,91,328,1,0,0,0,93,332,1,0,0,0,95,348,1,0,0,0,97,98,5,61,0,
  	0,98,2,1,0,0,0,99,100,5,105,0,0,100,101,5,110,0,0,101,102,5,116,0,0,102,
  	4,1,0,0,0,103,104,5,102,0,0,104,105,5,108,0,0,105,106,5,111,0,0,106,107,
  	5,97,0,0,107,108,5,116,0,0,108,6,1,0,0,0,109,110,5,118,0,0,110,111,5,
  	111,0,0,111,112,5,105,0,0,112,113,5,100,0,0,113,8,1,0,0,0,114,115,5,99,
  	0,0,115,116,5,111,0,0,116,117,5,110,0,0,117,118,5,115,0,0,118,119,5,116,
  	0,0,119,10,1,0,0,0,120,121,5,114,0,0,121,122,5,101,0,0,122,123,5,116,
  	0,0,123,124,5,117,0,0,124,125,5,114,0,0,125,126,5,110,0,0,126,12,1,0,
  	0,0,127,128,5,105,0,0,128,129,5,102,0,0,129,14,1,0,0,0,130,131,5,101,
  	0,0,131,132,5,108,0,0,132,133,5,115,0,0,133,134,5,101,0,0,134,16,1,0,
  	0,0,135,136,5,102,0,0,136,137,5,111,0,0,137,138,5,114,0,0,138,18,1,0,
  	0,0,139,140,5,119,0,0,140,141,5,104,0,0,141,142,5,105,0,0,142,143,5,108,
  	0,0,143,144,5,101,0,0,144,20,1,0,0,0,145,146,5,100,0,0,146,147,5,111,
  	0,0,147,22,1,0,0,0,148,149,5,98,0,0,149,150,5,114,0,0,150,151,5,101,0,
  	0,151,152,5,97,0,0,152,153,5,107,0,0,153,24,1,0,0,0,154,155,5,99,0,0,
  	155,156,5,111,0,0,156,157,5,110,0,0,157,158,5,116,0,0,158,159,5,105,0,
  	0,159,160,5,110,0,0,160,161,5,117,0,0,161,162,5,101,0,0,162,26,1,0,0,
  	0,163,164,5,40,0,0,164,28,1,0,0,0,165,166,5,41,0,0,166,30,1,0,0,0,167,
  	168,5,91,0,0,168,32,1,0,0,0,169,170,5,93,0,0,170,34,1,0,0,0,171,172,5,
  	123,0,0,172,36,1,0,0,0,173,174,5,125,0,0,174,38,1,0,0,0,175,176,5,44,
  	0,0,176,40,1,0,0,0,177,178,5,59,0,0,178,42,1,0,0,0,179,180,5,63,0,0,180,
  	44,1,0,0,0,181,182,5,58,0,0,182,46,1,0,0,0,183,184,5,45,0,0,184,48,1,
  	0,0,0,185,186,5,33,0,0,186,50,1,0,0,0,187,188,5,43,0,0,188,52,1,0,0,0,
  	189,190,5,42,0,0,190,54,1,0,0,0,191,192,5,47,0,0,192,56,1,0,0,0,193,194,
  	5,37,0,0,194,58,1,0,0,0,195,196,5,38,0,0,196,197,5,38,0,0,197,60,1,0,
  	0,0,198,199,5,124,0,0,199,200,5,124,0,0,200,62,1,0,0,0,201,202,5,61,0,
  	0,202,203,5,61,0,0,203,64,1,0,0,0,204,205,5,33,0,0,205,206,5,61,0,0,206,
  	66,1,0,0,0,207,208,5,60,0,0,208,68,1,0,0,0,209,210,5,60,0,0,210,211,5,
  	61,0,0,211,70,1,0,0,0,212,213,5,62,0,0,213,72,1,0,0,0,214,215,5,62,0,
  	0,215,216,5,61,0,0,216,74,1,0,0,0,217,219,7,0,0,0,218,217,1,0,0,0,219,
  	220,1,0,0,0,220,218,1,0,0,0,220,221,1,0,0,0,221,239,1,0,0,0,222,223,5,
  	48,0,0,223,224,5,120,0,0,224,226,1,0,0,0,225,227,7,1,0,0,226,225,1,0,
  	0,0,227,228,1,0,0,0,228,226,1,0,0,0,228,229,1,0,0,0,229,239,1,0,0,0,230,
  	231,5,48,0,0,231,232,5,88,0,0,232,234,1,0,0,0,233,235,7,1,0,0,234,233,
  	1,0,0,0,235,236,1,0,0,0,236,234,1,0,0,0,236,237,1,0,0,0,237,239,1,0,0,
  	0,238,218,1,0,0,0,238,222,1,0,0,0,238,230,1,0,0,0,239,76,1,0,0,0,240,
  	241,5,48,0,0,241,242,5,120,0,0,242,244,1,0,0,0,243,245,7,1,0,0,244,243,
  	1,0,0,0,245,246,1,0,0,0,246,244,1,0,0,0,246,247,1,0,0,0,247,257,1,0,0,
  	0,248,249,5,48,0,0,249,250,5,88,0,0,250,252,1,0,0,0,251,253,7,1,0,0,252,
  	251,1,0,0,0,253,254,1,0,0,0,254,252,1,0,0,0,254,255,1,0,0,0,255,257,1,
  	0,0,0,256,240,1,0,0,0,256,248,1,0,0,0,257,78,1,0,0,0,258,259,7,2,0,0,
  	259,261,7,3,0,0,260,262,7,0,0,0,261,260,1,0,0,0,262,263,1,0,0,0,263,261,
  	1,0,0,0,263,264,1,0,0,0,264,80,1,0,0,0,265,267,7,0,0,0,266,265,1,0,0,
  	0,267,270,1,0,0,0,268,266,1,0,0,0,268,269,1,0,0,0,269,271,1,0,0,0,270,
  	268,1,0,0,0,271,273,5,46,0,0,272,274,7,0,0,0,273,272,1,0,0,0,274,275,
  	1,0,0,0,275,273,1,0,0,0,275,276,1,0,0,0,276,284,1,0,0,0,277,279,7,0,0,
  	0,278,277,1,0,0,0,279,280,1,0,0,0,280,278,1,0,0,0,280,281,1,0,0,0,281,
  	282,1,0,0,0,282,284,5,46,0,0,283,268,1,0,0,0,283,278,1,0,0,0,284,82,1,
  	0,0,0,285,287,3,81,40,0,286,288,3,79,39,0,287,286,1,0,0,0,287,288,1,0,
  	0,0,288,304,1,0,0,0,289,291,7,0,0,0,290,289,1,0,0,0,291,292,1,0,0,0,292,
  	290,1,0,0,0,292,293,1,0,0,0,293,294,1,0,0,0,294,304,3,79,39,0,295,297,
  	3,77,38,0,296,295,1,0,0,0,296,297,1,0,0,0,297,298,1,0,0,0,298,299,5,46,
  	0,0,299,304,3,77,38,0,300,301,3,77,38,0,301,302,5,46,0,0,302,304,1,0,
  	0,0,303,285,1,0,0,0,303,290,1,0,0,0,303,296,1,0,0,0,303,300,1,0,0,0,304,
  	84,1,0,0,0,305,309,7,4,0,0,306,308,7,5,0,0,307,306,1,0,0,0,308,311,1,
  	0,0,0,309,307,1,0,0,0,309,310,1,0,0,0,310,86,1,0,0,0,311,309,1,0,0,0,
  	312,317,5,34,0,0,313,316,3,89,44,0,314,316,9,0,0,0,315,313,1,0,0,0,315,
  	314,1,0,0,0,316,319,1,0,0,0,317,318,1,0,0,0,317,315,1,0,0,0,318,320,1,
  	0,0,0,319,317,1,0,0,0,320,321,5,34,0,0,321,88,1,0,0,0,322,323,5,92,0,
  	0,323,327,5,34,0,0,324,325,5,92,0,0,325,327,5,92,0,0,326,322,1,0,0,0,
  	326,324,1,0,0,0,327,90,1,0,0,0,328,329,7,6,0,0,329,330,1,0,0,0,330,331,
  	6,45,0,0,331,92,1,0,0,0,332,333,5,47,0,0,333,334,5,47,0,0,334,338,1,0,
  	0,0,335,337,9,0,0,0,336,335,1,0,0,0,337,340,1,0,0,0,338,339,1,0,0,0,338,
  	336,1,0,0,0,339,342,1,0,0,0,340,338,1,0,0,0,341,343,5,13,0,0,342,341,
  	1,0,0,0,342,343,1,0,0,0,343,344,1,0,0,0,344,345,5,10,0,0,345,346,1,0,
  	0,0,346,347,6,46,0,0,347,94,1,0,0,0,348,349,5,47,0,0,349,350,5,42,0,0,
  	350,354,1,0,0,0,351,353,9,0,0,0,352,351,1,0,0,0,353,356,1,0,0,0,354,355,
  	1,0,0,0,354,352,1,0,0,0,355,357,1,0,0,0,356,354,1,0,0,0,357,358,5,42,
  	0,0,358,359,5,47,0,0,359,360,1,0,0,0,360,361,6,47,0,0,361,96,1,0,0,0,
  	24,0,220,228,236,238,246,254,256,263,268,275,280,283,287,292,296,303,
  	309,315,317,326,338,342,354,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  sysylexerLexerStaticData = staticData.release();
}

}

SysYLexer::SysYLexer(CharStream *input) : Lexer(input) {
  SysYLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *sysylexerLexerStaticData->atn, sysylexerLexerStaticData->decisionToDFA, sysylexerLexerStaticData->sharedContextCache);
}

SysYLexer::~SysYLexer() {
  delete _interpreter;
}

std::string SysYLexer::getGrammarFileName() const {
  return "SysY.g4";
}

const std::vector<std::string>& SysYLexer::getRuleNames() const {
  return sysylexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& SysYLexer::getChannelNames() const {
  return sysylexerLexerStaticData->channelNames;
}

const std::vector<std::string>& SysYLexer::getModeNames() const {
  return sysylexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& SysYLexer::getVocabulary() const {
  return sysylexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SysYLexer::getSerializedATN() const {
  return sysylexerLexerStaticData->serializedATN;
}

const atn::ATN& SysYLexer::getATN() const {
  return *sysylexerLexerStaticData->atn;
}




void SysYLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  sysylexerLexerInitialize();
#else
  ::antlr4::internal::call_once(sysylexerLexerOnceFlag, sysylexerLexerInitialize);
#endif
}
