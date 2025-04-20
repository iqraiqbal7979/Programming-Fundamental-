#include <iostream>
using namespace std;

int main() {
    int num = 0, draws = 0, counter = 0;
    char card;
    bool jack = false;
    bool ace = true;

    cout << "---------------------------\n";
    cout << "    Welcome to the Card Game    \n";
    cout << "---------------------------\n";

    while (jack == false) {
        cout << "Please enter a card (A, J, Q, K, 2-10): ";
        cin >> card;
        draws++;

        if (card == 'J' || card == 'j') {
            counter += 10;
            jack = true; // Jack is found, end the game
        }
        else if (card == 'A' || card == 'a') {
            counter += 10;
            ace = true;  // Ace found, special condition for next input
            num = 0; // Reset num
        }
        else if (card == 'K' || card == 'k' || card == 'Q' || card == 'q') {
            counter += 10; // King and Queen are worth 10 points
        }
        else if (card >= '2' && card <= '9') {
            counter += 5; // Cards 2-9 are worth 5 points
        }
        else if (card == '1') {
            char next;
            cin >> next; // For '10', we need to read the next character
            if (next == '0') {
                counter += 5; // '10' is worth 5 points
            }
            else {
                cout << "Not a valid card!" << endl;
                jack = true; // End the game on invalid input
            }
        }
        else {
            cout << "Not a valid input!" << endl;
            jack = true; // End the game on invalid input
        }
    }

    cout << "---------------------------\n";
    cout << "Game Over!\n";
    cout << "---------------------------\n";
    cout << "Total number of draws: " << draws << endl;
    cout << "Total score you have: " << counter << endl;

    system("pause");
    return 0;
}
