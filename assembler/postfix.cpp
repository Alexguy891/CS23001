#include "utilities.hpp"
#include <fstream>
#include <ostream>
#include "stack.hpp"

void output(std::ifstream& file, std::ostream& out) {
    if(!file) { // Make sure it opened correctly.
        std::cerr << "Could not open input file , exiting." << std::endl;
        exit(1);
    }
    char c;
    stack<String> result;
    stack<String> empty;
    String line;

    file.get(c);
    while(!file.eof()) { //Until end of file
        if(c != ';' && c != '\n' && c != '\t' && c != '\r' && c != '\025' && c != '\036')
            line += c;
        else if (c == ';') {
            out << "\n\n";
            out << "Infix: " << line << '\n';
            result = postfix(line);
            out << "Postfix: " << result.pop() << '\n';
            line = "";
            result = empty;
        }
        file.get(c);
    }
    out << "\n\n";
}

int main(int argc, char *argv[]) {
    if(argc < 2 || argc > 3)  {
        std::cerr << "Error" << '\n';
        std::cerr << "Usage: " << "postfix input [output]\n";
        exit(1);
    }
    if(argc == 2) {
        std::ifstream inFile(argv[1]);
        output(inFile, std::cout);
    }
    if(argc == 3) {
        std::ifstream inFile(argv[1]);
        std::ofstream outFile(argv[2]);
        output(inFile, outFile);
    }
}