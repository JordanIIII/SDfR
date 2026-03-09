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

// calculateCost()
float overnightInternationalPackage::calculateCost() {  
    float baseCost = overnightPackage::calculateCost();
    return baseCost * 1.21; // International cost is 21% more than the overnight cost
}