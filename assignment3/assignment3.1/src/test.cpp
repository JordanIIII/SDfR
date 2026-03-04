//=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : File modified to test edge cases of the concatenate function
//
//=============================================================================

#include <iostream>
#include "List.h"
#include "ListNode.h"

int main() {
    
    // Declare two lists of characters
    List<char> list1;
    List<char> list2; 
    List<char> list3;

    // Strings for testing
    std::string str1;
    std::string str2;
    std::string str3;
    
    // Get user input for the three strings for testing edge cases
    std::cout << "Enter string 1: ";
    std::getline(std::cin, str1);
    std::cout << "Enter string 2: ";
    std::getline(std::cin, str2);
    std::cout << "Enter string 3: ";
    std::getline(std::cin, str3);
    // Fill the lists using the fillList function
    fillList(list1, str1);
    fillList(list2, str2);
    fillList(list3, str3);

    // Print the contents of both lists
    list1.print();
    list2.print();
    list3.print();

    std::cout << "Concatenated lists:\n";

    // Concatenate lists 2 though 4.
    list1.concatenate(list2);
    list1.concatenate(list3);

    list1.print();

    return 0;
}