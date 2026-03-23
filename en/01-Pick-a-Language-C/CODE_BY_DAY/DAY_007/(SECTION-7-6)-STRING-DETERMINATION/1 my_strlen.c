#include <stdio.h>

/*
 * Goal: Show how we traverse the memory until finding the zero byte (\0).
 */
int my_strlen(char *s) {
    int counter = 0;

    // The loop continues AS LONG AS the character at position 'counter'
    // is different from the null terminator '\0'
    while (s[counter] != '\0') {
        counter++; // Found a valid character? Add 1 and jump to the next one
    }

    // When the loop stops, the counter has exactly the number of
    // letters before the zero.
    return counter;
}

int main() {
    char *sentence = "C is simple"; // C adds the \0 at the end by itself
    int length = my_strlen(sentence);

    printf("The sentence: \"%s\" has %d characters.\n", sentence, length);
    return 0;
}