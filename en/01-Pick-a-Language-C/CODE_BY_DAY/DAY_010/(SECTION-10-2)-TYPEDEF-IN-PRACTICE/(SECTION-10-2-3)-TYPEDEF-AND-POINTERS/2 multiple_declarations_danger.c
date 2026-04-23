#include <stdio.h>

/* OBJECTIVE: Show the difference between standard declaration and using typedef.
   Typedef ensures that ALL variables on the line are pointers,
   unlike the standard C declaration which can be confusing. */

typedef int* IntPtr;

int main() {
    // In standard C, only 'a' would be a pointer, 'b' would be a regular int:
    // int *a, b;

    // With typedef, both 'p1' and 'p2' ARE pointers:
    IntPtr p1, p2;

    int x = 10, y = 20;
    p1 = &x;
    p2 = &y;

    printf("P1: %d, P2: %d\n", *p1, *p2);
    return 0;
}