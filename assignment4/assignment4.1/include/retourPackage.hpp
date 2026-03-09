#pragma once

#include "package.hpp"

class retourPackage : public Package {
    public:
    // Constructor
    retourPackage(
        std::string senderName, 
        std::string senderAddress, 
        std::string receiverName, 
        std::string receiverAddress, 
        float weight, float flatFee, float weightFee, 
        int numberOfReturns, int orderNumber);

    // printInfo()
    virtual void printInfo() override;

    // calculateCost()
    virtual float calculateCost() override;

    float updateWeightFee(); // Update the weight fee based on the number of returns

    int numberOfReturns;
    int orderNumber;
};