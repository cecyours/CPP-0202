#include <iostream>
#include "tictactoe.h"

using namespace std;

int main() {
    // the individual marks for the two players
    char players[2] = {'x','o'};
    // the board (Spielfeld)
    char board[3][3];
    initialize(board);
    print(board);
    for (int round=0; round<9; round++) {
        setMark(board, players[round%2]); // switch between players
        print(board);
        for (int pi=0;pi<2;pi++) { // playerindex 0 and 1
            if (hasWon(board,players[pi])) {
                cout << "Player " << players[pi] << " won!!" << endl;
                return 0;
            }
        }
    }
    cout << "Game ended in a draw!" << endl;
    return 0;
}