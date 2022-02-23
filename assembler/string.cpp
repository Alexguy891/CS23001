//File: string.cpp
//
//Date: Fall 2021
//Author: Alexander Ely
//
//Description: String class definition file

#include <iostream>
#include "string.hpp"
#include <cassert>
#include <vector>

String::String() {
    stringSize = 1;
    str = new char[stringSize];
    str[0] = 0;
}

String::String(char c) {
    if(c == 0) {
        stringSize = 1;
        str = new char[stringSize];
        str[0] = 0;
    }
    else {
        stringSize = 2;
        str = new char[stringSize];
        str[0] = c;
        str[1] = 0;
    }
}

String::String(const char funcStr[]) {
    int i = 0;
    int len = 0;

    while(funcStr[len] != 0)
        ++len;

    stringSize = len + 1;
    str = new char[stringSize];

    while (funcStr[i] != 0) {
        if(i >= capacity()) 
            break;
        str[i] = funcStr[i];
        ++i;
    }
    str[i] = 0;
}

String::String(const String &funcStr) {
    stringSize = funcStr.stringSize;
    str = new char[stringSize];

    for(int i = 0; i < stringSize; i++)
        str[i] = funcStr.str[i];
}

String::~String() {
    delete[] str;
}

void String::swap(String &rhs) {
    int tempsize = rhs.stringSize;
    rhs.stringSize = stringSize;
    stringSize = tempsize;

    char *tempS = rhs.str;
    rhs.str = str;
    str = tempS;
}

String& String::operator=(String rhs) {
    if(str == rhs.str)
        return *this;

    delete[] str;
    stringSize = rhs.stringSize;
    str = new char[stringSize];

    for(int i = 0; i < stringSize; i++)
        str[i] = rhs.str[i];
    return *this;
}
int String::capacity() const {
    return stringSize - 1;
}

int String::length() const {
    return capacity();
}

char& String::operator[](int i) {
    assert(i >= 0);
    assert(i < length());
    return str[i];
}

char String::operator[](int i) const {
    assert(i >= 0);
    assert(i < length());
    return str[i];
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

    String temp(*this);
    stringSize = offset + rhsLen + 1;
    str = new char[stringSize];

    for(int j = 0; temp.str[j] != 0; j++)
       str[j] = temp.str[j];

    while(i < rhsLen) {
        if(offset + i >= capacity()) 
            break;
        str[offset+i] = rhs.str[i];
        ++i;
    }
    str[offset+i] = 0;
    return *this;
}

String operator+(String lhs, const String& rhs) {
    return lhs += rhs;
}

bool String::operator==(const String& rhs) const {
    int i = 0;
    while(str[i] != 0 || rhs.str[i] != 0) {
        if(str[i] != rhs.str[i] || length() != rhs.length())
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
    while((str[i] != 0) && (str[i] == rhs.str[i]))
        ++i;
        return str[i] < rhs.str[i];
}

bool operator<(char lhs, const String& rhs) {
    return String(lhs) < rhs;
}

bool operator<(const char lhs[], const String& rhs) {
    return String(lhs) < rhs;
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
    out << rhs.str;
    return out;
}

std::istream& operator>>(std::istream& in, String& rhs) {
    int size = rhs.stringSize;
    char buffer[size];
    in >> buffer;
    rhs = String(buffer);
    return in;
}

//REQUIRES: 0<=start<length() && 0<=len<length()
String String::substr(int start, int end) const {
    String result;
    if(end >= length())
        end = length() - 1;
    result.stringSize = end - start + 2;
    result.str = new char[stringSize];

    if(start < 0 || (start >= length()))
        return String();
    if(end < 0 || end < start)
        return String();
    int i = start;
    while(i >= start && i <= end) {
        if(i >= length()) 
            break;
        result.str[i-start] = str[i];
        ++i;
    }
    result.str[i-start] = 0;
    return result;
}

//REQUIRES: 0<=start<length()
//ENSURES: REVAL == i where str[i] == ch
//         REVAL == -1 if ch not in str
int String::findch(int start, char ch) const {
    int i = start;
    if((start < 0) || (start >= length())) return -1;
    while (str[i] != 0) {
        if(str[i] == ch) return i;
        ++i;
    }
    return -1;
}

int String::findstr(int start, const String& funcStr) const {
    int i = start;
    if((start < 0) || (start >= length())) 
        return -1;
    while(str[i] != 0) {
        if(substr(i,(funcStr.length()-1+i)) == funcStr)
            return i;
        i++;
    }
    return -1;
}

std::vector<String> String::split(char c) const {
    std::vector<String> results;
    int start = 0;
    int end;
    end = findch(start,c);

    while(end != -1) {
        results.push_back(substr(start,end - 1));
        start = end + 1;
        end = findch(start,c);
    }
    if(start <= length())
        results.push_back(substr(start,length()-1));
    return results;
}
