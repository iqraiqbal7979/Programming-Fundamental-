#include <iostream>
using namespace std;

int main() {
    int student_ID = 0;
    string name, l_name, major_field;
    float a = 2.0, grade_Avg = 0;

    cout << "Please enter your ID: ";
    cin >> student_ID;

    cout << "Please enter your first name: ";
    cin >> name;

    cout << "Please enter your last name: ";
    cin >> l_name;

    cout << "Please enter your major field of study: ";
    cin >> major_field;

    cout << "Please enter your grade point average: ";
    cin >> grade_Avg;

    if (grade_Avg < a) {
        cout << "Student ID        : " << student_ID << endl;
        cout << "Student name      : " << name << endl;
        cout << "Last name         : " << l_name << endl;
        cout << "Major field       : " << major_field << endl;
        cout << "Grade point average: " << grade_Avg << endl;
    }
    else {
        cout << "GPA is too high to display!";
    }

    return 0;
}
