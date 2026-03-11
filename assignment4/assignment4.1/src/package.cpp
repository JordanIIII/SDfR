//=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : Base package class, defines print info and print cost, also calulates a base cost that everything else is based on
//
//=============================================================================


#include "package.hpp"

// Package constructor
Package::Package(
    std::string senderName, 
    std::string senderAddress, 
    std::string receiverName, 
    std::string receiverAddress, 
    float weight, float flatFee, float weightFee) {
    this->senderName = senderName;
    this->senderAddress = senderAddress;
    this->receiverName = receiverName;
    this->receiverAddress = receiverAddress;
    this->weight = weight;
    this->flatFee = flatFee;
    this->weightFee = weightFee;
}

// printInfo(), this function stays the same for all packages EXCEPT the retour package (it adds order number and number of returns)
void Package::printInfo() {
    std::cout << "Sender: " << senderName << ", " << senderAddress << std::endl;
    std::cout << "Receiver: " << receiverName << ", " << receiverAddress << std::endl;
    std::cout << "Weight: " << weight << " kg" << std::endl;
}

// calculateCost(), calculates the base cost that every other package is based on
float Package::calculateCost() {
    return weight * weightFee + flatFee; // Base cost for a package
}

// printCost(), prints the cost of the package, this function stays the same for all packages
void Package::printCost() {
    std::cout << "Cost: " << calculateCost() << " euros" << std::endl;
}