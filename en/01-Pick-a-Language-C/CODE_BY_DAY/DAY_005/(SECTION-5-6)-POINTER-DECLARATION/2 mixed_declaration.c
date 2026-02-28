#include <stdio.h>

/**
 * Organized Mixed Declaration
 * Goal: Show how to declare multiple pointers and regular variables
 * on the same line while maintaining clarity.
 */

int main() {
    // Declaring several at the same time:
    // a and c are pointers, b and d are just floats.
    float *a, b, *c, d;

    float grade = 9.5;

    a = &grade;  // Valid
    b = 7.0;     // Valid
    c = &b;      // Valid (pointer pointing to the regular variable b)
    d = 0.0;     // Valid

    printf("--- Values and Addresses ---\n");
    printf("Grade value: %.1f\n", *a);
    printf("Value of b:  %.1f (accessed via *c: %.1f)\n", b, *c);
    printf("Value of d:  %.1f\n", d);

    return 0;
}