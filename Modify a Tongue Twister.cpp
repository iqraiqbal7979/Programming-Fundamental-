#include <iostream>
#include <string>
using namespace std;

int main() {
    string twst = "can you can as a canner can can a can ";
    string mod;
    int len = 0;
    while (twst[len] != '\0') {
        len++;
    }
    for (int i = 0; i < len; i++) {
        if (twst[i] == 'c' && twst[i + 1] == 'a' && twst[i + 2] == 'n') {
            mod = mod + "jam";
            i = i + 4;
        }
        else {
            mod = mod + twst[i];
        }
    }
    cout << "The modified form of the tongue twister is: " << mod << endl;
    return 0;
}
