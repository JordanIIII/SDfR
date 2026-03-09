//=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : international package class header
//
//=============================================================================


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