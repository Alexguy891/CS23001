//==============================================================================
// Basics for openning a file for milestone 2 of Project 1.
//
#include <iostream>
#include <fstream>
#include "bigint.hpp"

int main() {
    std::ifstream in("data1-1.txt"); // Define stream for input
    if(!in) { // Make sure it opened correctly.
        std::cerr << "Could not open data1-1.txt, exiting." << std::endl;
        exit(1);
    }
    while(!in.eof()) { //Until end of file
        bigint lhs;
        bigint rhs;
        bigint sum;
        
        in >> lhs; //Reads lhs bigint
        in >> rhs; //Reads rhs bigint
        
        if(lhs.arr[0] == -1 || rhs.arr[0] == -1) //Checks for blank line input
            break;
        
        std::cout << std::endl;
        std::cout << "The first bigint is: " << lhs << std::endl << std::endl; //Prints lhs bigint
        std::cout << "The second bigint is: " << rhs << std::endl << std::endl; //Prints rhs bigint
        sum = rhs + lhs; //Add them together
        std::cout << "The sum of the two bigints is: " << sum << std::endl << std::endl; //Print out results
        std::cout << "_______________________________________________________" << std::endl << std::endl; //Prints out seperating line
    }
    in.close();
    return 0;
}



