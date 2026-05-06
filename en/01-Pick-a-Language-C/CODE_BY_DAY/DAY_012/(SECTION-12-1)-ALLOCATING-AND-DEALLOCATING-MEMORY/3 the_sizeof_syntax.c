#include <stdio.h>
#include <stdlib.h>

/* OBJECTIVE: Show the safest way to allocate memory by using the variable
   itself to determine the size. If you change the type of 'p' in the future,
   malloc will still work correctly without needing to change the line. */

int main() {
    double *p;

    // Instead of sizeof(double), we use sizeof *p.
    // Since *p is a double, the result is the same, but more "error-proof".
    p = malloc(sizeof *p);

    if (p != NULL) {
        *p = 3.14159265;
        printf("Value: %f\n", *p);
        free(p);
    }

    return 0;
}