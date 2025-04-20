#include<iostream>
using namespace std;

int main() {
    int num1 = 0, num2 = 0, sum = 0, temp1 = 0, square = 0;
    char ch = 'A';

    cout << "num1 must be less than num2" << endl;
    cout << "Enter the value for first num: ";
    cin >> num1;
    temp1 = num1;
    cout << "Enter the value for second num: ";
    cin >> num2;

    cout << "--> To find odd numbers" << endl;
    cout << "The odd numbers between " << num1 << " and " << num2 << " are: ";
    for (int i = num1; i <= num2; i++) {
        if (i % 2 != 0)
            cout << i << " ";
    }

    cout << endl << "--> To find sum of all even numbers" << endl;
    sum = 0;
    for (int i = num1; i <= num2; i++) {
        if (i % 2 == 0)
            sum += i;
    }
    cout << "The sum of all even numbers between " << num1 << " and " << num2 << " is: " << sum << endl;

    cout << endl << "--> To find the square of first 10 numbers starting from num1" << endl;
    for (int i = num1; i <= num1 + 9; i++) {
        square = i * i;
        cout << "The square of " << i << " is: " << square << endl;
    }

    cout << endl << "--> To find the square of all odd numbers between num1 and num2" << endl;
    sum = 0;
    for (int i = num1; i <= num2; i++) {
        if (i % 2 != 0) {
            square = i * i;
            cout << "The square of " << i << " is: " << square << endl;
            sum += square;
        }
    }
    cout << "Sum of the squares of odd numbers: " << sum << endl;

    cout << endl << "--> Print all uppercase letters" << endl;
    for (int i = 0; i < 26; i++) {
        cout << ch << " ";
        ch++;
    }

    return 0;
}
