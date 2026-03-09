//=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : two day package, added calculate cost
//
//=============================================================================


#include "package.hpp"
#include "twoDayPackage.hpp"

// Package constructor
twoDayPackage::twoDayPackage(
    std::string senderName, 
    std::string senderAddress, 
    std::string receiverName, 
    std::string receiverAddress, 
    float weight, 
    float flatFee, 
    float weightFee) : Package(senderName, senderAddress, receiverName, receiverAddress, weight, flatFee, weightFee) {
    
}

// calculateCost()
float twoDayPackage::calculateCost() {
    return Package::calculateCost(); // Base cost for a package
}