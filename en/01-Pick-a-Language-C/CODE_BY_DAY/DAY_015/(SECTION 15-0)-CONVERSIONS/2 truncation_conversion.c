#include <stdio.h>

/* OBJECTIVE: Illustrate the danger of type demotion (truncation).
   When you stuff a fractional number into an integer, C simply throws
   the decimal part away (it does not round, it chops the number). */

int main() {
    double course_price = 99.99;

    // Throwing a double (8 bytes) into an int (4 bytes)
    int chopped_value = course_price;

    // The .99 disappears completely from existence
    printf("Original price: %.2f\n", course_price);
    printf("Value after implicit truncation: %d\n", chopped_value);

    return 0;
}