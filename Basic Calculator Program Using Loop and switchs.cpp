#include <iostream>
using namespace std;

int main() {
    int num1 = 0, num2 = 0, result = 0;
    char ch, limit;

    // While loop
    while (limit != 'q') {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        cout << "Enter any operator (+, -, *, /): ";
        cin >> ch;

        switch (ch) {
        case '+':
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << num1 << " / " << num2 << " = " << result << endl;
            }
            else {
                cout << "Error! Division by zero." << endl;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
            break;
        }

        cout << "Press any key to continue or 'q' to quit: ";
        cin >> limit;
    }

    return 0;
}
