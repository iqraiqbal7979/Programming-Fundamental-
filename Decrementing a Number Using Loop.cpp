#include <iostream>
using namespace std;

int main() {
    float num = 0.;
    cout << "Enter any number: ";
    cin >> num;

    do {
        cout << "num = " << num << endl;
        num = num - 0.5;
    } while (num >= 0);

    return 0;
}
