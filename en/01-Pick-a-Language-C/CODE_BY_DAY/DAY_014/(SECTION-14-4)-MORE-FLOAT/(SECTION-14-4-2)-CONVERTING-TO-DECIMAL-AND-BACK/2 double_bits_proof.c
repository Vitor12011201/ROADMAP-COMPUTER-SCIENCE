#include <stdio.h>
#include <float.h>

/* OBJECTIVE: Reproduce Beej's experiment showing that a double can
   perfectly store a number with more digits than DBL_DIG, and that we need
   17 decimal places (%17f) to capture the actual bit value. */

int main() {
    // 15 significant digits (Within DBL_DIG)
    double x = 0.123456789012345;
    // The very small value that will force the bit way out there
    double y = 0.0000000000000006;

    double result = x + y;

    // If we print with 15 digits (DBL_DIG), it rounds in a "pretty" way
    printf("Display with 15 places (DBL_DIG):     %.15f\n", result);

    // If we use 17 places, we reveal its true and exact binary representation
    printf("Real representation in 17 places:      %.17f\n", result);

    // Assigning the exact 17-digit value discovered to prove it is stable
    double z = 0.12345678901234559;
    printf("Proving z's stability (17 places): %.17f\n", z);

    return 0;
}