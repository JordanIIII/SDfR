#include "package.hpp"
#include "sameDayPackage.hpp"
#include "overnightPackage.hpp"
#include "twoDayPackage.hpp"
#include "internationalPackage.hpp"

int main() {
    // Take user input for package details
    std::string senderName, senderAddress, receiverName, receiverAddress;
    float weight;
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

    // Choose package type
    int packageType;
    std::cout << "Choose package type (1: Two Day, 2: Same Day, 3: Overnight, 4: International): ";
    std::cin >> packageType;

    // Create package based on user input
    Package* package;
    switch (packageType) {
        case 1:
            package = new twoDayPackage(senderName, senderAddress, receiverName, receiverAddress, weight, 5.0, 2.5);
            break;
        case 2:
            package = new sameDayPackage(senderName, senderAddress, receiverName, receiverAddress, weight, 2.0, 5.0);
            break;
        case 3:
            package = new overnightPackage(senderName, senderAddress, receiverName, receiverAddress, weight, 5.0, 2.5);
            break;
        case 4:
            package = new internationalPackage(senderName, senderAddress, receiverName, receiverAddress, weight, 30.0, 3);
            break;
        default:
            std::cout << "Invalid package type selected." << std::endl;
            return 1;
    }

    // Print package info and cost
    std::cout << "\nPackage Info:" << std::endl;
    package->printInfo();
    package->printCost();
}