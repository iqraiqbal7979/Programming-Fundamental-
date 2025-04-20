#include <iostream>
using namespace std;

int main() {
    int i = 1, num, num1, count = 0, value_1 = 0, value_2 = 0;

    cout << "Enter any number: ";
    cin >> num;

    while (i <= num) {
        int j = 2;
        while (j < i) {
            if (i % j == 0) {
                count++;
                break;
            }
            j++;
        }

        if (count == 0 && i != 1) {
            // Checking conditions for prime-related logic (you can adjust these conditions as needed)
            if (num == 5 || num == 7) {
                value_1 = i - 2;
                value_2 = i - value_1;
                if (value_2 + value_1 == num) {
                    cout << "This number is the sum of these numbers: " << value_1 << " and " << value_2 << endl;
                }
            }

            num1 = num - i;
            if (num1 + i == num) {
                if (num1 % 2 != 0 && num1 % 3 != 0 && num1 % 5 != 0 && num1 % 7 != 0 && num1 % 9 != 0) {
                    cout << "The sum of numbers is: " << i << " and " << num1 << endl;
                }
            }
        }
        count = 0;
        i++;
    }

    return 0;
}
