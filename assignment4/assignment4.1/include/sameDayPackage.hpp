//=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : same day package class header
//
//=============================================================================


#pragma once

#include <iostream>
#include <string>
#include "package.hpp"

// Cost equal to twoDayPackage, but with an additional fee of the weight squared times 1.5 euro per kg squared
class sameDayPackage : public Package {
    public:
    // Constructor
    sameDayPackage(
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