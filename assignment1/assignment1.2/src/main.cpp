//=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : BMI Calculator
//
//=============================================================================

#include <iostream>
#include "..\include\bmiFunctions.hpp"

int main() {
    double weight, height, bmi;

    // Print the BMI categories for user evaluation
    printInfo();

    // Get user input for weight and height
    std :: cout << "Enter your weight in kg: ";
    std :: cin >> weight;

    std :: cout << "Enter your height in meters: ";
    std :: cin >> height;

    // Call functions to calculate and evaluate BMI
    bmi = calculateBMI(weight, height);
    evaluateAndPrintBMI(bmi);

    return 0;
}