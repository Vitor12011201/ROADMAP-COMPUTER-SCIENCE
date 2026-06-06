#include <stdio.h>

/* OBJECTIVE: Demonstrate the different ways to declare signed and unsigned variables in C,
   including the shorthand forms allowed by the compiler. */

int main() {
    // Equivalent forms for SIGNED variables (allow negatives)
    int a = -10;
    signed int b = -20;

    // Equivalent forms for UNSIGNED variables (only zero and positives)
    unsigned int c = 300;
    unsigned d = 400; // The compiler automatically understands as 'unsigned int'

    printf("Signed: a = %d, b = %d\n", a, b);
    printf("Unsigned: c = %u, d = %u\n", c, d);

    return 0;
}