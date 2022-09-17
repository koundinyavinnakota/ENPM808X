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


void computeGrade(double midterm,double final,double median){
    streamsize prec = cout.precision();
    cout << "Your final grade is " << setprecision(3)
        << 0.2 * midterm + 0.4 * final + 0.4 * median
        << setprecision(prec) << endl;

}
int main(){

    cout<< "Please enter your name !!!"<< endl;
    string name;
    cin>>name;
    cout<<" Hi "<< name<<" nice to meet you !!"<<endl;
    cout<<" Please enter you midterm and final grades: "<<endl;
    double midterm, final;
    cin>>midterm>>final;
    cout<<"Enter all your home work grades :"<<endl;
    vector<double> homework;
    double temp;
    while(cin>>temp){
        homework.push_back(temp);
    }
    typedef vector<double>::size_type vector_size;
    vector_size size = homework.size();
    if(size == 0){
        cout<<" You must enter grades to calcuate your final grade "<<endl;
        return 1;
    }

    sort(homework.begin(),homework.end());
    double median;
    median = size % 2 == 0 ? (homework[size/2] + homework[(size/2)-1]) / 2
                                : homework[size/2];
    computeGrade(midterm, final,  median);
    return 0;
}