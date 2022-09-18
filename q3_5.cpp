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


double ComputeGrade(double midterm,double final,double median){
    streamsize prec = cout.precision();
    cout << "Your final grade is " << setprecision(3)
        << 0.2 * midterm + 0.4 * final + 0.4 * median
        << setprecision(prec) << endl;
    return 0.2 * midterm + 0.4 * final + 0.4 * median;
}

void ClassGrades(vector<string> &names,vector<double> finalGrades ){
     cout<<"***************** Final Grades of students ********************"<<endl;
    for(int i = 0; i<names.size();i++){
       
        cout<<"      "<<names[i]<<"  -  "<<finalGrades[i]<<endl;
    }
}

int main(){
    vector<string> names;
    vector<double> final_grades;
    int counter_1 = 0;
    while(counter_1<5){
        cout<< "Please enter your name !!!"<< endl;
        string name;
        cin>>name;
        names.push_back(name);
        cout<<" Hi "<< name<<" nice to meet you !!"<<endl;
        cout<<" Please enter you midterm and final grades: "<<endl;
        double midterm, final;
        cin>>midterm>>final;
        cout<<"Enter five of your home work grades :"<<endl;
        vector<double> homework;
        double temp;
        int counter_2 = 0;
        while(counter_2<5){
            cin>>temp;
            homework.push_back(temp);
            counter_2++;
        }
        typedef vector<double>::size_type vector_size;
        vector_size size = homework.size();
        if(size == 0){
            cout<<" You must enter atleast one homework grade to calcuate your final grade "<<endl;
            return 1;
        }

        sort(homework.begin(),homework.end());
        double median;
        median = size % 2 == 0 ? (homework[size/2] + homework[(size/2)-1]) / 2
                                    : homework[size/2];
        final_grades.push_back(ComputeGrade(midterm, final,  median));
        counter_1++;
    }
    ClassGrades(names,  final_grades);
    return 0;
}