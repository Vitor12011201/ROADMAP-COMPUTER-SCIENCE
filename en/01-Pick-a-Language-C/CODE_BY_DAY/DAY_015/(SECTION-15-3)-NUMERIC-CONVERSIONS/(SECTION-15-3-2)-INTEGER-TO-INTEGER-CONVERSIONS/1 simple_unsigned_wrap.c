#include <stdio.h>

/* OBJECTIVE: Demonstrate the odometer effect guaranteed by law by the C standard
   when exceeding the maximum limit of an 'unsigned char' type (0 to 255). */

int main() {
    // The value 258 exceeds the maximum limit of 255 by exactly 3 units (256, 257, 258)
    // C applies the math: 258 % (2^8) -> 258 % 256 = 2
    unsigned char unsigned_limiter = 258;

    printf("--- Unsigned Overflow Test (Guaranteed) ---\n");
    printf("Expected overflow value: 2\n");
    printf("Actual stored value:    %d\n", unsigned_limiter);

    return 0;
}