#include <cstring>
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
using std::sort;
using std::setprecision;
using std::streamsize;


void StrConcatenation(vector<string>&words){
    string temp;
    cout<<"Please enter words into the string vector "<<endl;
    while(cin>>temp){
        words.push_back(temp);
    }
    string final_word;
    final_word = words[0];
    for(auto i=1;i<words.size();i++){
       final_word.append(words[i]);

    }
    cout<<" Final word derived from concatenation of the string vector : "<<final_word<<endl;
}

int main(){
    vector<string> words;
    StrConcatenation(words);
    return 0;
}