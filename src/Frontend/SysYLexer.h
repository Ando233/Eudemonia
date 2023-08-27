
// Generated from SysY.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  SysYLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, Int = 2, Float = 3, Void = 4, Const = 5, Return = 6, If = 7, 
    Else = 8, For = 9, While = 10, Do = 11, Break = 12, Continue = 13, Lparen = 14, 
    Rparen = 15, Lbrkt = 16, Rbrkt = 17, Lbrace = 18, Rbrace = 19, Comma = 20, 
    Semicolon = 21, Question = 22, Colon = 23, Sub = 24, Not = 25, Add = 26, 
    Mul = 27, Div = 28, Mod = 29, LAnd = 30, LOr = 31, Eq = 32, Ne = 33, 
    Lt = 34, Le = 35, Gt = 36, Ge = 37, IntConst = 38, HexadecimalDigits = 39, 
    ExponentPart = 40, FractionPart = 41, FloatConst = 42, Ident = 43, STRING = 44, 
    WS = 45, LINE_COMMENT = 46, COMMENT = 47
  };

  explicit SysYLexer(antlr4::CharStream *input);

  ~SysYLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

