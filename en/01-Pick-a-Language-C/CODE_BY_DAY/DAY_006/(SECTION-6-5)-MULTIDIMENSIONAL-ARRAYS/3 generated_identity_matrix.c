#include <stdio.h>

/**
 * Identity Matrix with Designated Initializers
 * Objective: Demonstrate the explicit initialization of specific indices
 * in a multidimensional array.
 */

int main() {
    // Creates a 3x3 matrix and defines only the main diagonal as 1
    // The rest will be automatically filled with 0 by the compiler.
    int identity[3][3] = {
        [0][0] = 1,
        [1][1] = 1,
        [2][2] = 1
    };

    printf("--- 3x3 Identity Matrix ---\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", identity[i][j]);
        }
        printf("\n");
    }

    return 0;
}