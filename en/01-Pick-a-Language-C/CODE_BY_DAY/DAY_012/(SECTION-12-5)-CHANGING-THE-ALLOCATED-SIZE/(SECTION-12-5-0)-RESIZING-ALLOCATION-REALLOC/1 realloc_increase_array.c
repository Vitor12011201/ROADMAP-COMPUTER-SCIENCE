#include <stdio.h>
#include <stdlib.h>

/* OBJECTIVE: Use realloc to increase the size of a dynamically allocated
   array. Show the technique of using a temporary pointer to check for
   failure before assigning back to the original pointer. */

int main() {
    int initial_size = 5;
    int new_size = 10;
    int *vector, *temp;

    // Allocate initial array with malloc
    vector = malloc(initial_size * sizeof(int));
    if (vector == NULL) {
        fprintf(stderr, "Fatal error: Initial allocation failed.\n");
        return 1;
    }

    // Fill the first 5 elements
    for (int i = 0; i < initial_size; i++) {
        vector[i] = i * 2;
    }

    printf("Before realloc (size %d):\n", initial_size);
    for (int i = 0; i < initial_size; i++) {
        printf("vector[%d] = %d\n", i, vector[i]);
    }

    // Try to increase the array to 10 integers
    // IMPORTANT USAGE: store the return in a temporary pointer!
    temp = realloc(vector, new_size * sizeof(int));

    if (temp == NULL) {
        fprintf(stderr, "Error: Failed to resize the array.\n");
        free(vector);      // Free the original before exiting
        vector = NULL;
        return 1;
    }

    // If we got here, realloc succeeded
    vector = temp;     // Now vector points to the new block (may be same or different)

    // Fill the new elements (indices 5 through 9)
    for (int i = initial_size; i < new_size; i++) {
        vector[i] = i * 3;
    }

    printf("\nAfter realloc (size %d):\n", new_size);
    for (int i = 0; i < new_size; i++) {
        printf("vector[%d] = %d\n", i, vector[i]);
    }

    // Free everything
    free(vector);
    vector = NULL;

    return 0;
}