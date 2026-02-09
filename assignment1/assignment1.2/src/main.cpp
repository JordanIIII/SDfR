//=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : BMI Calculator
//
//=============================================================================

#include <iostream>

int main() {
    double weight, height, bmi;

    std :: cout << "Enter your weight in kg: ";
    std :: cin >> weight;
    std :: cout << "Enter your height in meters: ";
    std :: cin >> height;

    bmi = weight / (height * height);
    std :: cout << "Your BMI is: " << bmi << std :: endl;

    return 0;
}