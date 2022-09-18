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



auto CalculateAverage(vector<double>&numbers){
    double temp = 0;
    cout<< "Enter numbers to find average "<<endl;
    while(cin>>temp){
        numbers.push_back(temp);
    }
    typedef vector<double>::size_type vector_size;
    vector_size size =numbers.size();
    double total=0;
    while(!numbers.empty()){
        total+=numbers.back();
        numbers.pop_back();
    }
    cout<<"Average of the entered numbers : "<<total/size<<endl;
}
int main(){
    vector<double> numbers;
    CalculateAverage(numbers);
}