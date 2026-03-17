/* What you should do:
Declare a cinema[3][3] integer matrix (2D array).
Fill the matrix like this:
Set 0 for empty seats.
Set 1 for occupied seats.
Example: Try to keep the middle seat (1, 1) occupied.
Use two nested for loops to print the cinema map. */

#include <stdio.h>

int main () {
    // 2D Array representing the theater layout
    int cinema[3][3] = {
        {0, 1, 0},
        {1, 1, 0},
        {1, 0, 0}
    };

    //

    // Nested loops to iterate through rows (i) and columns (j)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", cinema[i][j]);
        }
        printf("\n");
    }

    printf("Total theater size: %zu bytes\n", sizeof(cinema));
    printf("Total size of one row: %zu bytes\n", sizeof(cinema[0]));
    printf("Total size of a specific seat: %zu bytes\n", sizeof(cinema[0][0]));

    return 0;
}