#include "ReadAndCountWords.hpp"

auto ReadWords(vector<string>&word_list) {
    cout << " Start entering words" << endl;
    string temp;
    // user input
    getline(cin, temp);
    string word = "";
    for (auto x : temp) {
        if (x == ' ') {
            if (word.compare("") != 0)
                word_list.push_back(word);
            word = "";
        } else {
            word = word + x;
        }
    }
    if (word.compare("") != 0)
        word_list.push_back(word);

    // cout << word << endl;
    cout << "******" << "Words List" << "******" << endl;
    for (int i = 0 ; i < word_list.size() ; i++) {
        cout << word_list[i] << endl;
    }
}
/**
 * @brief Function to count the number of words and number of repititions
 * 
 * @param list - a copy of the original list of words entered by user
 * @return auto - No return values instead the function prints the number of words and repititon of words.
 */
auto CountNumberOfWords(vector<string> list) {
    int counter = list.size();
    string temp;
    vector<string> vector_unique;          // To store the unique words.
    vector<int> word_count;        // To store the count of words.
    int repetition_count{0};  // To keep track of repeated.words
    bool flag{false};
    // Iterating through loops to find the number of
    // times each word has been repeated.
    for (int i = 0; i < list.size(); i++) {
        // To append unique words.
        if (vector_unique.empty()) {
            vector_unique.push_back(list[i]);
        } else {
            // Rejecting repeated words.
            for (int j = 0; j < vector_unique.size(); j++) {
                if (list[i].compare(vector_unique[j]) == 0) {
                    flag = true;
                    break;
                } else {
                    flag = false;
                }
            }
            if (flag) {
                continue;
            } else {
                vector_unique.push_back(list[i]);
            }
        }

        // Counting repetitions.
        for (int j = i; j < counter; j++) {
            if (list[i].compare(list[j]) == 0) {
                repetition_count++;
            }
        }
        word_count.push_back(repetition_count);
        repetition_count = 0;
    }


 
    // total number of words entered by the user.
    cout << " Number of words in the list : " << counter << endl;
    cout << " Number of times each word occured " << endl;
    // Statement to print the list of words with their instances
    for ( auto iterator = 0 ; iterator < word_count.size() ; iterator++ ) {
        cout << vector_unique[iterator] << " - "
        << word_count[iterator] << endl;
    }
}