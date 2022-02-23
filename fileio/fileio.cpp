//Alex Ely
//Lab 05 Fileio
#include <iostream>
#include <fstream>
void readChar();
void addInt();
int main() {
    readChar();
    addInt();
    return 0;
}

void readChar() {
    std::ifstream in("fileio-text.txt");
    if(!in) {
        std::cerr << "Could not open fileio-text.txt, exiting." << std::endl;
        exit(1);
    }
    char c;
    in.get(c);
    while(!in.eof()) {
        if(c != ' ')
            std::cout << c;
        else
            std::cout << std::endl;
        in.get(c);
    }
    std::cout << std::endl;
    in.close();
}

void addInt() {
    std::ifstream in("fileio-data-1.txt");
    
    if(!in) {
        std::cerr << "Could not open fileio-data-1.txt, exiting." << std::endl;
        exit(1);
    }
    
    char cLeft[19]{};
    char cRight[19]{};
    int iLeft[19]{};
    int iRight[19]{};
    int rPow = 0;
    int lPow = 0;
    int rhs = 0;
    int lhs = 0;
    char c;
    
    in.get(c);
    while(c != ';') {
        if(c != ';' && c != ' ' && c != '\n' && c != '\r' && c != '\t') {
            cLeft[lPow] = c;
            lPow++;
        }
        in.get(c);
    }
    
    in.get(c);
    while(c != ';') {
        if(c != ';' && c != ' ' && c != '\n' && c != '\r' && c != '\t') {
            cRight[rPow] = c;
            rPow++;
        }
        in.get(c);
    }
    for(int i = 0; i < 19; i++) {
        char ch = cLeft[i];
        int num = int(ch) - int('0');
        iLeft[i] = num;
    }
    
    for(int i = 0; i < 19; i++) {
        char ch = cRight[i];
        int num = int(ch) - int('0');
        iRight[i] = num;
    }
    
    for(int i = 0; i < lPow; i++) {
        int pow = 1;
        int j = 0;
        while(j < lPow - 1 - i) {
            pow *= 10;
            j++;
        }
        lhs += iLeft[i] * pow;
    }
    
    for(int i = 0; i < rPow; i++) {
        int pow = 1;
        int j = 0;
        while(j < rPow - 1 - i) {
            pow *= 10;
            j++;
        }
        rhs += iRight[i] * pow;
    }
    std::cout << lhs + rhs << std::endl;
    in.close();
}
