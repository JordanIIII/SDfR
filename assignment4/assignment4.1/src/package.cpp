#include "package.hpp"

// Package constructor
Package::Package(std::string senderName, std::string senderAddress, std::string receiverName, std::string receiverAddress, float weight) {
    this->senderName = senderName;
    this->senderAddress = senderAddress;
    this->receiverName = receiverName;
    this->receiverAddress = receiverAddress;
    this->weight = weight;
}

// printInfo()
void Package::printInfo() {
    std::cout << "Sender: " << senderName << ", " << senderAddress << std::endl;
    std::cout << "Receiver: " << receiverName << ", " << receiverAddress << std::endl;
    std::cout << "Weight: " << weight << " kg" << std::endl;
}

// calculateCost()
float Package::calculateCost() {
    return weight * 2.50 + 5.00; // Base cost for a package
}

// printCost()
void Package::printCost() {
    std::cout << "Cost: €" << calculateCost() << std::endl;
}