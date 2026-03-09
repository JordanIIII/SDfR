//=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : overnight international package class header
//
//=============================================================================


#pragma once

#include "package.hpp"
#include "overnightPackage.hpp"

// Same as overnightPackage, but with an additional 21% fee for international shipping
class overnightInternationalPackage : public overnightPackage {
    public:
    // Constructor
    overnightInternationalPackage(
        std::string senderName, 
        std::string senderAddress, 
        std::string receiverName, 
        std::string receiverAddress, 
        float weight, float flatFee, float weightFee);

    // calculateCost()
    virtual float calculateCost() override;
};