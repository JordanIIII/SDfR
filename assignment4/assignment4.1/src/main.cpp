//=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : main file that defines each parameter of the different packages
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
    // Parameters: (senderName, senderAddress, receiverName, receiverAddress, weight, flatFee, weightFee)
    twoDayPackage twoDay("Richi", "Mandarijn Straat", "Vlad", "Lekker Gezellig Straat", 30.0, 5.0, 2.5);
    sameDayPackage sameDay("Jordan", "Calslaan", "Steyn", "Matenweg", 5.0, 2.0, 5.0);
    overnightPackage overnight("Tomoki", "123 Main St", "Sjoerd", "456 Elm St", 15.0, 5.0, 2.5);
    internationalPackage international("Ira", "Teletubbieland", "Malta", "742 Evergreen Terrace", 7.0, 30.0, 3);
    overnightInternationalPackage overnightInternational("Alice", "Wonderland", "Bob", "Builder Street", 10.0, 5.0, 2.5);
    
    // Parameters: (senderName, senderAddress, receiverName, receiverAddress, weight, flatFee, weightFee, numberOfReturns, orderNumber)
    retourPackage retour("Charlie", "123 Oak St", "David", "456 Pine St", 20.0, 5.0, 2.5, 2, 2026001); 


    // same info and cost print function for every package type
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

    std::cout << "\nOvernight International Package Info:" << std::endl;
    overnightInternational.printInfo();
    overnightInternational.printCost();

    std::cout << "\nRetour Package Info:" << std::endl;
    retour.printInfo();
    retour.printCost();

    return 0;
}