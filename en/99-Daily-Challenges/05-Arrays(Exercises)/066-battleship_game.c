#include <stdio.h>

/* Goal: Use nested loops to fill and display a "grid".
Declare a char matrix sea[5][5].
Use nested for loops to fill the entire matrix with the character '~' (representing water).
After filling, manually place a "ship" in the middle of the matrix by putting the character 'X' at position [2][2].
Print the complete matrix like a map (5 rows with 5 characters each). */

int main() {

    char sea[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            sea[i][j] = '~';
        }
    }

    sea[2][2] = 'X';

    printf("--- BATTLESHIP MAP ---\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%c ", sea[i][j]);
        }
        printf("\n");
    }

    return 0;
}