#include <stdio.h>

/* OBJECTIVE: Visually demonstrate the limit of the standard 'float'. When trying to use
   many decimal places, the float exceeds its mantissa and starts inventing numbers
   (rounding), while 'double' keeps the correct value. */

int main() {
    // Using the same long number for both (Format specifier %.15f forces 15 decimal places on screen)
    float f_pi = 3.141592653589793;
    double d_pi = 3.141592653589793;

    // Float will fail around the 7th digit
    printf("Value in FLOAT:  %.15f\n", f_pi);

    // Double handles up to 15-17 digits easily
    printf("Value in DOUBLE: %.15f\n", d_pi);

    return 0;
}