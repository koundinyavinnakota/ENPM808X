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


class StudentGradeCalculator
{
    public:
    
    int student_id[5]={1,2,3,4,5};
    string student_grades[5] = {"A","B","A","B+","A"};
    
    double GetGradePoint(string grade)
    {
        if(grade.compare("A")==0){
            return 4.0;

        }
        else if(grade.compare("A-")==0){
            return 3.7;

        }
        else if(grade.compare("B+")==0){
            return 3.3;

        }
        else if(grade.compare("B")==0){
            return 3.0;

        }
        else if(grade.compare("B-")==0){
            return 2.7;

        }
        else if(grade.compare("C+")==0){
            return 2.3;

        }
        else if(grade.compare("C")==0){
            return 2.0;
        }
        else if(grade.compare("C-")==0){
            return 1.7;
        }
        else{
            return 0;
        }
        

    }


    void ChangeGrade(){
        int id;
        string grade;
        cout<<" Please enter student's ID and grade to be modified in the subsequent line "<<endl;
        cin>>id>>grade;
        student_grades[id-1] = grade;

    }
    void GetClassGrades(){
        cout<<"** Class Grades are **"<<endl;
        cout<<" ID "<<"  "<<" Grade "<<endl;
        for(auto i=0;i<sizeof(student_id)/sizeof(student_id[0]);i++){
            cout<<"  "<<student_id[i]<<"   -   "<<student_grades[i]<<endl;
        }
    }
    void CalculateClassGPA(){
        double average = 0;
        for(auto i = 0;i<sizeof(student_id)/sizeof(student_id[0]);i++){
            average+=GetGradePoint(student_grades[i]);

        }
        average = average/5;
        cout<<" Average class GPA : "<< average<<endl;


    }

    

};

int main() {
    StudentGradeCalculator obj;
    obj.GetClassGrades();
    obj.ChangeGrade();
    obj.GetClassGrades();
    obj.CalculateClassGPA();
}