#include <new>
#include <iostream>
#include "../string/string.hpp"
#include "stack.hpp"
#include <fstream>
#include <iomanip>
/////////////////////////////////////////////
//REQUIRES: Valid infix expression as String
//ENSURES: result.tos holds the original String && (!result.empty()).
stack<String> postfix(String exp) {
    assert(exp.length() > 0);
    stack<String> result;
    String token;
    String right;
    String oper;
    String left;
    int unsigned long i = 0;

    while( i < exp.split(' ').size() - 1) {
        token = exp.split(' ')[i];
        if(token == ')') {
            right = result.pop();
            oper = result.pop();
            left = result.pop();
            result.push(left + " " + right + " " + oper);
        }
        else if(token != '(')
            result.push(token);
        ++i;
    }
    return result;
}

//REQUIRES: Passed 3 Strings, int by ref, ostream by ref
//ENSURES: Outputs formatted assembly instructions, returns TMP variable
String evaluate(String left, String t, String right, int &n, std::ostream& out) {
    if(t == '+')
        t = "AD";
    if(t == '-')
        t = "SB";
    if(t == '*')
        t = "MU";
    if(t == '/')
        t = "DV";
    String tmpCnt;
    int num = n;
    int tempNum = num;
    int cnt = 0;
    while(tempNum != 0) {
        tempNum /= 10;
        tmpCnt += "X";
    }
    while(num != 0) {
        char c = (char)('0' + (num % 10));
        tmpCnt[tmpCnt.length() - 1 - cnt] = c; 
        num /= 10;
        cnt++;
    }

    out << std::setw(5) << "LD" << std::setw(9+left.length()) << left << '\n'
        << std::setw(5) << t << std::setw(9+right.length()) << right << '\n'
        << std::setw(5) << "ST" << std::setw(11+tmpCnt.length()) << "TMP" << n << '\n';
    return "TMP" + tmpCnt;
}

//REQUIRES: Valid postfix expression
//ENSURES: Stack containing assembly instructions
void assemble(String exp, std::ostream& out) {
    int unsigned long i = 0;
    int n = 1;
    String t;
    String right;
    String left;
    stack<String> result;
    while(i < exp.split(' ').size()) {
        t = exp.split(' ')[i];
        if(t != '+' && t != '-' && t != '*' && t != '/') {
            result.push(t);
        }
        else {
            right = result.pop();
            left = result.pop();
            result.push(evaluate(left, t, right, n, out));
            n++;
        }
        i++;
    }
}