//=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : same day package, added calculate cost
//
//=============================================================================


#include "package.hpp"
#include "sameDayPackage.hpp"

// Package constructor
sameDayPackage::sameDayPackage(
    std::string senderName, 
    std::string senderAddress, 
    std::string receiverName, 
    std::string receiverAddress, 
    float weight, 
    float flatFee, 
    float weightFee) : Package(senderName, senderAddress, receiverName, receiverAddress, weight, flatFee, weightFee) {
}

// calculateCost()
float sameDayPackage::calculateCost() {
    float baseCost = Package::calculateCost();
    float additionalCost = weight * weight * 1.5; // Additional cost based on weight squared
    return baseCost + additionalCost;
}