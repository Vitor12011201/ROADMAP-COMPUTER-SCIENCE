#include <stdio.h>

// The first dimension is optional, but the SECOND (columns) is MANDATORY.
// The '3' tells C that each row is 3 integers wide.
void print_matrix(int m[][3], int rows) {
    printf("--- Matrix Content ---\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            // C uses the '3' from the definition to calculate where m[i][j] is in memory
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int my_matrix[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    // We pass the matrix and the number of rows separately
    print_matrix(my_matrix, 2);

    return 0;
}