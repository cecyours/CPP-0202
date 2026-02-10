#include <iostream>
#include "tictactoe.h"

using namespace std;

/*
    Function: initialize
    --------------------
    This function initializes the Tic-Tac-Toe board.
    Every cell of the board is filled with '-'
    which represents an empty position.
*/
void initialize(char board[][3])
{
    // Loop through rows
    for (int row = 0; row < 3; row++)
    {
        // Loop through columns
        for (int col = 0; col < 3; col++)
        {
            // Set each cell as empty
            board[row][col] = '-';
        }
    }
}

/*
    Function: print
    ---------------
    Displays the current state of the board.
    Each row is printed on a new line.
*/
void print(const char board[][3])
{
    // Traverse rows
    for (int row = 0; row < 3; row++)
    {
        // Traverse columns
        for (int col = 0; col < 3; col++)
        {
            cout << board[row][col];
        }
        cout << endl; // Move to next line after each row
    }
}

/*
    Function: hasWon
    ----------------
    Checks whether the given player ('X' or 'O')
    has won the game.

    Winning conditions:
    1. Any complete row
    2. Any complete column
    3. Main diagonal
    4. Anti-diagonal
*/
bool hasWon(const char board[][3], char player)
{
    // Check all rows
    for (int row = 0; row < 3; row++)
    {
        if (board[row][0] == player &&
            board[row][1] == player &&
            board[row][2] == player)
        {
            return true;
        }
    }

    // Check all columns
    for (int col = 0; col < 3; col++)
    {
        if (board[0][col] == player &&
            board[1][col] == player &&
            board[2][col] == player)
        {
            return true;
        }
    }

    // Check main diagonal (top-left to bottom-right)
    if (board[0][0] == player &&
        board[1][1] == player &&
        board[2][2] == player)
    {
        return true;
    }

    // Check anti-diagonal (top-right to bottom-left)
    if (board[0][2] == player &&
        board[1][1] == player &&
        board[2][0] == player)
    {
        return true;
    }

    // No winning condition matched
    return false;
}

/*
    Function: isValidIndex
    ----------------------
    Checks whether the entered row and column
    are inside the board limits (0 to 2).
*/
bool isValidIndex(int x, int y)
{
    return (x >= 0 && x <= 2 && y >= 0 && y <= 2);
}

/*
    Function: setMark
    -----------------
    Takes input from the player and places their mark
    on the board.

    Steps:
    1. Ask player for row and column.
    2. Check if index is valid.
    3. Check if cell is empty.
    4. If valid, place player's symbol.
    5. Otherwise, ask again.
*/
void setMark(char board[][3], char player)
{
    int x, y;
    bool valid = false;

    // Keep asking until a valid move is entered
    do
    {
        cout << "Player " << player << ", enter your move (row col): ";
        cin >> x >> y;

        // Check if index is outside board
        if (!isValidIndex(x, y))
        {
            cout << "Invalid move" << endl;
        }
        // Check if cell is already occupied
        else if (board[x][y] != '-')
        {
            cout << "Invalid move" << endl;
        }
        else
        {
            // Place player's mark
            board[x][y] = player;
            valid = true;
        }
    } while (!valid);
}
