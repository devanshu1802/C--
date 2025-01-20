#include <iostream>
using namespace std;
char game[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char currentMarker;
int currentPlayer;

void displayBoard() {
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << game[i][j];
            if (j < 2) cout << " | ";
        }
        cout << "\n";
        if (i < 2) cout << "---------\n";
    }
    cout << "\n";
}

bool placeMarker(int slot) {
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;
    if (game[row][col] != 'X' && game[row][col] != 'O') {
        game[row][col] = currentMarker;
        return true;
    }
    return false;
}

bool checkWinner() {
    for (int i = 0; i < 3; i++) {
        if (game[i][0] == game[i][1] && game[i][1] == game[i][2]) return true;
        if (game[0][i] == game[1][i] && game[1][i] == game[2][i]) return true;
    }
    if (game[0][0] == game[1][1] && game[1][1] == game[2][2]) return true;
    if (game[0][2] == game[1][1] && game[1][1] == game[2][0]) return true;
    return false;
}

void switchPlayer() {
    currentPlayer = (currentPlayer == 1) ? 2 : 1;
    currentMarker = (currentMarker == 'X') ? 'O' : 'X';
}

void playGame() {
    cout << "Player 1, choose your marker (X or O): ";
    cin >> currentMarker;
    currentPlayer = 1;

    displayBoard();
    for (int i = 0; i < 9; i++) {
        cout << "Player " << currentPlayer << "'s turn. Enter your slot: ";
        int slot;
        cin >> slot;

        if (slot < 1 || slot > 9 || !placeMarker(slot)) {
            cout << "Invalid move. Try again.\n";
            i--;
            continue;
        }
        displayBoard();
        if (checkWinner()) {
            cout << "Player " << currentPlayer << " wins!\n";
            return;
        }
        switchPlayer();
    }
    cout << "It's a tie!\n";
}
int main() {
    cout << "Welcome to Tic Tac Toe!\n";
    playGame();
    return 0;
}
