#include <stdio.h>

/*
 * Goal: Traverse a string using only pointer arithmetic.
 */
int main() {
    char *message = "Hello!"; // Pointer to the first character 'H'

    printf("Initial address: %p\n", (void*)message);
    printf("First letter:    %c\n", *message);

    // Moving the pointer to see the next letters
    printf("Second letter:   %c\n", *(message + 1));
    printf("Third letter:    %c\n", *(message + 2));

    return 0;
}