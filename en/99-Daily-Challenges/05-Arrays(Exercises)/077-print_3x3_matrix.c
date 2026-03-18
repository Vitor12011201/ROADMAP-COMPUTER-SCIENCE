/* Goal: Pass a fixed matrix to a function.
1. Create a function void show_matrix(int m[][3], int rows).
2. In main, create an int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};.
3. The function should use nested loops to print the formatted matrix (with spaces and line breaks).
4. Call the function passing the matrix and the number of rows (2). */

#include <stdio.h>

void show_matrix(int matrix[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int matrix[][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    show_matrix(matrix, 2);

    return 0;
}