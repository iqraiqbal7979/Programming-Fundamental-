#include <iostream>
using namespace std;

int main() {
    int arr[10] = {}, even[5] = {}, odd[5] = {};
    int size = 0, even_corr = 0, odd_corr = 0, i = 0;
    cout << "Please enter elements of array: ";
    for (i = 0; i < 10; i++)
        cin >> arr[i];
    for (i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            even[even_corr++] = arr[i];
        }
        else {
            odd[odd_corr++] = arr[i];
        }
    }
    cout << "The array after arranging the output is: ";
    for (i = 0; i < even_corr; i++)
        cout << even[i] << " ";
    for (i = 0; i < odd_corr; i++)
        cout << odd[i] << " ";
    cout << endl;
}
