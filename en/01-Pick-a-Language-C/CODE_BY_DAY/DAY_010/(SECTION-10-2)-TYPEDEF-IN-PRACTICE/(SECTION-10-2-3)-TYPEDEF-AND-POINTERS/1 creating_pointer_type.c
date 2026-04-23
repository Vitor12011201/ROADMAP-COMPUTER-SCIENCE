#include <stdio.h>

/* OBJECTIVE: Create an alias that already includes the asterisk (*).
   This allows declaring pointers without explicitly using the '*' symbol in the variable. */

typedef int* IntPtr;

int main() {
    int number = 42;

    // IntPtr already means 'int *', so 'p' is a pointer
    IntPtr p = &number;

    printf("Value via pointer: %d\n", *p);
    return 0;
}