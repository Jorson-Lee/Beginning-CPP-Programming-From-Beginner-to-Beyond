// Section 19
// Challenge 4
// Copy Romeo and Juliet with line numbers
#include <ios>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <iterator>
#include <string>

int main() {
    std::ifstream in_file("romeoandjuliet");
    std::ofstream out_file("romeoandjulietout.txt");

    if (!in_file.is_open()) {
        std::cout << "Failed to open input file!";
    }
    if (!out_file.is_open()) {
        std::cout << "Failed to open output file!";
    }

    std::string line;
    int lineNumber = 0;
    while (getline(in_file, line)) {
        if (line == "") {
            out_file << std::endl;
        } else {
            lineNumber++;
            out_file << std::setw(7) << std::left << lineNumber << line << std::endl;
        }
    }
    std::cout << "Copy complete!";
    return 0;
}

