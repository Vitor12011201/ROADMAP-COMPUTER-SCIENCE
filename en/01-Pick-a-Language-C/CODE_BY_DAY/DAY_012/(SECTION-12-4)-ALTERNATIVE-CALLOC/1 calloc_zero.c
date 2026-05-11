#include <stdio.h>
#include <stdlib.h>

/* OBJECTIVE: Use calloc to allocate an integer array, demonstrating
   that all memory already comes initialized to zero automatically. */

int main() {
    int quantity = 8;
    int *numbers;

    // calloc(quantity, size_of_each_element) - already zeroes the memory
    numbers = calloc(quantity, sizeof(int));

    // Mandatory allocation failure check
    if (numbers == NULL) {
        fprintf(stderr, "Fatal error: Could not allocate %d integers with calloc.\n", quantity);
        return 1;
    }

    // Since calloc zeroed everything, we don't need to initialize manually
    printf("Array allocated with calloc (all values are already zero):\n");
    for (int i = 0; i < quantity; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);  // all zero
    }

    // Free the memory
    free(numbers);
    numbers = NULL;

    return 0;
}