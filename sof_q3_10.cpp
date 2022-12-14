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

/**
 * @brief This class is repsonsible to add , modify and view student and class GPAs
 * 
 */
class StudentGradeCalculator{
 public:
    /**
     * @brief Defining and initializing student id's and student grades
     * 
     */
    int student_id[5] = {1, 2, 3, 4, 5};
    string student_grades[5] = {"A", "B", "A", "B+", "A"};
    /**
     * @brief This function is kind off a helper function to get the corresponding GPA for a particular grade.
     * 
     * @param grade - Needs a Grade to return the GPA
     * @return double - returns a GPA value for the requested grade.
     */
    double GetGradePoint(string grade) {
        // Used string compare function to compare the Grades
        if (grade.compare("A") == 0) {
            return 4.0;

        } else if (grade.compare("A-") == 0) {
            return 3.7;

        } else if (grade.compare("B+") == 0) {
            return 3.3;

        } else if (grade.compare("B") == 0) {
            return 3.0;

        } else if (grade.compare("B-") == 0) {
            return 2.7;

        } else if (grade.compare("C+") == 0) {
            return 2.3;
        } else if (grade.compare("C") == 0) {
            return 2.0;
        } else if (grade.compare("C-") == 0) {
            return 1.7;
        } else {
            return 0;
        }
    }

    /**
     * @brief Function changes the existing grade of a student.
     * It modifies the public data member of the class using student id
     */
    void ChangeGrade() {
        int id;
        string grade;
        cout <<" Please enter student's ID and grade to be modified in the subsequent line " << endl;
        cin >> id >> grade;
        // Modifying the student grade using ID
        // Please note that the user input for id's starts from 1 not 0.
        student_grades[id-1] = grade;
    }
    /**
     * @brief Function to print out the entire class ids and grades
     * 
     */
    void GetClassGrades() {
        cout << "** Class Grades are **" << endl;
        cout << " ID " << "  " << " Grade " << endl;
        for ( auto i = 0; i < sizeof(student_id)/sizeof(student_id[0]); i++ ) {
            cout << "  " << student_id[i] << "   -   " << student_grades[i] << endl;
        }
    }
    /**
     * @brief Function to calculate the average class GPA
     * 
     */
    void CalculateClassGPA() {
        double average = 0;
        for (auto i = 0; i < sizeof(student_id)/sizeof(student_id[0]); i++) {
            // function call to the GetGradePoint function to
            // retrive the corresponding GPA for a given grade
            average+=GetGradePoint(student_grades[i]);
        }
        // Formula to calcualte the average
        average = average/5;
        cout << " Average class GPA : " << average << endl;
    }
};

int main() {
    // object creation for the class StudentGradeCalculator
    StudentGradeCalculator obj;
    // object calling the class methods to modify and print grades of students
    obj.GetClassGrades();
    obj.ChangeGrade();
    obj.GetClassGrades();
    obj.CalculateClassGPA();
}