#pragma once

#include <iostream>
#include <string>
#include "package.hpp"

// Cost equal to twoDayPackage + 21%
class internationalPackage : public Package {
    public:
    // Constructor
    internationalPackage(
        std::string senderName, 
        std::string senderAddress, 
        std::string receiverName, 
        std::string receiverAddress, 
        float weight, 
        float flatFee, 
        float weightFee);

     // calculateCost()
    virtual float calculateCost() override;
};