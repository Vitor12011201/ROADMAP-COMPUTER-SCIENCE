/* Objective: Understand how printf normalizes the display of numbers in scientific notation, regardless of how they were typed.
Instructions:
1. In main, declare the variable: double x = 123.456e+3;.
2. Print this number using three different specifiers on the same line or on consecutive lines:
   - Using %f (standard decimal notation).
   - Using %e (scientific notation with lowercase e).
   - Using %E (scientific notation with uppercase E).
3. Observe how printf reorganizes the number to leave only one digit before the decimal point in the scientific version. */

#include <stdio.h>

int main()
{

    double x = 123.456e+3;

    printf("With %%f: %f\n", x);
    printf("With %%e: %e\n", x);
    printf("With %%E: %E\n", x);

    return 0;

}