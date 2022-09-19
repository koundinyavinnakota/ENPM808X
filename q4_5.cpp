#include <ios>
#include<iostream>
#include<vector>
#include<string.h>
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
auto ReadWords(vector<string>&word_list){
    cout<<" Start entering words"<<endl;
    string temp;
    //function to input values from user.
    // When finished entering values press "Ctrl + D"
    //This signifies end of terminal line input for linux
    while(cin>>temp){
        word_list.push_back(temp);

    }
    cout<<"******"<<"Words List"<<"******"<<endl;
    for(int i=0;i<word_list.size();i++){
        
        cout<<word_list[i]<<endl;
    }
}
/**
 * @brief Function to count the number of words and number of repititions
 * 
 * @param list - a copy of the original list of words entered by user
 * @return auto - No return values instead the function prints the number of words and repititon of words.
 */
auto CountNumberOfWords(vector<string> list)
{
    int counter = list.size();
    
    string temp;
    vector<int> match_counter;
    //Iterating through loops to find the number of times each word has been repeated.
    for(auto it = 0;it<list.size();it++)
    {
        int temp = 0;
        for(auto iterator =0;iterator<list.size();iterator++)
        {
            if(list[it].compare(list[iterator])== 0){
                temp++;
            }
           
                
        }
        // matching counter, holds the repitition of words. 
        match_counter.push_back(temp);
        
    }
        
    // total number of words entered by the user.
    cout<<" Number of words in the list : "<<counter<<endl;
    cout<<" Number of times each word occured "<<endl;
    //Statement to print the list of words with their instances
    for(auto iterator = 0;iterator<list.size();iterator++){
        cout<<list[iterator]<<" - "<<match_counter[iterator]<<endl;
    }
}


int main(){
    vector<string> word_list;
    //function call 
    ReadWords(word_list);
    //function call
    CountNumberOfWords(word_list);
    return 0;
}

