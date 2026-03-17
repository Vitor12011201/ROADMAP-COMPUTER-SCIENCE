/* Goal: Use explicit indices (Designated Initializers) in 2D and loop logic.
Create an int matrix named matrix[4][4].
Initialize it in a single line using the syntax [row][column] = value so that it becomes an Identity Matrix (where the main diagonal is 1 and the rest is 0).
Hint: You need to set [0][0], [1][1], [2][2], and [3][3].
Use nested loops to print the matrix, but with a detail: where the value is 0, print a dot . and where it is 1, print the number 1. This will make the diagonal very visible! */

#include <stdio.h>

int main() {
    char map[4][4];

    // Filling the map with dots (representing zeros)
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            map[i][j] = '.';
        }
    }

    // Creating the main diagonal (Identity Matrix logic)
    map[0][0] = '1';
    map[1][1] = '1';
    map[2][2] = '1';
    map[3][3] = '1';

    // Printing the matrix
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%c ", map[i][j]);
        }
        printf("\n");
    }

    return 0;
}