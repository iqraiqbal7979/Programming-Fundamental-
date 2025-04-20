#include <iostream>
using namespace std;

void revers(float arr[], int limit);

int main() {
    float arr[20] = { 0 };
    int limit = 0;

    cout << "Enter the limit of numbers in array: ";
    cin >> limit;

    revers(arr, limit);

    return 0;
}

void revers(float arr[], int limit) {
    cout << "Enter the values for the array:\n";
    for (int i = 0; i < limit; i++) {
        cin >> arr[i];
    }

    cout << "Reversed Array: ";
    for (int i = limit - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
