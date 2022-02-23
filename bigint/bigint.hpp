#ifndef CS2_BIGINT_HPP
#define CS2_BIGINT_HPP

const int CAPACITY = 200; //Capacity of bigint arr
class bigint { //Bigint class header
    public:
        int arr[CAPACITY] {}; //Creates arr attribute header
        bigint(); //Default constructor header
        bigint(int); //Constructor header to accept int input
        bigint(const char[]); //Constructor header to accept char array input
        void debugPrint(std::ostream &) const; //Function header for simple bigint print
        bool operator==(bigint); //Function to override == operator
        bigint operator+(const bigint&) const; //Function to override + operator
        int operator[](int index) const; //Function to override [] operator
        bigint timesDigit(int) const; //Function to multiply by single digit int
        bigint times10(int) const; //Function to multiply by 10;
        bigint operator*(const bigint&); //Function to overload * operator
};
std::ostream& operator<<(std::ostream &, bigint); //Free function header for override << operator
std::ifstream& operator>>(std::ifstream&, bigint&); //Free function header for override >> operator

#endif
