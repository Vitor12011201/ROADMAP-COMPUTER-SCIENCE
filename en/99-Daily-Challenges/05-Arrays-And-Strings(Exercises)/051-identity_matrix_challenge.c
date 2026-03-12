/* Try to create a 4x4 Identity Matrix in a different way:
Declare int identity[4][4].
In the initialization, use the specific brackets [row][column] to place the number 1
only in the positions where the row equals the column (e.g., [0][0]=1, [1][1]=1...).
Print the matrix and verify if C actually filled the rest with 0. */

#include <stdio.h>

int main()
{
    // Initializing with {0} ensures all other elements are zeroed out
    int identity[4][4] = {0};

    identity[0][0] = 1;
    identity[1][1] = 1;
    identity[2][2] = 1;
    identity[3][3] = 1;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // %4d keeps the columns perfectly aligned
            printf("%4d ", identity[i][j]);
        }
        printf("\n");
    }

    return 0;
}