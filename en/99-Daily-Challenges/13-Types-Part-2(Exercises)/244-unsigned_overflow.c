/* Objective: Understand the behavior of overflow when an unsigned number goes below its minimum or above its maximum limit.
Instructions:
Declare an unsigned int variable zero = 0;.
Subtract 1 from this variable (zero--; or zero = zero - 1;).
Print the result using %u.
Challenge: Explain in a comment what happened. Why does trying to subtract 1 from zero in an unsigned variable make it jump directly to the largest possible number on the system? (Think of a car's odometer that, when rolling backwards at 00000km, jumps to 99999km).*/
// Answer: Since unsigned int does not allow negative values, subtracting 1 from 0 causes an underflow. The value "wraps around" to the largest representable value of the unsigned int type. On a 32-bit system, this value is typically 4294967295 (2^32 - 1).

#include <stdio.h>

int main()
{
    unsigned int zero = 0;

    zero--;

    printf("Variable (zero): %u\n", zero);

    return 0;
}