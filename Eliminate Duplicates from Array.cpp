#include <iostream>
using namespace std;

void eliminate_dupli(int arr[], int& limit);

int main() {
    int arr[20] = { 0 };
    int limit = 0;

    cout << "Enter the limit for the array: ";
    cin >> limit;

    eliminate_dupli(arr, limit);

    return 0;
}

void eliminate_dupli(int arr[], int& limit) {
    cout << "Enter the values for the array:\n";
    for (int i = 0; i < limit; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < limit; i++) {
        for (int j = i + 1; j < limit; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < limit - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                limit--;
                j--;  // Check the current index again
            }
        }
    }

    cout << "Array after eliminating duplicates:\n";
    for (int i = 0; i < limit; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
