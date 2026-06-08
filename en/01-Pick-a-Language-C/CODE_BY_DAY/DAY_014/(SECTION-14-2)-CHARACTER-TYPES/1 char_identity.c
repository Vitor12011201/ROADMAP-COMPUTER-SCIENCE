#include <stdio.h>

/* OBJECTIVE: Demonstrate that a 'char' stores a number and can be printed
   both as a character (%c) and as an integer numeric value (%d). */

int main() {
    char letter = 'A'; // In the ASCII table, 'A' equals the number 65

    // Printing the same variable in two different ways
    printf("Display as character: %c\n", letter);
    printf("Display as integer: %d\n", letter);

    // We can also assign the number directly
    char another_letter = 66; // 66 is 'B'
    printf("The number 66 as a character is: %c\n", another_letter);

    return 0;
}