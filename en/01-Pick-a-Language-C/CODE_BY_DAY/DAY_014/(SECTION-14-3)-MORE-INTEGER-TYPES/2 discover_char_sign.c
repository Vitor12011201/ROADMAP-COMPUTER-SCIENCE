#include <stdio.h>
#include <limits.h>

/* OBJECTIVE: Use Beej's logical trick to find out, at compile time,
    whether your system's compiler treats the plain 'char' type as signed or unsigned. */

int main() {
    printf("Analysis of the 'char' type on this system:\n\n");
    printf("CHAR_MAX  is: %d\n", CHAR_MAX);
    printf("UCHAR_MAX is: %d\n", UCHAR_MAX);
    printf("SCHAR_MAX is: %d\n\n", SCHAR_MAX);

    // Beej's logic: if char's maximum equals unsigned char's maximum, it is unsigned.
    if (CHAR_MAX == UCHAR_MAX) {
        printf("Result: Your plain char is UNSIGNED (0 to 255).\n");
    } else {
        printf("Result: Your plain char is SIGNED (-128 to 127).\n");
    }

    return 0;
}