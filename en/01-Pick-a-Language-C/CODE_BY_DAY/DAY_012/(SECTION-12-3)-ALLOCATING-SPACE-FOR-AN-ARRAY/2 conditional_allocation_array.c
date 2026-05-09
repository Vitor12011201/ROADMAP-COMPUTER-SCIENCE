#include <stdio.h>
#include <stdlib.h>

/* OBJECTIVE: Use assignment inside the if condition to allocate an array
   concisely. Also demonstrate how to calculate the total size by
   multiplying the type size by the number of elements. */

int main() {
    int elements = 8;
    int *numbers;

    // Allocate malloc and check if it failed inside the if
    if ((numbers = malloc(elements * sizeof *numbers)) == NULL) {
        perror("Array allocation failed");
        exit(EXIT_FAILURE);
    }

    // Fill the array with twice the index
    for (int i = 0; i < elements; i++) {
        numbers[i] = i * 2;
    }

    // Display the values
    printf("Array of %d integers:\n", elements);
    for (int i = 0; i < elements; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Free memory and avoid dangling pointer
    free(numbers);
    numbers = NULL;

    return 0;
}