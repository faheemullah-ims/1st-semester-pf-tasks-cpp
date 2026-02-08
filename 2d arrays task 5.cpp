#include <iostream>
#include <string>
using namespace std;

int main() {
    const int PLAYERS = 5;
    const int MATCHES = 5;

    string names[PLAYERS];
    int scores[PLAYERS][MATCHES];
    int total[PLAYERS];
    double average[PLAYERS];

    int bestPlayerIndex = 0;
    int highestScore = 0;

    // Input player data
    for (int i = 0; i < PLAYERS; i++) {
        cout << "\nEnter name of player " << i + 1 << ": ";
        cin >> names[i];

        total[i] = 0;

        cout << "Enter scores of last 5 matches:\n";
        for (int j = 0; j < MATCHES; j++) {
            cout << "Match " << j + 1 << ": ";
            cin >> scores[i][j];
            total[i] += scores[i][j];
        }

        average[i] = total[i] / (double)MATCHES;

        // Check for best player
        if (total[i] > highestScore) {
            highestScore = total[i];
            bestPlayerIndex = i;
        }
    }

    // Display all players' performance
    cout << "\n\n----- Team Performance Summary -----\n";
    for (int i = 0; i < PLAYERS; i++) {
        cout << "Player: " << names[i] << endl;
        cout << "Total Score: " << total[i] << endl;
        cout << "Average Score: " << average[i] << endl;
        cout << "-----------------------------\n";
    }

    // Display best player
    cout << "\n***** Best Player *****\n";
    cout << "Name: " << names[bestPlayerIndex] << endl;
    cout << "Total Score: " << highestScore << endl;

    return 0;
}
