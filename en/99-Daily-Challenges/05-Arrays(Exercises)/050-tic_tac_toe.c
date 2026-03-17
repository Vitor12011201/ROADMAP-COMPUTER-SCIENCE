/* Create a program that represents a Tic-Tac-Toe board (3x3).
Initialize a char matrix called board[3][3] with the letters 'X' and 'O'
so that 'X' wins on the main diagonal.
Use two for loops to print the board in an organized way. */

#include <stdio.h>

int main()
{
    // Initializing the board with 'O'
    char board[3][3] =
    {
        {'O', 'O', 'O'},
        {'O', 'O', 'O'},
        {'O', 'O', 'O'}
    };

    // Setting 'X' to win on the main diagonal
    board[0][0] = 'X';
    board[1][1] = 'X';
    board[2][2] = 'X';

    printf("TIC-TAC-TOE\n");
    printf("===========\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }

    return 0; // Standard practice to return 0
}