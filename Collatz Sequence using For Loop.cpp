#include<iostream>
using namespace std;

int main() {
    int a = 0, k = 0;
    cout << "Enter the number for first a: ";
    cin >> a;

    for (; a != 1; ) {
        k++;
        if (a % 2 == 0) {
            a = a / 2;
        }
        else {
            a = (3 * a) + 1;
        }
        cout << "The values are: " << a << endl;
    }

    cout << "\nThe number of k: " << k;
}
