#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <regex>

void tokenizeCppProgram(std::ifstream& inputFile) {
    std::string line;
    std::regex tokenRegex("[[:alpha:]_][[:alnum:]_]*|[[:digit:]]+|\"[^\"]*\"|'.'|//.*|/\\*.*?\\*/|\\S");

    while (std::getline(inputFile, line)) {
        std::istringstream iss(line);
        std::string token;

        while (iss >> token) {
            std::smatch match;
            if (std::regex_match(token, match, tokenRegex)) {
                std::cout << match.str() << std::endl;
            }
        }
    }
}

int main() {
    std::ifstream inputFile("text.cpp");

    if (!inputFile) {
        std::cerr << "Error: Unable to open input file." << std::endl;
        return 1;
    }

    tokenizeCppProgram(inputFile);

    inputFile.close();

    return 0;
}
