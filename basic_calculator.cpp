#include <iostream>
using namespace std;

int main() {
    int sum = 0, sub = 0, div = 0, mul = 0, mod = 0;
    int num1 = 0, num2 = 0;
    char ch;

    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> ch;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    switch (ch) {
    case '+':
        sum = num1 + num2;
        cout << "The sum is: " << sum;
        break;
    case '-':
        sub = num1 - num2;
        cout << "The difference is: " << sub;
        break;
    case '*':
        mul = num1 * num2;
        cout << "The product is: " << mul;
        break;
    case '/':
        if (num2 != 0)
            div = num1 / num2;
        else {
            cout << "Error: Division by zero is not allowed.";
            return 1;
        }
        cout << "The quotient is: " << div;
        break;
    case '%':
        if (num2 != 0)
            mod = num1 % num2;
        else {
            cout << "Error: Modulo by zero is not allowed.";
            return 1;
        }
        cout << "The remainder is: " << mod;
        break;
    default:
        cout << "Invalid operator!";
    }

    return 0;
}
