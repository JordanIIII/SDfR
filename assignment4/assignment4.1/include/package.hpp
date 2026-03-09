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
    void printInfo();

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