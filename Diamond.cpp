#include <iostream>
using namespace std;

int main() {
    int i = 1, j, k, size;

    cout << "Enter the size (odd number only): ";
    cin >> size;

    // Input validation for odd number
    if (size % 2 == 0) {
        cout << "Please enter an odd number!" << endl;
        return 1;
    }

    // Upper half of diamond
    while (i <= size) {
        k = size;
        while (k >= i) {
            cout << " ";
            k--;
        }

        j = 2;
        while (j <= 2 * i) {
            cout << "*";
            j++;
        }

        cout << endl;
        i++;
    }

    // Lower half of diamond
    i = 1;
    while (i <= size) {
        k = 1;
        while (k <= i + 1) {
            cout << " ";
            k++;
        }

        j = size * 2;
        while (j >= 2 * i + 2) {
            cout << "*";
            j--;
        }

        cout << endl;
        i++;
    }

    return 0;
}
