#include "package.hpp"
#include "internationalPackage.hpp"

// Package constructor
internationalPackage::internationalPackage(
    std::string senderName, 
    std::string senderAddress, 
    std::string receiverName, 
    std::string receiverAddress, 
    float weight, 
    float flatFee, 
    float weightFee) : Package(senderName, senderAddress, receiverName, receiverAddress, weight, flatFee, weightFee) {  
}

// calculateCost()
float internationalPackage::calculateCost() {
    float baseCost = Package::calculateCost();
    return baseCost * 1.21; // International cost is 21% more than the base cost
}