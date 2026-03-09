#include "package.hpp"
#include "sameDayPackage.hpp"
#include "overnightPackage.hpp"
#include "twoDayPackage.hpp"
#include "internationalPackage.hpp"

int main() {
    // Parameters: (senderName, senderAddress, receiverName, receiverAddress, weight, flatFee, weightFee)
    twoDayPackage twoDay("Richi", "Mandarijn Straat", "Vlad", "Lekker Gezellig Straat", 30.0, 5.0, 2.5);
    sameDayPackage sameDay("Jordan", "Calslaan", "Steyn", "Matenweg", 5.0, 2.0, 5.0);
    overnightPackage overnight("Tomoki", "123 Main St", "Sjoerd", "456 Elm St", 15.0, 5.0, 2.5);
    internationalPackage international("Ira", "Teletubbieland", "Malta", "742 Evergreen Terrace", 7.0, 30.0, 3);

    std::cout << "\nTwo Day Package Info:" << std::endl;
    twoDay.printInfo();
    twoDay.printCost();

    std::cout << "\nSame Day Package Info:" << std::endl;
    sameDay.printInfo();
    sameDay.printCost();

    std::cout << "\nOvernight Package Info:" << std::endl;
    overnight.printInfo();
    overnight.printCost();

    std::cout << "\nInternational Package Info:" << std::endl;
    international.printInfo();
    international.printCost();

    return 0;
}