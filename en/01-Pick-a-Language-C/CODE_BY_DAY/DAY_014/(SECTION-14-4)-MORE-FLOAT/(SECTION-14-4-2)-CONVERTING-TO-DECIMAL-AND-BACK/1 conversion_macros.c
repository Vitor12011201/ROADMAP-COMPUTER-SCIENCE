#include <stdio.h>
#include <float.h>

/* OBJECTIVE: Compare the input/math limit (DIG) with the
   export/serialization limit (DECIMAL_DIG) for float and double types. */

int main() {
    printf("--- LIMITS FOR FLOAT ---\n");
    printf("Safe for input (FLT_DIG): %d digits\n", FLT_DIG);
    printf("Needed to save/restore (FLT_DECIMAL_DIG): %d digits\n\n", FLT_DECIMAL_DIG);

    printf("--- LIMITS FOR DOUBLE ---\n");
    printf("Safe for input (DBL_DIG): %d digits\n", DBL_DIG);
    printf("Needed to save/restore (DBL_DECIMAL_DIG): %d digits\n", DBL_DECIMAL_DIG);

    return 0;
}