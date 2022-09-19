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
 * @brief String concatenation of the entered strings by user.
 * 
 * @param words reference of the string vector for storing the words
 */
void StrConcatenation(vector<string>&words)
{
    string temp;
    cout << "Please enter words into the string vector " << endl;
    // function to input values from user.
    // When finished entering values "Ctrl + D"
    // This signifies end of terminal line input for linux
    while (cin >> temp) {
        words.push_back(temp);
    }
    // defining final word container.
    string final_word;
    final_word = words[0];
    // Using append to concatenate strings
    for (auto i = 1; i < words.size(); i++) {
       final_word.append(words[i]);

    }
    // Printing out the final word formed after concatenating
    // all the strings in the vector.
    cout << " Final word derived from concatenation of the string vector : " << final_word << endl;
}

int main() {
    // vector definition
    vector<string> words;
    // function call
    StrConcatenation(words);
    return 0;
}