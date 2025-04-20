#include <iostream>
using namespace std;

int main() {
    int account_num = 0, min_balance = 0, current_balance = 0, interest = 0;
    char account_type;

    cout << "Please enter your account number: ";
    cin >> account_num;

    cout << "Please enter minimum balance: ";
    cin >> min_balance;

    cout << "Please enter current balance: ";
    cin >> current_balance;

    cout << "Please enter your account type:\n";
    cout << "  Enter 's' for savings account\n";
    cout << "  Enter 'c' for checking account\n";
    cin >> account_type;

    switch (account_type) {
    case 's':
        if (current_balance < min_balance) {
            cout << "The service charges are $10.00\n";
            current_balance = current_balance - 10.00;
            cout << "Now your current balance is: " << current_balance << endl;
        }
        else if (current_balance >= min_balance) {
            interest = (current_balance * 4) / 100;
            cout << "You receive a 4% interest\n";
            cout << "Your current balance is: " << current_balance + interest << endl;
        }
        break;
    case 'c':
        if (current_balance < min_balance) {
            cout << "The service charges are $25.00\n";
            current_balance = current_balance - 25.00;
            cout << "Now your current balance is: " << current_balance << endl;
        }
        else if (current_balance >= 5000) {
            interest = (current_balance * 3) / 100;
            cout << "You receive a 3% interest\n";
            cout << "Now your current balance is: " << current_balance + interest << endl;
        }
        else if (current_balance >= min_balance) {
            interest = (current_balance * 5) / 100;
            cout << "You receive a 5% interest\n";
            cout << "Now your current balance is: " << current_balance + interest << endl;
        }
        break;
    default:
        cout << "Invalid input.\n";
    }
    return 0;
}
