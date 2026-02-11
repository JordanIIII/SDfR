//=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group : PPD 1
// License : LGPL open source license
//
// Brief : Simple division function that divides two integers and returns the result.
//
//=============================================================================

#include <iostream>
#include "../include/divide.hpp"

int main(void) {
    // Declaration of variables and values
    int a = 7;
    int b = 3;

    // Carry out division and store the output in c
    int c = divide(a, b);

    // Print output
    std :: cout << a << "/" << b << "=" << c << std::endl;

    return 0;
}