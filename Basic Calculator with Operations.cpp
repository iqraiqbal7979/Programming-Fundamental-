#include <iostream>
#include <cmath>
using namespace std;

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int mod(int num1, int num2);
int divi(int num1, int num2);
int power(int num1, int num2);

int main() {
    int num = 0;
    int num1 = 0, num2 = 0;

    cout << "Please select the operation: \n";
    cout << "\t1 --> Addition \n";
    cout << "\t2 --> Subtraction \n";
    cout << "\t3 --> Division \n";
    cout << "\t4 --> Multiplication \n";
    cout << "\t5 --> Modulus \n";
    cout << "\t6 --> Power \n";
    cout << "Enter your choice: ";
    cin >> num;

    if (num >= 1 && num <= 6) {
        cout << "Enter two numbers:\n";
        cout << "First: ";
        cin >> num1;
        cout << "Second: ";
        cin >> num2;

        switch (num) {
        case 1:
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result: " << sub(num1, num2) << endl;
            break;
        case 3:
            cout << "Result: " << divi(num1, num2) << endl;
            break;
        case 4:
            cout << "Result: " << mul(num1, num2) << endl;
            break;
        case 5:
            cout << "Result: " << mod(num1, num2) << endl;
            break;
        case 6:
            cout << "Result: " << power(num1, num2) << endl;
            break;
        }
    }
    else {
        cout << "Invalid option selected.\n";
    }
}

int add(int num1, int num2) {
    return num1 + num2;
}

int sub(int num1, int num2) {
    return num1 - num2;
}

int mul(int num1, int num2) {
    return num1 * num2;
}

int divi(int num1, int num2) {
    if (num2 == 0) {
        cout << "Error: Division by zero is not allowed.\n";
        return 0;
    }
    return num1 / num2;
}

int mod(int num1, int num2) {
    return num1 % num2;
}

int power(int num1, int num2) {
    return pow(num1, num2);
}
