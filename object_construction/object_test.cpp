//Name: Alex Ely
//Class: CS 23001
//Created: October 21, 2021
//Project: object_construction
#include <iostream>
#include "object_construction.hpp"

int main() {
    myClass test; //Default constructor call
    
    myClass test2(test); //Copy constructor call

    myClass test3; //Default constructor call

    test3 = test; //Assignment overload call

    myClass temp;
    temp = test3;

    std::cout << "Before call by value" << std::endl;
    call_by_value(test3);
    std::cout << "Before call by ref" << std::endl;
    call_by_reference(&temp);

    return 0;
}