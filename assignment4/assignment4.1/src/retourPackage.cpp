//=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : retour package adds a numeberOfReturns and orderNumber parameter, overwrites the printInfo command to include these
//
//=============================================================================


#include "retourPackage.hpp"

// Package constructor
retourPackage::retourPackage(
    std::string senderName, 
    std::string senderAddress, 
    std::string receiverName, 
    std::string receiverAddress, 
    float weight, float flatFee, float weightFee, 
    int numberOfReturns, int orderNumber) : Package(senderName, senderAddress, receiverName, receiverAddress, weight, flatFee, weightFee) {
        this->numberOfReturns = numberOfReturns;
        this->orderNumber = orderNumber;
}

void retourPackage::printInfo() {
    std::cout << "Retour package with order number " << orderNumber<< std::endl;
    std::cout << "Number of items in return: " << numberOfReturns << std::endl;
    std::cout << "Return address: " << receiverName << ", " << receiverAddress << std::endl;
    std::cout << "Receiver address: " << senderName << ", " << senderAddress << std::endl;
    std::cout << "weight: " << weight << " kg" << std::endl;
}

float retourPackage::updateWeightFee() {
    // For each return, the weight fee increases by 0.5 euros per kg
    return weightFee + (numberOfReturns * 0.5);
}

float retourPackage::calculateCost() {
    float baseCost = Package::calculateCost();
    float updatedWeightFee = updateWeightFee();
    return weight * updatedWeightFee + flatFee; // Cost based on updated weight fee
}