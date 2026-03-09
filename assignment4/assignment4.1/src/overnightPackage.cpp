#include "package.hpp"
#include "overnightPackage.hpp"

// Package constructor
overnightPackage::overnightPackage(std::string senderName, std::string senderAddress, std::string receiverName, std::string receiverAddress, float weight, float flatFee, float weightFee) : Package(senderName, senderAddress, receiverName, receiverAddress, weight, flatFee, weightFee) {
    this->flatFee = flatFee;
    this->weightFee = weightFee;
    
}


// calculateCost()
float overnightPackage::calculateCost() {
    float baseCost = Package::calculateCost();
    float additionalCost = weight * weight * 1.1; // Additional cost based on weight squared
    return baseCost + additionalCost;
}