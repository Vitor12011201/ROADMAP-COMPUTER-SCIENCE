#include <stdio.h>

/* OBJECTIVE: Use scientific notation (E-notation) to handle numbers
   with many zeros and understand how printf (%e) standardizes the visual display. */

int main() {
    // 1.2345e+4 means 1.2345 * 10^4 = 12345.0
    double big_number = 1.2345e+4;

    // Negative exponents move the decimal point left: 5.43e-3 = 0.00543
    float small_number = 5.43e-3f; // Accepts the 'f' suffix without issues

    // Beej showed that you can put multiple digits before the decimal in the declaration...
    double misaligned_number = 123.456e+3; // 123.456 * 10^3 = 123456.0

    printf("--- Display in Standard Decimal Format (%%f) ---\n");
    printf("Big:   %f\n", big_number);
    printf("Small:  %f\n", (double)small_number);
    printf("Original: %f\n\n", misaligned_number);

    printf("--- Forced Display in Scientific Notation (%%e) ---\n");
    // Notice that printf forces the display with only ONE digit before the decimal point!
    printf("Reformatted by printf: %e\n", misaligned_number);

    return 0;
}