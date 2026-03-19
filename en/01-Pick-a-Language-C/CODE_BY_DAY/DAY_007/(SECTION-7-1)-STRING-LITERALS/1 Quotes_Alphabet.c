#include <stdio.h>

/*
 * Character vs. String Literal
 * Goal: Show that 'A' occupies 1 byte and "A" occupies 2 bytes (due to the \0).
 */
int main() {
    char letter = 'A';          // Single quotes = a single character
    char short_string[] = "A";  // Double quotes = string literal (array)

    printf("Character: %c (Size: %zu byte)\n", letter, sizeof(letter));
    printf("String:    %s (Size: %zu bytes - includes the \\0)\n", short_string, sizeof(short_string));

    return 0;
}