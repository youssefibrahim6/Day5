#include <iostream>
using namespace std;

int main() {
    int Number_course;
    cout << "Enter number of courses: ";
    cin >> Number_course;

    for (int i = 1; i <= Number_course; i++) {
        int grade;
        cout << "Enter grade for subject " << i << ": ";
        cin >> grade;
        if (grade < 0 || grade > 100) {
            cout << "Invalid grade" << endl;
        }
        else if (grade >= 90 && grade <= 100) {
            cout << "Excellent" << endl;
        }
        else if (grade >= 80 && grade < 90) {
            cout << "Very Good" << endl;
        }
        else if (grade >= 70 && grade < 80) {
            cout << "Good" << endl;
        }
        else if (grade >= 60 && grade < 70) {
            cout << "Pass" << endl;
        }
        else {
            cout << "Fail" << endl;
        }
    }

    return 0;
}
