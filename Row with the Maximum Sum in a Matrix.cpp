#include <iostream>
using namespace std;

int main() {
    int arr[5][5] = { 0 }, row = 0, col = 0;
    int num = 0;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;
    cout << "Enter the numbers for the array: ";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "Matrix: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++) {
        int sum = 0;
        for (int j = 0; j < col; j++) {
            sum += arr[i][j];
            if (sum > num) {
                num = sum;
            }
        }
        cout << "The row " << i << " sum is: " << sum << endl;
    }
    cout << "The highest sum from these rows is: " << num << endl;
}
