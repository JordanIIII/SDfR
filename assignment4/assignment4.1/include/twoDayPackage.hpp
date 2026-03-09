#pragma once

#include <iostream>
#include <string>
#include "package.hpp"

// 2.50 euro per kg + 5 euro flat fee
class twoDayPackage : public Package {
    public:
    // Constructor
    twoDayPackage(std::string senderName, std::string senderAddress, std::string receiverName, std::string receiverAddress, float weight, float flatFee, float weightFee);

    // calculateCost()
    virtual float calculateCost() override;
    
    float flatFee;
    float weightFee;
};