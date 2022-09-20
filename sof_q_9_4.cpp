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
using std::streamsize;

void Search(){
    int i,j;
    string text;
    cout << " Please enter the main string " << endl;
    cin >> text ;
    
    string array_to_search1;
    cout << " Enter the string to search " << endl;
    cin >> array_to_search1;
    // int array_to_search1_length = 2;
    int position1 = -1;
    for (i=0;i<(text.length()-array_to_search1.length())+1;i++) {
        bool found = true;
        for (j=0;j<array_to_search1.length();j++){
            if(text[i+j]!=array_to_search1[j])
                found = false;
            if (found) {
                position1 = i;
                break;
            }
        }
    }
    cout<<position1;

}
int main(){
    Search();
    
}