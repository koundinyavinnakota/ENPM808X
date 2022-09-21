/**
 * @author - Koundinya Vinnakota
 * @version - 0.1
 * @copyright - 2022 - vkd@umd.edu
 * @return int - 0, if there is no error in the code.
 */
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