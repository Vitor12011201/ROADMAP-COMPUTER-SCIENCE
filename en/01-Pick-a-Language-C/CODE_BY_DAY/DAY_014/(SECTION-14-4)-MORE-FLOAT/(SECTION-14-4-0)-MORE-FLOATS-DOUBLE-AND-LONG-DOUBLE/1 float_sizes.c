#include <stdio.h>
#include <float.h> // Contains precision macros for floating point

/* OBJECTIVE: Display the size in bytes and the number of significant decimal digits
   that each floating-point type can reliably maintain with precision. */

int main() {
    // FLT_DIG, DBL_DIG, and LDBL_DIG tell how many digits are guaranteed without wrong rounding
    printf("FLOAT:       %zu bytes | Precision: %d decimal digits\n",
            sizeof(float), FLT_DIG);

    printf("DOUBLE:      %zu bytes | Precision: %d decimal digits\n",
            sizeof(double), DBL_DIG);

    printf("LONG DOUBLE: %zu bytes | Precision: %d decimal digits\n",
            sizeof(long double), LDBL_DIG);

    return 0;
}