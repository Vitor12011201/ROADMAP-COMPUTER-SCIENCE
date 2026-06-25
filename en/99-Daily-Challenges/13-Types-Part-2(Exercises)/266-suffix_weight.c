/* Objective: Avoid implicit conversions by using the sizeof operator to verify the sizes of floating-point literal constants directly in memory.
Instructions:
1. Without creating variables, use printf to print the size in bytes (sizeof) of the following literal constants:
   - sizeof(5.5) (no suffix)
   - sizeof(5.5f) (single-precision suffix)
   - sizeof(5.5L) (extended-precision suffix)
2. Use the %zu specifier to print the sizes returned by sizeof. */

#include <stdio.h>

int main(void)
{
    printf("sizeof(5.5)  = %zu bytes\n", sizeof(5.5));
    printf("sizeof(5.5f) = %zu bytes\n", sizeof(5.5f));
    printf("sizeof(5.5L) = %zu bytes\n", sizeof(5.5L));

    return 0;
}