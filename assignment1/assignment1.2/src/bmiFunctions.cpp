//=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : BMI calculator functions definition
//
//=============================================================================

#include <iostream>
#include "..\include\bmiFunctions.hpp"

// Function that prints the BMI categories for user evaluation
void printInfo() {
    std::cout << "BMI VALUES:" << std::endl;
    std::cout << "Underweight: less than 18.5" << std::endl;
    std::cout << "Normal: 18.5 - 24.9" << std::endl;
    std::cout << "Overweight: 25 - 29.9" << std::endl;
    std::cout << "Obese: 30 or greater" << std::endl;
}

// Function that calculates BMI
double calculateBMI(double weight, double height) {
    return weight / (height * height);
}

// Function that evaluates the calculated BMI value
void evaluateAndPrintBMI(double bmi) {
    std::cout << "Your BMI is: " << bmi << std::endl;

    if (bmi < 18.5) {
        std::cout << "You are underweight." << std::endl;
    } else if (bmi >= 18.5 && bmi < 25) {
        std::cout << "You have a normal weight." << std::endl;
    } else if (bmi >= 25 && bmi < 30) {
        std::cout << "You are overweight." << std::endl;
    } else {
        std::cout << "You are obese." << std::endl;
    };
}
