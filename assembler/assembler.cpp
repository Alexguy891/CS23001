#include "utilities.hpp"
#include <fstream>
#include <ostream>
#include "stack.hpp"
#include "../string/string.hpp"

//REQUIRED: Accessible file
//ENSURED: Called postfix and assemble functions, outputted to file.
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
            out << '\n';
            out << "Infix: " << line << '\n';
            result = postfix(line);
            String postRes;
            postRes = result.pop();
            out << "Postfix: " << postRes << '\n' << '\n';
            assemble(postRes, out);
            line = "";
            result = empty;
        }
        file.get(c);
    }
    out << '\n';
}

//REQUIRED: !argc < 2 || !argc > 3
//ENSURE: called output function
int main(int argc, char *argv[]) {
    if(argc < 2 || argc > 3)  {
        std::cerr << "Error" << '\n';
        std::cerr << "Usage: " << "assembler input [output]\n";
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