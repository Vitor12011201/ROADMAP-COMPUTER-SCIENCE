/* Objective: Manipulate the exponent in scientific notation (e) to understand how the compiler normalizes very large or very small numbers.
Instructions:
1. Declare three double variables:
   - a receiving 1234.5e-3
   - b receiving 0.12345e+1
   - c receiving 12.345e-1
2. Print the value of all of them using the standard %f format. */

#include <stdio.h>

int main(void)
{
    double a = 1234.5e-3;
    double b = 0.12345e+1;
    double c = 12.345e-1;

    printf("a = %f\n", a);
    printf("b = %f\n", b);
    printf("c = %f\n", c);

    return 0;
}