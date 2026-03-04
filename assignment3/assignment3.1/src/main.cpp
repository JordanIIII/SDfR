//=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : Define strings and concatenate them using the List class
//
//=============================================================================

#include <iostream>
#include "List.h"
#include "ListNode.h"

int main() {
    
    // Declare two lists of characters
    List<char> list1; // List to hold characters from "singlylinkedlist"
    List<char> list2; // abcdefg
    List<char> list3; // hijklmnop
    List<char> list4; // qrstuvw

    // Fill the lists with characters from the given strings
    std::string str1 = "singlylinkedlist";
    std::string str2 = "abcdefg";
    std::string str3 = "hijklmnop";
    std::string str4 = "qrstuvw";
    
    // Fill the lists using the fillList function
    fillList(list1, str1);
    fillList(list2, str2);
    fillList(list3, str3);
    fillList(list4, str4);

    // Print the contents of both lists
    list1.print();
    list2.print();

    std::cout << "Concatenated lists:\n";

    // Concatenate lists 2 though 4.
    list2.concatenate(list3);
    list2.concatenate(list4);

    list2.print();
    
    return 0;
}