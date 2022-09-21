#include <StudentGradeCalculator.hpp>
int main() {
    // object creation for the class StudentGradeCalculator
    StudentGradeCalculator obj;
    // object calling the class methods to modify and print grades of students
    obj.GetClassGrades();
    obj.ChangeGrade();
    obj.GetClassGrades();
    obj.CalculateClassGPA();
}