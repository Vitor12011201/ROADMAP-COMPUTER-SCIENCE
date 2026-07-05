/* Objective: Investigate your compiler's behavior when trying to truncate a number into a smaller signed type where it doesn't fit.
Instructions:
1. Declare an int original_value = 130;.
2. Try to force this value into a signed char signed_test;. The maximum limit of a signed char is 127. The value 130 exceeds this limit by 3 units.
3. Perform the assignment: signed_test = (signed char)original_value; (using explicit cast).
4. Print the value of signed_test using %d.
Challenge: See the result on the screen (probably a negative number like -126). Explain in the comment how the extra bit truncation makes the leftmost bit become 1, turning an originally positive number into a negative number in your processor's Two's Complement representation.*/
/* Answer: The number 130 exceeds the positive limit of signed char. By keeping only the last 8 bits, the binary pattern becomes 10000010. Since the first bit is 1, the processor interprets this value as negative in two's complement. That's why the result becomes -126. */

#include <stdio.h>

int main()
{
    int original_value = 130;
    signed char signed_test;

    signed_test = (signed char)original_value;

    printf("signed_test: %d\n", signed_test);

    return 0;
}