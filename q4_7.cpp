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
 * @brief Function to calculate the average values of the user entered numbers
 * 
 * @param numbers - reference of the numbers vector.
 * @return auto - it does not return any value, instead prints out the calculated average value.
 */
auto CalculateAverage(vector<double>&numbers) {
    double temp = 0;
    cout << "Enter numbers to find average " << endl;
    // function to input values from user.
    // When finished entering values "Ctrl + D"
    // This signifies end of terminal line input for linux
    while (cin >> temp) {
        numbers.push_back(temp);
    }
    // typedef is used to create a vector object size
    // type to store the size of vector
    typedef vector<double>::size_type vector_size;
    vector_size size = numbers.size();
    double total = 0;
    // popping out numbers from the vector and adding the values.
    while (!numbers.empty()) {
        total+=numbers.back();
        numbers.pop_back();
    }
    // Average calculation
    cout << "Average of the entered numbers : " << total/size << endl;
}
int main() {
    // vector definition
    vector<double> numbers;
    // Function call
    CalculateAverage(numbers);
    return 0;
    }