#include <stdio.h>
#include <stdlib.h>

/* OBJECTIVE: Allocate an integer array with malloc using multiplication
   by the type size. Access elements using array indexing (brackets)
   and then free the memory. */

int main() {
    int quantity = 10;
    int *vector;

    // Allocate space for 'quantity' consecutive integers in memory
    vector = malloc(quantity * sizeof(int));

    // Mandatory allocation failure check
    if (vector == NULL) {
        fprintf(stderr, "Fatal error: Could not allocate %d integers.\n", quantity);
        return 1;
    }

    // Fill the array: each position receives i * 5
    for (int i = 0; i < quantity; i++) {
        vector[i] = i * 5;
    }

    // Display the stored values
    printf("Dynamically allocated array:\n");
    for (int i = 0; i < quantity; i++) {
        printf("vector[%d] = %d\n", i, vector[i]);
    }

    // Free the allocated memory
    free(vector);
    vector = NULL; // good practice: avoid dangling pointer

    return 0;
}