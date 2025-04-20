#include<iostream>
using namespace std;

int main() {
    float deci;
    cout << "Please enter the number: ";
    cin >> deci;

    if (deci == 0 || deci == 1) {
        cout << deci;
    }
    else {
        int integerPart = (int)deci;
        float fractionPart = deci - integerPart;
        string binary = "";

        // Convert integer part to binary using one for loop (reversed later)
        for (; integerPart > 0; integerPart /= 2)
            binary = to_string(integerPart % 2) + binary;

        cout << binary << ".";

        // Convert fractional part to binary (take 4 bits only)
        for (int i = 0; i < 4 && fractionPart > 0; i++) {
            fractionPart *= 2;
            int bit = (int)fractionPart;
            cout << bit;
            fractionPart -= bit;
        }
    }

    return 0;
}
