#include <stdio.h>

/* OBJECTIVE: Demonstrate that the four ways of accessing data (array/pointer with bracket/asterisk notation) are absolutely identical to the compiler. */

int main() {
    int a[] = {11, 22, 33, 44, 55};
    int *p = a;
    int i = 2; // We want the value 33

    printf("Array notation on 'a': %d\n", a[i]);
    printf("Array notation on 'p': %d\n", p[i]);
    printf("Pointer arithmetic on 'a': %d\n", *(a + i));
    printf("Pointer arithmetic on 'p': %d\n", *(p + i));

    return 0;
}