#include <iostream>
using namespace std;

int main() {
    int n = 0, k = 0, pair = 0;
    int arr[100] = { 0 };
    cout << "Enter the size of an array: ";
    cin >> n;
    cout << "The array is: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << endl;
    cout << "Please enter the value for k (target value): ";
    cin >> k;
    cout << "The pairs are: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] + arr[j] == k) {
                pair++;
                cout << "(" << arr[i] << "," << arr[j] << ")";
            }
        }
    }
    cout << endl;
    cout << "The number of pairs are: " << pair;
    return 0;
}
