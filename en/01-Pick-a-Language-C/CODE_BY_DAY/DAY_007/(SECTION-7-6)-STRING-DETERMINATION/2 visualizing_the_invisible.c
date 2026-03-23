#include <stdio.h>

/*
 * Goal: Show that the '\0' character is numerically equal to 0.
 */
int main() {
    char word[] = "Hi"; // 'H', 'i', '\0'

    printf("--- Character Map ---\n");
    for (int i = 0; i <= 2; i++) {
        // %c prints the letter, %d prints the value in the ASCII table
        printf("Index %d: Character '%c' | ASCII Value: %d\n", i, word[i], word[i]);
    }

    return 0;
}