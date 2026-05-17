#include <stdio.h>
#include <stdlib.h>

/* OBJECTIVE: Use realloc with an initially NULL pointer to dynamically
   grow an array inside a loop, without needing a separate malloc for the
   first element. */

int main() {
    int *values = NULL;   // Starts as NULL – perfect for realloc
    int capacity = 0;     // How many elements currently fit
    int size = 0;         // How many elements have been inserted
    int input;

    printf("Enter integers (negative to stop):\n");

    while (1) {
        printf("> ");
        scanf("%d", &input);

        if (input < 0) break;   // negative stops

        // If there is not enough space, increase capacity
        if (size >= capacity) {
            // Define new capacity (start with 4, then double)
            int new_capacity = (capacity == 0) ? 4 : capacity * 2;

            // realloc with NULL pointer the first time works like malloc
            int *temp = realloc(values, new_capacity * sizeof(int));

            if (temp == NULL) {
                fprintf(stderr, "Error: failed to reallocate for %d integers.\n", new_capacity);
                free(values);   // free whatever was already allocated
                return 1;
            }

            values = temp;
            capacity = new_capacity;
            printf("  -> Capacity increased to %d\n", capacity);
        }

        values[size++] = input;
    }

    // Display the stored values
    printf("\nYou entered %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");

    free(values);
    values = NULL;

    return 0;
}