//=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : overnight package class header
//
//=============================================================================


#pragma once

#include <iostream>
#include <string>
#include "package.hpp"

// Cost equal to twoDayPackage, but with an additional fee of the weight squared times 1.1 euro per kg squared
class overnightPackage : public Package {
    public:
    // Constructor
    overnightPackage(
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