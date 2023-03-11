#pragma once
#include <string>
#include <vector>

enum Type {
    Variable,
    Constant,
    Equality,
    Addition,
    Subtraction,
    Multiplication,
    Division,
    Exponentiation,
    FunctionCall,
    /* */
    Paren
};

class Token {
    std::string str;
    Type type;
};

class Lexer {
    public:
        int pos;
        char ch;
        int line;
        int col;
        std::string str;
        // General Functions

        char next(); // Consume character, moves to pointer next character and returns current
        char look(); // Looks at character, does not consume (shift to next)

        // Classification functions
        bool isChar(char ch);
        bool isAlpha(char ch);
        bool isNum(char ch);

        // Main loop
        std::vector<Token> lex(); // Returns Token vecoor

        // Initializer
        Lexer(std::string str);
};