#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <regex>

// Function to tokenize a C++ code line
std::vector<std::string> tokenizeCppLine(const std::string& line) {
    std::vector<std::string> tokens;
    std::regex tokenRegex(R"(\b\w+\b|[^\w\s])"); // Regular expression to match C++ tokens

    // Tokenize the line
    std::sregex_iterator it(line.begin(), line.end(), tokenRegex);
    std::sregex_iterator end;
    while (it != end) {
        tokens.push_back(it->str());
        ++it;
    }

    return tokens;
}

// Function to tokenize a C++ file
std::vector<std::string> tokenizeCppFile(const std::string& filename) {
    std::ifstream inputFile(filename);
    std::vector<std::string> tokens;

    if (!inputFile) {
        std::cerr << "Error: Unable to open input file." << std::endl;
        return tokens;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        // Tokenize each line
        std::vector<std::string> lineTokens = tokenizeCppLine(line);

        // Add line tokens to the vector of all tokens
        tokens.insert(tokens.end(), lineTokens.begin(), lineTokens.end());
    }

    return tokens;
}

int main() {
    // Provide the input C++ file name
    std::string filename = "text.cpp";

    // Tokenize the input C++ file
    std::vector<std::string> tokens = tokenizeCppFile(filename);

    // Print all tokens
    for (const auto& token : tokens) {
        std::cout << token << std::endl;
    }

    return 0;
}
