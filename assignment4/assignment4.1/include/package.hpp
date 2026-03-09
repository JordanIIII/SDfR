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

    // printInfo()
    virtual void printInfo();

    // calculateCost()
    virtual float calculateCost();

    //
    void printCost();
 
    std::string senderName;
    std::string senderAddress;
    std::string receiverName;
    std::string receiverAddress;
    float weight;
    float flatFee;
    float weightFee;
};