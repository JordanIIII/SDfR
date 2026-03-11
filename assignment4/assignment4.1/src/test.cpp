//=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : Test file, changed to take user input for strings.
//
//=============================================================================


#include "package.hpp"
#include "sameDayPackage.hpp"
#include "overnightPackage.hpp"
#include "twoDayPackage.hpp"
#include "internationalPackage.hpp"
#include "overnightInternationalPackage.hpp"
#include "retourPackage.hpp"

int main() {
    // Take user input for package details
    std::string senderName, senderAddress, receiverName, receiverAddress;
    float weight;
    int numberOfReturns, orderNumber;
    std::cout << "Enter sender's name: ";
    std::getline(std::cin, senderName);
    std::cout << "Enter sender's address: ";
    std::getline(std::cin, senderAddress);
    std::cout << "Enter receiver's name: ";
    std::getline(std::cin, receiverName);
    std::cout << "Enter receiver's address: ";
    std::getline(std::cin, receiverAddress);
    std::cout << "Enter weight of the package (kg): ";
    std::cin >> weight;
    std::cout << "Number of returns (for the retour package option): ";
    std::cin >> numberOfReturns;
    std::cout << "Enter order number: ";
    std::cin >> orderNumber;

    // Create every package type using the provided input
    twoDayPackage twoDay(senderName, senderAddress, receiverName, receiverAddress, weight, 5.0, 2.5);
    sameDayPackage sameDay(senderName, senderAddress, receiverName, receiverAddress, weight, 2.0, 5.0);
    overnightPackage overnight(senderName, senderAddress, receiverName, receiverAddress, weight, 5.0, 2.5);
    internationalPackage international(senderName, senderAddress, receiverName, receiverAddress, weight, 30.0, 3);
    overnightInternationalPackage overnightInternational(senderName, senderAddress, receiverName, receiverAddress, weight, 5.0, 2.5);

    // Parameters: (senderName, senderAddress, receiverName, receiverAddress, weight, flatFee, weightFee, numberOfReturns, orderNumber)
    retourPackage retour(senderName, senderAddress, receiverName, receiverAddress, weight, 5.0, 2.5, numberOfReturns, orderNumber);

    // Print package info and cost for every package type
    std::cout << "\nTwo Day Package:" << std::endl;
    twoDay.printInfo();
    twoDay.printCost();

    std::cout << "\nSame Day Package:" << std::endl;
    sameDay.printInfo();
    sameDay.printCost();

    std::cout << "\nOvernight Package:" << std::endl;
    overnight.printInfo();
    overnight.printCost();

    std::cout << "\nInternational Package:" << std::endl;
    international.printInfo();
    international.printCost();

    std::cout << "\nOvernight International Package:" << std::endl;
    overnightInternational.printInfo();
    overnightInternational.printCost();

    std::cout << "\nRetour Package:" << std::endl;
    retour.printInfo();
    retour.printCost();
}