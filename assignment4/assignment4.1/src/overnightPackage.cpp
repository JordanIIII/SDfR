//=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : overnight package, added calculate cost
//
//=============================================================================


#include "package.hpp"
#include "overnightPackage.hpp"

// Package constructor
overnightPackage::overnightPackage(
    std::string senderName, 
    std::string senderAddress, 
    std::string receiverName, 
    std::string receiverAddress, 
    float weight, 
    float flatFee, 
    float weightFee) : Package(senderName, senderAddress, receiverName, receiverAddress, weight, flatFee, weightFee) {
    
}


// calculateCost()
float overnightPackage::calculateCost() {
    float baseCost = Package::calculateCost();
    float additionalCost = weight * weight * 1.1; // Additional cost based on weight squared
    return baseCost + additionalCost;
}