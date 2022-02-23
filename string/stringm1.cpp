//File: string.cpp
//
//Date: Fall 2021
//Author: Alexander Ely
//
//Description: String class definition file

#include <iostream>
#include "stringm1.hpp"
#include <cassert>

String::String() {
    s[0] = 0;
}

String::String(char c) {
    s[0] = c;
    s[1] = 0;
}

String::String(const char str[]) {
    int i = 0;
    while (str[i] != 0) {
        if(i >= capacity()) 
            break;
        s[i] = str[i];
        ++i;
    }
    s[i] = 0;
}

int String::capacity() const {
    return STRING_SIZE - 1;
}

int String::length() const {
    int i = 0;
    while (s[i] != 0)
        ++i;
    return i;
}

char& String::operator[](int i) {
    assert(i >= 0);
    assert(i < length());
    return s[i];
}

char String::operator[](int i) const {
    assert(i >= 0);
    assert(i < length());
    return s[i];
}

String operator+(char lhs, const String& rhs) {
    return String(lhs) + rhs;
}

String operator+(const char lhs[], const String& rhs) {
    return String(lhs) + rhs;
}

String& String::operator+=(const String& rhs) {
    int offset = length();
    int rhsLen = rhs.length();
    int i = 0;
    while(i < rhsLen) {
        if(offset + i >= capacity()) 
            break;
        s[offset+i] = rhs.s[i];
        ++i;
    }
    s[offset+i] = 0;
    return *this;
}

String operator+(String lhs, const String& rhs) {
    return lhs += rhs;
}

bool String::operator==(const String& rhs) const {
    int i = 0;
    while(s[i] != 0 || length() != rhs.length()) {
        if(s[i] != rhs.s[i] || length() != rhs.length())
            return false;
        i++;
    }   
    return true;
}

bool operator==(char lhs, const String& rhs) {
    return String(lhs) == rhs;
}

bool operator==(const char lhs[], const String& rhs) {
    return String(lhs) == rhs;
}

bool String::operator<(const String& rhs) const {
    int i = 0;
    while((s[i] != 0) && (s[i] == rhs.s[i]))
        ++i;
        return s[i] < rhs.s[i];
}

bool operator<(char lhs, const String& rhs) {
    return String(lhs) == rhs;
}

bool operator<(const char lhs[], const String& rhs) {
    return String(lhs) == rhs;
}

bool operator!=(const String& lhs, const String& rhs) {
    return !(lhs == rhs);
}

bool operator>(const String& lhs, const String& rhs) {
    return rhs < lhs;
}

bool operator<=(const String& lhs, const String& rhs) {
    return (lhs < rhs) || (lhs == rhs);
}

bool operator>=(const String& lhs, const String& rhs) {
    return !(lhs < rhs);
}

std::ostream& operator<<(std::ostream& out, const String& rhs) {
    out << rhs.s;
    return out;
}

std::istream& operator>>(std::istream& in, String& rhs) {
    char buffer[STRING_SIZE];
    in >> buffer;
    rhs = String(buffer);
    return in;
}

//REQUIRES: 0<=start<length() && 0<=len<length()
String String::substr(int start, int end) const {
    String result;
    if(start < 0 || (start >= length()))
        return String();
    if(end <= 0 || end <= start)
        return String();
    int i = start;
    while(i >= start && i <= end) {
        if(i >= length()) 
            break;
        result.s[i-start] = s[i];
        ++i;
    }
    result.s[i-start] = 0;
    return result;
}

//REQUIRES: 0<=start<length()
//ENSURES: REVAL == i where s[i] == ch
//         REVAL == -1 if ch not in s
int String::findch(int start, char ch) const {
    int i = start;
    if((start < 0) || (start >= length())) return -1;
    while (s[i] != 0) {
        if(s[i] == ch) return i;
        ++i;
    }
    return -1;
}

int String::findstr(int start, const String& str) const {
    int i = start;
    if((start < 0) || (start >= length())) 
        return -1;
    while(s[i] != 0) {
        if(substr(i,(str.length()-1+i)) == str)
            return i;
        i++;
    }
    return -1;
}

