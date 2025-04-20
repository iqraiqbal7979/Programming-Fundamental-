#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    char str[100] = { }, str1[100] = { };
    string str2;
    int n1 = 0, n2 = 0;
    cout << "Enter the value for the first string: ";
    cin.getline(str, 100);
    cout << "Enter the value for the second string: ";
    cin.getline(str1, 100);
    n1 = strlen(str);
    n2 = strlen(str1);
    if (n1 != n2) {
        cout << "False" << endl;
    }
    else {
        str2 = strcat(str, str);
        if (str2.find(str1) != string::npos) {
            cout << "True" << endl;
        }
        else {
            cout << "False" << endl;
        }
    }
    return 0;
}
