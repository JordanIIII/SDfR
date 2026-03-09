#include "package.hpp"

// Package constructor
overnightPackage::overnightPackage(std::string senderName, std::string senderAddress, std::string receiverName, std::string receiverAddress, float weight, float flatFee, float weightFee) : Package(senderName, senderAddress, receiverName, receiverAddress, weight) {
    this->flatFee = flatFee;
    this->weightFee = weightFee;
    
}

// printInfo()
void overnightPackage::printInfo() {
    Package::printInfo();
    std::cout << "Sender: " << getSenderName() << ", " << getSenderAddress() << std::endl;
    std::cout << "Receiver: " << getReceiverName() << ", " << getReceiverAddress() << std::endl;
    std::cout << "Weight: " << getWeight() << " kg" << std::endl;
    std::cout << "Flat Fee: €" << flatFee << std::endl;
    std::cout << "Weight Fee: €" << weightFee << " per kg squared";
}

// calculateCost()
float overnightPackage::calculateCost() {
    float baseCost = Package::calculateCost();
    float additionalCost = getWeight() * getWeight() * 1.1; // Additional cost based on weight squared
    return baseCost + additionalCost;
}

// printCost()
void overnightPackage::printCost() {
    std::cout << "Cost: €" << calculateCost() << std::endl;
}