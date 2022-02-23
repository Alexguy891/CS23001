//Name: Alex Ely
//Class: CS 23001
//Created: October 21, 2021
//Project: object_construction

#include <iostream>
#include "object_construction.hpp"

myClass::myClass() {
    std::cout << "Called default constructor." << std::endl;
}

myClass::myClass(const myClass &test) {
    std::cout << "Called copy constructor." << std::endl;
}

myClass::~myClass() {
    std::cout << "Called destructor." << std::endl;
}

myClass myClass::operator=(const myClass &test) {
    std::cout << "Called operator assignment overload." << std::endl;
    return *this;
}

void call_by_value(myClass test) {
    std::cout << "Called call by value function" << std::endl;
}

void call_by_reference(myClass *test) {
    std::cout << "Called call by reference function" << std::endl;
}