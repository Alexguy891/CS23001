#include <iostream>
#include <fstream>
#include "bigint.hpp"

bigint::bigint() { //Default constructor;
    for(int i = 0; i < CAPACITY; i++) { //Sets each index of arr[] to 0
        arr[i] = 0;
    }
}
bigint::bigint(int bignum) { //Constructor accepts integer
        int digit = 0;
        int i = 0;
        while(bignum != 0) { //Converts each digit of integer to int array
            digit = bignum % 10;
            arr[i] = digit;
            bignum = bignum / 10;
            i++;
        }
}
bigint::bigint(const char charArr[]) { //Constructor accepts char array
    int len = 0;
    for(int i = 0; charArr[i] != 0; i++) //Counts length of char array
        len++;
    for(int i = 0; i < len; i++) {
        char ch = charArr[len - 1 - i];
        int num = int(ch) - int('0');
        arr[i] = num;
    }
}
void bigint::debugPrint(std::ostream& out) const{ //Function to print arr from highend
    for(int i = 0; i <= CAPACITY; i++) { //Prints each arr[i] starting from highend
        out << arr[CAPACITY - i] << '|';
    }
}
bool bigint::operator==(bigint num) { //Function to override == operator
    for(int i = 0; i < CAPACITY; i++) { //Checks for equality of each index of both arrays
        if(num.arr[i] != arr[i])
            return false;
    }
    return true;
}
bigint bigint::operator+(const bigint & rhs) const { //Function to override + operator
    bigint sumArr(0);
    int carry = 0;
    int num = 0;
    for(int i = 0; i < CAPACITY; i++) { //Adds each index of arr to the sumArr and makes every int in index < 10
        num = arr[i] + rhs.arr[i] + carry;
        carry = num / 10;
        num%=10;
        sumArr.arr[i] = num;
    }
    return sumArr;
}
int bigint::operator[](int index) const { //Function to override [] operator
    return arr[index]; //returns num at index in bigint.arr[index]
}
std::ostream& operator<<(std::ostream& out, bigint num) { //Function to override << operator.
    int zeroCount = 0; //Int to count leading zeroes
    for(int i = 0; i < CAPACITY; i++) { //Loop to count all leading zeroes.
            if(num.arr[CAPACITY - 1 - i] == 0)
                zeroCount++;
            else
                break;
    }
    if(zeroCount == CAPACITY) //Checks for arr of only 0s
        zeroCount = CAPACITY - 1;
    for(int i = 0; i < CAPACITY - zeroCount; i++) { //Loops through array to print all numbers after leading zero.
        if(i == 80)
            out << std::endl;
        out << num.arr[CAPACITY - 1 - zeroCount - i];
    }
    return out;
}
std::ifstream& operator>>(std::ifstream & in, bigint & num) { //Function to overload >> operator
    int len = 0;
    bool valid = false;
    char charArr[CAPACITY]{};
    char c = ' ';
    while(in.get(c)) { //Goes through input by byte and creates char array for all numbers in file, ignores whitespace, delimited by ;
        if(c != '\n' && c != '\r' && c != ' ' && c != '\t' && c != ';') {
            charArr[len] = c;
            len++;
            valid = true;
        }
        if(c == ';')
            break;
    }
    if(valid == false) { //Checks for blank space, allows return to exit
        num.arr[0] = -1;
    }
    for(int i = 0; i < len; i++) { //Converts char array to bigint arr
        char ch = charArr[len - 1 - i];
        int mem = int(ch) - int('0');
        num.arr[i] = mem;
    }
    return in;
}

bigint bigint::timesDigit(int num) const { //Function to multiply bigint by single digit
    if(num > 9 || num < 0) //Checks for valid int
        std::cerr << "timesDigit() was passed an invalid integer" << std::endl;
    bigint sum(0);
    int carry = 0;
    for(int i = 0; i < CAPACITY; i++) { //Multiply calculation for array
        sum.arr[i] = (arr[i] * num + carry) % 10;
        carry = (arr[i] * num + carry)/ 10;
    }
    return sum;
}

bigint bigint::times10(int num) const { //Function shifts bigint by 10^n
    bigint sum(0);
    for(int i = 0; i < CAPACITY; i++) { //Used to shift digits over in bigint
        sum.arr[i + num] = arr[i];
    }
    return sum;
}

bigint bigint::operator*(const bigint &rhs) { //Function to overload * operator
    bigint product(0);
    bigint temp(0);
    for(int i = 0; i < CAPACITY; i++) { //Multiples two bigints together
        temp = timesDigit(rhs[i]);
        product = product + temp.times10(i);
    }
    return product;
}