#include "CalculateAverage.hpp"


void CalculateAverage(vector<double>numbers) {
    double temp = 0;
    cout << "Enter numbers to find average " << endl;
    // function to input values from user.
    // When finished entering values "Ctrl + D"
    // This signifies end of terminal line input for linux
    while (cin >> temp) {
        numbers.push_back(temp);
    }
    if ( numbers.empty() ) {
        cout << " No Valid input entered " << endl;
        exit(0);
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