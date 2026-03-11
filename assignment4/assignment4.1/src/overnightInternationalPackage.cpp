//=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : package class based on the overnight package, updates the calculateCost() function to include a 21% fee
//
//=============================================================================


#include "overnightPackage.hpp"
#include "overnightInternationalPackage.hpp"

// Package constructor
overnightInternationalPackage::overnightInternationalPackage(
    std::string senderName, 
    std::string senderAddress, 
    std::string receiverName, 
    std::string receiverAddress, 
    float weight, 
    float flatFee, 
    float weightFee) : overnightPackage(senderName, senderAddress, receiverName, receiverAddress, weight, flatFee, weightFee) { 
}

// calculateCost(), it uses the same cost calculation as the overnight package, but adds an additional 21% fee for international shipping
float overnightInternationalPackage::calculateCost() {  
    float baseCost = overnightPackage::calculateCost();
    return baseCost * 1.21; // International cost is 21% more than the overnight cost
}