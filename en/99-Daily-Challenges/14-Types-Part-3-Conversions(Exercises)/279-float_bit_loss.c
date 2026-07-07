/* Objective: See what happens when we convert a very large integer to a plain float that tries to find the closest number, but loses precision.
Instructions:
1. The float type only has about 6 to 7 significant digits of precision.
2. Declare an int large_number = 123456789; (9 significant digits).
3. Convert this number to a float: float float_number = (float)large_number;.
4. Print float_number using %.2f and visually compare it with the original. */

#include <stdio.h>

int main(void)
{
    int large_number = 123456789;

    float float_number = (float) large_number;

    printf("Original number: %d\n", large_number);
    printf("Number as float: %.2f\n", float_number);

    return 0;
}