//=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : two day package class header
//
//=============================================================================


#pragma once

#include <iostream>
#include <string>
#include "package.hpp"

// 2.50 euro per kg + 5 euro flat fee
class twoDayPackage : public Package {
    public:
    // Constructor
    twoDayPackage(
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