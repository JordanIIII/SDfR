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