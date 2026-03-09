#include "package.hpp"

// Package constructor
twoDayPackage::twoDayPackage(std::string senderName, std::string senderAddress, std::string receiverName, std::string receiverAddress, float weight, float flatFee, float weightFee) : Package(senderName, senderAddress, receiverName, receiverAddress, weight) {
    this->flatFee = flatFee;
    this->weightFee = weightFee;
    
}

// printInfo()
void twoDayPackage::printInfo() {
    Package::printInfo();
    std::cout << "Sender: " << getSenderName() << ", " << getSenderAddress() << std::endl;
    std::cout << "Receiver: " << getReceiverName() << ", " << getReceiverAddress() << std::endl;
    std::cout << "Weight: " << getWeight() << " kg" << std::endl;
    std::cout << "Flat Fee: €" << flatFee << std::endl;
    std::cout << "Weight Fee: €" << weightFee << " per kg";
}

// calculateCost()
float twoDayPackage::calculateCost() {
    return flatFee + weightFee * getWeight(); // Cost based on weight
}