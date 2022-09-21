/**
 * @author - Koundinya Vinnakota
 * @version - 0.1
 * @copyright - 2022 - vkd@umd.edu
 * @return int - 0, if there is no error in the code.
 */

#include "SearchString.hpp"

/**
 * @brief The function Search asks user for input and 
 *        takes in a Main String and substring 
 *        The substring position is found in the main string 
 */
void Search() {
    // Variable definition
    int i, j;
    string text;
    // User input Main String and sub-String
    // When finished entering the substring or string press "Ctrl + D"
    // This signifies end of terminal line input for linux
    cout << " Please enter the main string " << endl;
    cin >> text;
    string array_to_search1;
    cout << " Enter the string to search " << endl;
    cin >> array_to_search1;
    if (array_to_search1.empty() && text.empty()) {
        cout << " No Valid input entered " << endl;
        exit(0);
    }
    int position1 = -1;
    // Iterating through main string to find position of
    // substring in the main string.
    for (i=0; i < (text.length() - array_to_search1.length())+1; i++) {
        bool found = true;
        for (j=0; j < array_to_search1.length(); j++) {
            if (text[i+j] != array_to_search1[j])
                found = false;
            if (found) {
                position1 = i;
                break;
            }
        }
    }
    if ( position1 == -1 ) {
        cout << " Substring not found in the given string " << endl;
        exit(0);
    } else {
        cout << " Substring position found at - ";
    }
    // Printing out the known position of the substring in the main string.
    cout << position1 << endl;
}
