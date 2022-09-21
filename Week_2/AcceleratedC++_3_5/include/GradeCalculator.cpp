#include "GradeCalculator.hpp"

/**
 * @brief This function computes the final grade utilizing midterm, final and median of homework grades.
 * The final grade includes 20% - midterm, 40% - final grade and 40% - homework grade
 * 
 * @param midterm 
 * @param median 
 * @param final
 * @return This function returns the final grade after computation.
 */
double ComputeGrade(double midterm, double final, double median) {
    // setting the precision of the stream output
    streamsize prec = cout.precision();
    // Formula used for calculation of the final grade
    // using the required precision
    cout << "Your final grade is " << setprecision(3)
        << 0.2 * midterm + 0.4 * final + 0.4 * median
        << setprecision(prec) << endl;
    return 0.2 * midterm + 0.4 * final + 0.4 * median;
}
/**
 * @brief This function prints out calculated grades along with the names of the students
 * 
 * @param names 
 * @param finalGrades 
 */
void ClassGrades(vector<string> &names, vector<double> finalGrades ) {
    cout << "***************** Final Grades of students *****************"
     "***" << endl;
    for (int i = 0; i < names.size() ; i++) {
       // statement to print names and grades onto the output stream
        cout << "      " << names[i] << "  -  " << finalGrades[i] << endl;
    }
}
