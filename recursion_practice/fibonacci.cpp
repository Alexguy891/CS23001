#include <iostream>

int tailFib(int n) {
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    else
        return (tailFib(n - 1) + tailFib(n - 2));
}

int fib(int n) {
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    else {
        n = tailFib(n - 1) + tailFib(n - 2);
        return n;
    }
}

int main() {
    int i = 0;

    std::cout << "Tail Recursive:" << '\n';
    while(i < 10) {
        std::cout << tailFib(i);
        std::cout << " ";
        i++;
    }
    std::cout << '\n';
    
    i = 0;
    std::cout << "Non-tail Recursive:" << '\n';
    while(i < 10) {
        std::cout << fib(i);
        std::cout << " ";
        i++;
    }
    std::cout << '\n';
}