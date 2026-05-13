#include <stdio.h>
#include <stdlib.h>

/* OBJECTIVE: Show that realloc can also shrink the size. Compare with initial
   allocation via calloc (which already zeroes) and then resize while keeping
   existing data. */

int main() {
    int initial_elements = 8;
    int final_elements = 4;
    int *numbers, *temp;

    // Use calloc to allocate and zero everything
    numbers = calloc(initial_elements, sizeof(int));
    if (numbers == NULL) {
        perror("calloc failed");
        return 1;
    }

    // Fill some values
    for (int i = 0; i < initial_elements; i++) {
        numbers[i] = (i + 1) * 10;  // 10, 20, 30, ..., 80
    }

    printf("Original array (size %d):\n", initial_elements);
    for (int i = 0; i < initial_elements; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Shrink the array to only 4 elements (discard the last 4)
    temp = realloc(numbers, final_elements * sizeof(int));

    if (temp == NULL) {
        fprintf(stderr, "Error shrinking the array.\n");
        free(numbers);
        return 1;
    }

    numbers = temp;  // Update the pointer (may be the same or different)

    printf("\nShrunk array (size %d) - only the first elements were kept:\n", final_elements);
    for (int i = 0; i < final_elements; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Try to increase again to 6 elements (the new ones will contain garbage!)
    final_elements = 6;
    temp = realloc(numbers, final_elements * sizeof(int));

    if (temp == NULL) {
        fprintf(stderr, "Error increasing again.\n");
        free(numbers);
        return 1;
    }

    numbers = temp;

    printf("\nArray increased to %d elements (new positions contain garbage/indeterminate values):\n", final_elements);
    for (int i = 0; i < final_elements; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    free(numbers);
    numbers = NULL;

    return 0;
}