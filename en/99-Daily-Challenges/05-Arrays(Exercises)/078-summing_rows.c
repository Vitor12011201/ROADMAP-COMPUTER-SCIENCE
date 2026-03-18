/* Goal: Process matrix data inside a function.
1. Create a function void total_per_row(int m[][2], int rows).
2. This function should iterate through each row, sum its two elements, and print: "Sum of row X: Y".
3. In main, create an int data[3][2] matrix with values of your choice (e.g., sales from 3 salespeople over 2 months).
4. Call the function and see the totals appearing. */

#include <stdio.h>

void total_per_row(int matrix[][2], int rows) {
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < 2; j++) {
            sum = sum + matrix[i][j];
        }
        printf("Salesperson number: %d, in 2 months sold: $%d \n", i + 1, sum);
    }
}

int main() {

    int sales[][2] = {
        {583, 834},
        {743, 942},
        {632, 537}
    };

    total_per_row(sales, 3);

    return 0;
}