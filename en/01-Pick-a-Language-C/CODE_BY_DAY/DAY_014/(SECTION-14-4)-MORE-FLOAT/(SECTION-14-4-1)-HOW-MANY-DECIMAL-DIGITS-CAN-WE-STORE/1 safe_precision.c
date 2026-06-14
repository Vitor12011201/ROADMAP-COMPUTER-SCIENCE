#include <stdio.h>
#include <float.h>

/* OBJECTIVE: Demonstrate the safe digit limit guaranteed by the FLT_DIG macro.
   Check how float behaves when trying to display beyond the safety limit. */

int main() {
    // FLT_DIG guarantees 6 significant digits. Let's test a number with 6 digits:
    float safe = 0.123456f;

    // Let's test a number with 9 significant digits:
    float unsafe = 0.123456789f;

    // Controlled printing: %.6f forces 6 decimal places, %.9f forces 9 places.
    printf("Guaranteed (FLT_DIG = %d): %.6f\n", FLT_DIG, safe);
    printf("Unsafe (Exceeded the limit): %.9f\n", unsafe);

    return 0;
}