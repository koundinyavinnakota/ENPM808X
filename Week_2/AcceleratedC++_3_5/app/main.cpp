/**
 * @author - Koundinya Vinnakota
 * @version - 0.1
 * @copyright - 2022 - vkd@umd.edu
 * @return int - 0, if there is no error in the code.
 */
#include "GradeCalculator.cpp"
int main() {
    vector<string> names;
    vector<double> final_grades;
    int counter_1 = 0;
    // Input from user
    while (counter_1 < 5) {
        cout<< "Please enter your name !!! and press ENTER"<< endl;
        string name;
        cin >> name;
        names.push_back(name);
        cout << " Hi " << name << " nice to meet you !!" << endl;
        cout << " Please enter you midterm and press ENTER and final"
        "grades and press ENTER : " << endl;
        double midterm, final;
        cin >> midterm >> final;
        // User needs to enter atleast five homework grades.
        cout << "Enter five of your home work grades, after"
        " each grade and press ENTER :" << endl;
        vector<double> homework;
        double temp;
        int counter_2 = 0;
        // adding the entered values into the vector
        // User input of homework grades
        while (counter_2 < 5) {
            cin >> temp;
            homework.push_back(temp);
            counter_2++;
        }
        // using typedef to initialize vector sizetype
        // object to store size of vector.
        typedef vector<double>::size_type vector_size;
        vector_size size = homework.size();
        if (size == 0) {
            cout << " You must enter atleast one homework grade to calcuate"
            "your final grade " << endl;
            return 1;
        }
        // using the sort alogorithm to channel the entered
        // homeworkgrade values and calculate the median
        sort(homework.begin(), homework.end());
        double median;
        // Calculating the median of the homework grades based
        // on number of values odd or even
        median = size % 2 == 0 ? (homework[size/2] + homework[(size/2)-1]) / 2
                                    : homework[size/2];
        final_grades.push_back(ComputeGrade(midterm, final,  median));
        counter_1++;
    }
    // function call
    ClassGrades(names,  final_grades);
    return 0;
}