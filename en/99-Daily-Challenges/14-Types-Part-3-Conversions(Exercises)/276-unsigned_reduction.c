/* Objective: Force the conversion of a large integer type to a smaller unsigned type to observe the odometer effect in practice.
Instructions:
1. Declare an unsigned int variable large = 258;.
2. Create an unsigned char variable small; (remember that the maximum limit of unsigned char is 255).
3. Perform the assignment forcing the conversion: small = large;.
4. Print the value of small using %d.
Challenge: Mathematically explain in the comment why the final result was 2. (Hint: Think of the remainder of dividing the number 258 by the total capacity of a byte, which is 256).*/
/* unsigned char has a total capacity of 256 values, from 0 to 255. Since 258 exceeds this limit, the value "wraps around" and keeps only the remainder of the division by 256. Since 258 % 256 = 2, the final result is 2. */

#include <stdio.h>

int main()
{
    unsigned int large = 258;
    unsigned char small;

    small = large;

    printf("small: %d", small);

    return 0;
}