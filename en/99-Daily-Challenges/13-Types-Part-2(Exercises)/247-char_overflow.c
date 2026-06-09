/* Objective: Break the limit of an unsigned char to see the overflow effect on a single byte.
Instructions:
1. Declare an unsigned char byte = 255; (the maximum limit of 8 bits).
2. Use a for loop that runs 5 times.
3. At each iteration, add 1 to the byte variable (byte++) and print its numeric value with %d.
Challenge: Explain in a comment why the number did not go to 256, but instead "reset" back to zero. What would happen if the variable were a signed char initialized to 127? */
/* Answer:
An unsigned char has 8 bits, capable of storing values from 0 to 255.
When the value 255 receives +1, the mathematical result would be 256, but
256 needs 9 bits to be represented. Since the variable has only 8 bits,
the extra bit is discarded and the value goes back to 0.
This phenomenon is called overflow.
If it were a signed char, the range would be -128 to 127. Incrementing
127 would normally cause it to become -128 due to how negative numbers
are stored in two's complement.
*/

#include <stdio.h>

int main()
{

    unsigned char byte = 255;

    for (int i = 0; i < 5; i++)
    {
        printf("Numeric value of variable (byte): %d\n", byte);
        byte++;
    }

    return 0;

}