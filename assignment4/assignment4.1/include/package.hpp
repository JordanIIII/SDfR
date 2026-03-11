//=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : base package class header
//
//=============================================================================


#pragma once

#include <iostream>
#include <string>

class Package {
    public:
    // Constructor
    Package(
        std::string senderName, 
        std::string senderAddress, 
        std::string receiverName, 
        std::string receiverAddress, 
        float weight, float flatFee, float weightFee);

    // printInfo(), this function stays the same for all packages EXCEPT the retour package (it adds order number and number of returns)
    virtual void printInfo();

    // calculateCost(), calculates the base cost that every other package is based on
    virtual float calculateCost();

    //printCost(), prints the cost of the package, this function stays the same for all packages
    void printCost();
 
    protected:
    std::string senderName;
    std::string senderAddress;
    std::string receiverName;
    std::string receiverAddress;
    float weight;
    float flatFee;
    float weightFee;
};