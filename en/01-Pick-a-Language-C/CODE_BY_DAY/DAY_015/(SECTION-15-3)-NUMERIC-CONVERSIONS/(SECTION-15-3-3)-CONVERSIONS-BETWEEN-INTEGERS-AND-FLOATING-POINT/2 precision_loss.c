#include <stdio.h>

/* OBJECTIVE: Highlight C's "best effort" when converting a large integer
   to float. Show that, due to the mantissa bit limit (23 bits), the float
   is forced to sacrifice the least significant digits. */

int main() {
    // 16,777,217 is a number that exceeds the exact precision capacity of a 32-bit float
    int original_int = 16777217;

    // C makes a "best effort" to approximate the integer to the nearest representable float
    float approximated_float = (float)original_int;

    // Converting back to int to see the damage
    int recovered_int = (int)approximated_float;

    printf("--- Mantissa Limitation Test (Best Effort) ---\n");
    printf("Original Integer:   %d\n", original_int);
    printf("Approximated Float: %f\n", approximated_float);
    printf("Recovered Integer:  %d (We lost the trailing '1' due to hardware rounding!)\n", recovered_int);

    return 0;
}