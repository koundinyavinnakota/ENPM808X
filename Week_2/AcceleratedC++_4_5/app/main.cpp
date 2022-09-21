/**
 * @author - Koundinya Vinnakota
 * @version - 0.1
 * @copyright - 2022 - vkd@umd.edu
 * @return int - 0, if there is no error in the code.
 */
#include "ReadAndCountWords.cpp"
int main() {
    vector<string> word_list;
    // function call
    ReadWords(word_list);
    // function call
    CountNumberOfWords(word_list);
    return 0;
}

