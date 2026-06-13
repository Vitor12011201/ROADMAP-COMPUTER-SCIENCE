/* Objective: Use the <float.h> library to find out how many decimal places your processor can guarantee with 100% precision for each type.
Instructions:
1. Include <stdio.h> and <float.h>.
2. Print the precision macros: FLT_DIG (for float), DBL_DIG (for double), and LDBL_DIG (for long double).
3. Also print their size in bytes using sizeof.
Reflection: How many more significant digits can your double hold compared to the standard float? */

#include <stdio.h>
#include <float.h>

int main()
{
    printf("Precision of float: %d digits\n", FLT_DIG);
    printf("Precision of double: %d digits\n", DBL_DIG);
    printf("Precision of long double: %d digits\n\n", LDBL_DIG);

    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long double: %zu bytes\n", sizeof(long double));

    return 0;
}