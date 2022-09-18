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

void readWords(vector<string>&wordList){
    cout<<" Start entering words"<<endl;
    string temp;
    while(cin>>temp){
        wordList.push_back(temp);

    }
    cout<<"******"<<"Words List"<<"******"<<endl;
    for(int i=0;i<wordList.size();i++){
        
        cout<<wordList[i]<<endl;
    }
}
void countNumberOfWords(vector<string> list)
{
    int counter = list.size();
    
    string temp;
    vector<int> matchcounter;
    for(auto it = 0;it<list.size();it++)
    {
        int temp = 0;
        for(auto iterator =0;iterator<list.size();iterator++)
        {
            if(list[it].compare(list[iterator])== 0){
                temp++;
            }
           
                
        }
      
        matchcounter.push_back(temp);
        
    }
        
    
    cout<<" Number of words in the list : "<<counter<<endl;
    cout<<" Number of times each word occured "<<endl;
    for(auto iterator = 0;iterator<list.size();iterator++){
        cout<<list[iterator]<<" - "<<matchcounter[iterator]<<endl;
    }
}


int main(){
    vector<string> wordList;
    readWords(wordList);
    countNumberOfWords(wordList);
    return 0;
}

