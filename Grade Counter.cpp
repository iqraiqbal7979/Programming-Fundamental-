#include <iostream>
using namespace std;

int main() {
    char grade;
    int a = 0, b = 0, c = 0, d = 0, f = 0;
    int count = 0;

    cout << "\n--- Grade Counter (Using While Loop) ---\n";
    while (count < 10) {
        cout << "Enter grade " << (count + 1) << ": ";
        cin >> grade;

        switch (grade) {
        case 'A': a++; break;
        case 'B': b++; break;
        case 'C': c++; break;
        case 'D': d++; break;
        case 'F': f++; break;
        default: cout << "Invalid grade. Try again.\n"; continue;
        }
        count++;
    }

    cout << "\n--- Grade Summary ---\n";
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
    cout << "C: " << c << endl;
    cout << "D: " << d << endl;
    cout << "F: " << f << endl;

    return 0;
}
