#include <iostream>
using namespace std;
int module(char grade, int credit_score) {
    int numerical_grade = 0;
    switch (grade) {
    case 'A':
        numerical_grade = 4;
        break;
    case 'B':
        numerical_grade = 3;
        break;
    case 'C':
        numerical_grade = 2;
        break;
    case 'D':
        numerical_grade = 1;
        break;
    case 'F':
        numerical_grade = 0;
        break;
    default:
        cout << "INVALID GRADE";
        break;
    }
    return 0;
}
int main() {
    int no_of_modules;
    int credit_score;
    double sum_of_gradepoints1 = 0;
    double sum_of_creditscore1 = 0;
    double sum_of_gradepoints2 = 0;
    double sum_of_creditscore2 = 0;
    double total_gradepoints = 0;
    double total_creditscore = 0;
    char grade;
    cout << "Enter the number of modules you have taken in the first semester: ";
    cin >> no_of_modules;
    for (int i = 0; i < no_of_modules; i++) {
        cout << "Enter your grade: ";
        cin >> grade;
        cout << "Enter your credit score: ";
        cin >> credit_score;
        module(grade, credit_score);
        int grade_point = grade * credit_score;
        cout << "Your grade points for this module is " << grade_point << endl;
        sum_of_gradepoints1 += grade_point;
        sum_of_creditscore1 += credit_score;
    }
    double GPA1 = sum_of_gradepoints1 / sum_of_creditscore1;
    cout << "Your GPA of the first semester is " << GPA1 << endl;
    cout << "Enter the number of modules you have taken in the second semester: ";
    cin >> no_of_modules;
    for (int i = 0; i < no_of_modules; i++) {
        cout << "Enter your grade: ";
        cin >> grade;
        cout << "Enter your credit score: ";
        cin >> credit_score;
        module(grade, credit_score);
        int grade_point = grade * credit_score;
        cout << "Your grade points for this module is " << grade_point << endl;
        sum_of_gradepoints2 += grade_point;
        sum_of_creditscore2 += credit_score;
    }
    double GPA2 = sum_of_gradepoints2 / sum_of_creditscore2;
    cout << "Your GPA of the second semester is " << GPA2 << endl;
    total_gradepoints = sum_of_gradepoints1 + sum_of_gradepoints2;
    total_creditscore = sum_of_creditscore1 + sum_of_creditscore2;
    double CGPA = total_gradepoints / total_creditscore;
    cout << "Your CGPA is " << CGPA;
    return 0;
}