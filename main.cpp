#include "lexer.h"
#include "parser.h"
#include "assemblycode_generator.h"

#include <fstream>
#include <sstream>
#include <iostream>

// Token type readable
std::string tokenTypeToString(TokenType type) {
    switch(type) {
        case TokenType::NUMBER: return "NUMBER";
        case TokenType::IDENTIFIER: return "IDENTIFIER";
        case TokenType::STRING_LITERAL: return "STRING_LITERAL";
        case TokenType::INTEGER_TYPE: return "INTEGER_TYPE";
        case TokenType::DECIMAL_TYPE: return "DECIMAL_TYPE";
        case TokenType::STRING_TYPE: return "STRING_TYPE";
        case TokenType::IF: return "IF";
        case TokenType::ELSE: return "ELSE";
        case TokenType::WHILE: return "WHILE";
        case TokenType::FOR: return "FOR";
        case TokenType::PRINT: return "PRINT";
        case TokenType::OPERATOR: return "OPERATOR";
        case TokenType::ASSIGN: return "ASSIGN";
        case TokenType::SEMICOLON: return "SEMICOLON";
        case TokenType::COMMA: return "COMMA";
        case TokenType::LBRACE: return "LBRACE";
        case TokenType::RBRACE: return "RBRACE";
        case TokenType::END_OF_FILE: return "EOF";
        default: return "UNKNOWN";
    }
}

int main() {
    std::ifstream file("input.custom");

    if (!file.is_open()) {
        std::cerr << "Failed to open input.custom" << std::endl;
        return 1;
    }

    std::stringstream buffer;
    buffer << file.rdbuf();

    Lexer lexer(buffer.str());
    std::vector<Token> tokens;
    Token token;

    std::cout << "\n===== TOKENS =====\n";

    do {
        token = lexer.getNextToken();
        tokens.push_back(token);

        std::cout << "Token: " << token.lexeme
                  << " , Type: " << tokenTypeToString(token.type)
                  << std::endl;

    } while (token.type != TokenType::END_OF_FILE);

    std::cout << "==================\n";

    Parser parser(tokens);
    parser.parse();

    // Generate Assembly Code
    generateAssembly("output_3ac.txt", "output_asm.txt");

    return 0;
}
