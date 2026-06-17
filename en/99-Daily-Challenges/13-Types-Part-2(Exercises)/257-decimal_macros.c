/* Objective: Compare the storage macros (_DIG) with the conversion macros (_DECIMAL_DIG) on your compiler.
Instructions:
1. Include <stdio.h> and <float.h>.
2. Print, side by side, the float pair (FLT_DIG and FLT_DECIMAL_DIG) and the double pair (DBL_DIG and DBL_DECIMAL_DIG).
3. Use %d for all of them.
Reflection: Note how many more digits your system requires for "total bit fidelity" compared to normal use. */

#include <stdio.h>
#include <float.h>

int main()
{
    printf("FLT_DIG value: %d\n", FLT_DIG);
    printf("FLT_DECIMAL_DIG value: %d\n", FLT_DECIMAL_DIG);
    printf("\n");
    printf("DBL_DIG value: %d\n", DBL_DIG);
    printf("DBL_DECIMAL_DIG value: %d\n", DBL_DECIMAL_DIG);

    return 0;
}