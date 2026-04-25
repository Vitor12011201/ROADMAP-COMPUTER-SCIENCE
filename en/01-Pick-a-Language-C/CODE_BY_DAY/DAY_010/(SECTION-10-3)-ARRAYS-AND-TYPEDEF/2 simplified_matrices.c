#include <stdio.h>

/* OBJECTIVE: Use typedef to simplify the declaration of matrices (2D arrays).
   This helps organize data that always has the same column structure. */

typedef int BoardLine[3];

int main() {
    // A board is an array of 3 'BoardLine' elements
    BoardLine tic_tac_toe[3] = {
        {1, 0, 1},
        {0, 1, 0},
        {1, 1, 0}
    };

    printf("Board center: %d\n", tic_tac_toe[1][1]);
    return 0;
}