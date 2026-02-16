#include <iostream>

void function(int& x) {
    std::cout << x << std::endl;
    ++x;
    std::cout << x << std::endl;
}

int factorial(int x) {
    int total = 0;
    if (x < 2) return 1;
    total = x*factorial(x-1);
    return total;
}

int factorial2(int x) {
    int total = 0;
    if (x < 2) return 1;
    total = x*factorial2(x-1);
    return total;
}

int main() {
    
    std::cout << factorial(20) << std::endl;

    return 0;
}