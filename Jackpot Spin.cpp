#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int turn_1 = 0, turn_2 = 0, turn_3 = 0, turn_4 = 0;
    int count1 = 0, count2 = 0, sum_1 = 0, add_1 = 0, sum_2 = 0, add_2 = 0;
    int i = 1;
    bool check = false;

    cout << endl;
    cout << "\t\t\t\t Let's start the game" << endl;
    cout << endl;

    srand(time(0));

    // Loop for 5 turns
    while (i <= 5) {
        while (!check) {
            // First player spins
            cout << "First player spin:" << endl;
            turn_1 = rand() % 19 + 10;
            cout << "First score of first player: " << turn_1 << endl;
            turn_2 = rand() % 19 + 10;
            cout << "Second score of first player: " << turn_2 << endl;

            // Second player spins
            cout << "Second player spin:" << endl;
            turn_3 = rand() % 19 + 10;
            cout << "First score of second player: " << turn_3 << endl;
            turn_4 = rand() % 19 + 10;
            cout << "Second score of second player: " << turn_4 << endl;

            // Calculate sum
            sum_1 = turn_1 + turn_2;
            add_1 += sum_1;
            sum_2 = turn_3 + turn_4;
            add_2 += sum_2;

            cout << "First player sum in turn " << i << " = " << sum_1 << endl;
            cout << "Second player sum in turn " << i << " = " << sum_2 << endl;

            // Check if any player wins the jackpot
            if (sum_1 >= 50 && sum_2 != 50) {
                cout << "First player wins the jackpot!" << endl;
                check = true;
            }
            else if (sum_2 >= 50 && sum_1 != 50) {
                cout << "Second player wins the jackpot!" << endl;
                check = true;
            }
            else if (sum_2 >= 50 && sum_1 >= 50 && sum_1 == sum_2) {
                cout << "Both players win the jackpot!" << endl;
                check = true;
            }
            else if (sum_1 > sum_2) {
                count1++;
            }
            else if (sum_1 < sum_2) {
                count2++;
            }
        }

        i++;  // Move to the next turn
    }

    // Determine the overall winner
    if (count1 > count2) {
        cout << "First player is the winner of the match!" << endl;
    }
    else if (count1 < count2) {
        cout << "Second player is the winner of the match!" << endl;
    }
    else if (count1 == count2) {
        if (add_1 > add_2) {
            cout << "First player is the winner of the match!" << endl;
        }
        else if (add_1 < add_2) {
            cout << "Second player is the winner of the match!" << endl;
        }
        else if (add_1 == add_2) {
            cout << "The match is a tie!" << endl;
        }
    }

    return 0;
}
