#include <ios>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::streamsize;
/**
 * @brief Function to read words from the input stream into a vector.
 * 
 * @param word_list - reference of the word_list from MAIN function
 * @return auto -  It doesn't return anything, but the word_list is modified because the paramter is referenced.
 */
auto ReadWords(vector<string>&word_list);
/**
 * @brief Function to count the number of words and number of repititions
 * 
 * @param list - a copy of the original list of words entered by user
 * @return auto - No return values instead the function prints the number of words and repititon of words.
 */
auto CountNumberOfWords(vector<string> list);