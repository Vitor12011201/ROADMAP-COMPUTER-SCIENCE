#include <stdio.h>

/*
 * Goal: Show that a char pointer can change what it points to.
 */
int main() {
    // 's' points to the first character of "Good morning"
    char *s = "Good morning";
    printf("Phrase 1: %s\n", s);

    // Now 's' leaves "Good morning" behind and points to "Good night"
    s = "Good night";
    printf("Phrase 2: %s\n", s);

    return 0;
}