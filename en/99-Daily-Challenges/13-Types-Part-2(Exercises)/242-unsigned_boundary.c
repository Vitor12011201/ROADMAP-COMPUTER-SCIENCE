/* Objective: Understand the unsigned modifier, which removes negative numbers and doubles the capacity of positive numbers.
Instructions:
1. Declare a short int signed_var = 32767;.
2. Declare an unsigned short int unsigned_var = 32767;.
3. Add 1 to both variables.
4. Print the result of both on the screen (use %d for signed and %u for unsigned).
Challenge: Explain in the code comment why the signed variable "overflowed" to a negative number, while the unsigned one continued increasing perfectly.*/

/*
The signed variable overflowed because a signed short int
can only store values between -32768 and 32767.

Adding 1 to the maximum value (32767) causes an overflow,
making the value "wrap around" and become -32768.

The unsigned variable is an unsigned short int, which does not
store negative numbers and has a range from 0 to 65535.

Therefore, adding 1 to 32767 simply gives 32768 without overflow.
*/

#include <stdio.h>

int main()
{
    short int signed_var = 32767;
    unsigned short int unsigned_var = 32767;

    signed_var = signed_var + 1;

    unsigned_var = unsigned_var + 1;

    printf("The signed variable value is: %d\n", signed_var);
    printf("The unsigned variable value is: %u\n", unsigned_var);

    return 0;
}