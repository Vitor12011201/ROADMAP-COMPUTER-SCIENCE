#include <stdio.h>

/*
 * Goal: Demonstrate that C stops reading as soon as it finds the first \0.
 */
int main() {
    char message[] = "Programming in C";

    printf("Original: %s\n", message);

    // We place a null terminator at index 11 (where " in C" begins)
    // The array remains the same size, but the "string" shortens.
    message[11] = '\0';

    printf("After the cut: %s\n", message); // Prints only "Programming"

    return 0;
}