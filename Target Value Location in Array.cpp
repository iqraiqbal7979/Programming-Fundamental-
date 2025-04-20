#include <iostream>
using namespace std;

int loc_of_target(int arr[], int limit);

int main() {
    int arr[20] = { 0 };
    int limit = 0;

    cout << "Enter the limit of numbers in array: ";
    cin >> limit;

    cout << "The value is present at index: " << loc_of_target(arr, limit) << endl;

    return 0;
}

int loc_of_target(int arr[], int limit) {
    int target = 0;
    int t = -1; // To indicate target not found
    cout << "Enter the values for the array:\n";
    for (int i = 0; i < limit; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target value: ";
    cin >> target;

    for (int i = 0; i < limit; i++) {
        if (arr[i] == target) {
            t = i;
            break;  // We found the target, no need to continue searching
        }
    }
    return t;
}
