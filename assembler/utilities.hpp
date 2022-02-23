//File: utilities.hpp
//Author: Alex Ely
//Date: Fall 2021
//Details: Tools used in Project 3

#ifndef CS2_UTILITIES_HPP_
#define CS2_UTILITIES_HPP_

#include "../string/string.hpp"
#include "stack.hpp"

stack<String> postfix(String);
void assemble(String, std::ostream&);
String evaluate(String, String, String, int, std::ostream&);

#endif