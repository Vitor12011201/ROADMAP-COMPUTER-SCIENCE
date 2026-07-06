#include <stdio.h>

/* OBJECTIVE: Demonstrate how C discards the fractional part of a float/double
   when converting it to an integer, ignoring any rounding proximity. */

int main() {
    double critical_approximation = 99.999999;

    // The implicit conversion throws the .999999 away. It does NOT round to 100!
    int integer_value = critical_approximation;

    printf("--- Floating-Point Truncation Test ---\n");
    printf("Original double value: %f\n", critical_approximation);
    printf("Value after becoming int: %d\n", integer_value);

    return 0;
}