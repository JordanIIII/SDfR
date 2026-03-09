#include "package.hpp"
#include "sameDayPackage.hpp"

// Package constructor
sameDayPackage::sameDayPackage(std::string senderName, std::string senderAddress, std::string receiverName, std::string receiverAddress, float weight, float flatFee, float weightFee) : Package(senderName, senderAddress, receiverName, receiverAddress, weight, flatFee, weightFee) {
    this->flatFee = flatFee;
    this->weightFee = weightFee;
}

// calculateCost()
float sameDayPackage::calculateCost() {
    float baseCost = Package::calculateCost();
    float additionalCost = weight * weight * 1.5; // Additional cost based on weight squared
    return baseCost + additionalCost;
}