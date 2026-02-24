// Dereferencing is not just for changing values,
// but also for reading what is inside without using the original variable name.

#include <stdio.h>

int main(void) {
    char letter = 'A';
    char *p = &letter;

    // Here we use '*' just to GET the value and show it in the printf
    printf("The variable 'letter' contains: %c\n", *p);

    if (*p == 'A') {
        printf("The pointer confirmed: it really is the letter A!\n");
    }

    return 0;
}