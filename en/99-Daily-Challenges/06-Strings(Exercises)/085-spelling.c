/* Goal: Use a loop and the %c specifier to see the string character by character.
1. Declare a string char s[] = "C is top";
2. Use a for loop (or while) to print each character separated by a hyphen.
The result should be: C -   - i - s -   - t - o - p. (Yes, count spaces as characters!). */

#include <stdio.h>

int main() {

    int i = 0;
    char s[] = "C is top";

    while (s[i] != '\0') {
        printf("%c - ", s[i]);
        i++;
    }

    // Calculating the number of elements (including the null terminator)
    printf("\nThe array s[] has: [%zu] elements\n", sizeof(s) / sizeof(char));

    return 0;
}