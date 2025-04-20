#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int limit = 0, i = 1;
    float factor = 0.0, nume = 1, sum = 0;

    cout << "Enter the series limit: ";
    cin >> limit;

    while (i <= limit) {
        factor = nume / pow(i, i);
        cout << nume << "/" << i << "^" << i << " = " << factor << endl;
        sum = sum + factor;
        i++;
    }

    cout << "The sum of the series is: " << sum;
    return 0;
}
