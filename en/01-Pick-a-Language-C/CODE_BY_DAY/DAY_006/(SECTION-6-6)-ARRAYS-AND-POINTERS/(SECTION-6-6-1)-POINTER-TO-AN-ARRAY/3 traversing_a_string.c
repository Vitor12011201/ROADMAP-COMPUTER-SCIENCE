#include <stdio.h>

/*
 * Strings are arrays, therefore, the string name is a pointer to the start.
 */
int main() {
    char name[] = "Zico";
    char *p = name; // 'p' points to 'Z'

    printf("Spelling it out: ");
    while (*p != '\0') { // While the pointer does not point to the end of the string
        printf("%c ", *p);
        p++; // Moves the pointer to the next letter
    }
    printf("\n");

    return 0;
}