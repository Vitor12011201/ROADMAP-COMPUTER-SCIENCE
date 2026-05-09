#include <stdio.h>
#include <stdlib.h>

/* OBJECTIVE: Encapsulate dynamic array allocation in a separate function,
   which returns NULL on failure. The main function handles the error
   appropriately. Shows how to allocate any type (here char for string). */

// Function that allocates a character array (string) with a specific size
char* create_dynamic_string(int size) {
    // Allocate 'size' bytes (each char is 1 byte)
    char *str = malloc(size * sizeof(char));

    // If allocation fails, return NULL to the caller
    if (str == NULL) {
        return NULL;
    }

    return str;
}

int main() {
    int length = 20;
    char *my_text;

    // Try to create a character array (string)
    my_text = create_dynamic_string(length);

    // Check if allocation failed
    if (my_text == NULL) {
        printf("Error: Could not allocate %d characters.\n", length);
        return 1;
    }

    // If we got here, memory is guaranteed
    printf("Array of %d characters successfully allocated!\n", length);
    printf("Memory address: %p\n", (void*)my_text);

    // Free the memory
    free(my_text);
    my_text = NULL;

    return 0;
}