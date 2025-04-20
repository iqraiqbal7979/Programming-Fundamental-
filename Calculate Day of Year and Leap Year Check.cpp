#include <iostream>
using namespace std;

int day_no(int month, int day);
void leap_year(int year);

int main() {
    int month, day, year;

    cout << "Enter the month: ";
    cin >> month;

    cout << "Enter the day: ";
    cin >> day;

    cout << "Enter the year: ";
    cin >> year;

    cout << "The day number is: " << day_no(month, day) << endl;
    leap_year(year);

    return 0;
}

int day_no(int month, int day) {
    const int days_in_month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int total_days = 0;

    for (int i = 0; i < month - 1; i++) {
        total_days += days_in_month[i];
    }

    total_days += day;
    return total_days;
}

void leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << "The year " << year << " is a leap year.\n";
    }
    else {
        cout << "The year " << year << " is not a leap year.\n";
    }
}
