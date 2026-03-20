#include <stdio.h>

/*
 * Goal: Use a loop to print character by character using indices.
 */
int main() {
    char s[] = "C is Life!";

    // We traverse until we find '\0' (the null terminator)
    for (int i = 0; s[i] != '\0'; i++) {
        printf("Character at index %d: %c\n", i, s[i]);
    }

    return 0;
}