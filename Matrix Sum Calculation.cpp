#include <iostream>
using namespace std;

int main() {
    int row, col, sum = 0, num = 0, num2 = 0;
    int arr[100][100] = { 0 };
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;
    if (row == col) {
        cout << "The matrix is not a rectangular matrix ";
    }
    else {
        cout << "Please enter the values for the array: ";
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cin >> arr[i][j];
            }
            cout << endl;
        }
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        for (int i = 0; i < row; i++) {
            int sum = 0;
            for (int j = 0; j < col; j++) {
                sum = sum + arr[i][j];
                if (sum > num) {
                    num = sum;
                }
            }
            cout << "The row " << i << " sum is: " << sum << endl;
            cout << endl;
        }
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                num2 = num2 + arr[i][j];
            }
        }
        cout << "The highest sum of row is: " << num << endl;
        cout << "The maximum sum of subarray is: " << num2 << endl;
    }
}
