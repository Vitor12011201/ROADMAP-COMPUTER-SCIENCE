#include <stdio.h>

/* OBJECTIVE: Demonstrate that accessing an array by index or by pointer addition
   results in exactly the same machine code. */

int main() {
    int a[5] = {11, 22, 33, 44, 55};
    int *p = a;

    // Accessing the third element (index 2) in two ways:
    printf("Via array index: %d\n", a[2]);
    printf("Via pointer math: %d\n", *(p + 2));

    return 0;
}