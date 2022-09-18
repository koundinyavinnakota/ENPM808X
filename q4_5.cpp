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

auto ReadWords(vector<string>&word_list){
    cout<<" Start entering words"<<endl;
    string temp;
    while(cin>>temp){
        word_list.push_back(temp);

    }
    cout<<"******"<<"Words List"<<"******"<<endl;
    for(int i=0;i<word_list.size();i++){
        
        cout<<word_list[i]<<endl;
    }
}
auto CountNumberOfWords(vector<string> list)
{
    int counter = list.size();
    
    string temp;
    vector<int> match_counter;
    for(auto it = 0;it<list.size();it++)
    {
        int temp = 0;
        for(auto iterator =0;iterator<list.size();iterator++)
        {
            if(list[it].compare(list[iterator])== 0){
                temp++;
            }
           
                
        }
      
        match_counter.push_back(temp);
        
    }
        
    
    cout<<" Number of words in the list : "<<counter<<endl;
    cout<<" Number of times each word occured "<<endl;
    for(auto iterator = 0;iterator<list.size();iterator++){
        cout<<list[iterator]<<" - "<<match_counter[iterator]<<endl;
    }
}


int main(){
    vector<string> word_list;
    ReadWords(word_list);
    CountNumberOfWords(word_list);
    return 0;
}

