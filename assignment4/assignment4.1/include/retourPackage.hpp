//=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : retour package class header
//
//=============================================================================


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