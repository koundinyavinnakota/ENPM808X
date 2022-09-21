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


/**
 * @brief This function computes the final grade utilizing midterm, final and median of homework grades.
 * The final grade includes 20% - midterm, 40% - final grade and 40% - homework grade
 * 
 * @param midterm 
 * @param median 
 * @param final
 * @return This function returns the final grade after computation.
 */
double ComputeGrade(double midterm, double final, double median);
/**
 * @brief This function prints out calculated grades along with the names of the students
 * 
 * @param names 
 * @param finalGrades 
 */
void ClassGrades(vector<string> &names, vector<double> finalGrades );