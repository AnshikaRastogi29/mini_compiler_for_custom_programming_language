#include "lexer.h"
#include "parser.h"
#include <fstream>
#include <sstream>
#include <iostream>

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

    do {
        token = lexer.getNextToken();
        tokens.push_back(token);
    } while (token.type != TokenType::END_OF_FILE);

    Parser parser(tokens);
    parser.parse();

    // Generate Assembly Code
    IntermediateCodeGenerator& icg = parser.getICG();
   
    return 0;
}