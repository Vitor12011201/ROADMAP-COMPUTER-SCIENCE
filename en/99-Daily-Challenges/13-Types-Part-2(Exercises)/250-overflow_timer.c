/* Objective: Simulate the famous "Year 2038" bug (Y2K38), where 32-bit systems will crash because the time in seconds will exceed the limit of a signed int.
Instructions:
The largest value a 4-byte (32-bit) int can hold is 2147483647.
1. Declare an int variable thirty_two_bit_time = 2147483647;.
2. Declare a long long variable sixty_four_bit_time = 2147483647;.
3. Add 1 to both variables.
4. Print the new value of each (remember to use %d and %lld).
Challenge: Explain in the comment what happened to the 32-bit clock and why migrating systems to long long (64 bits) solves the problem for the next billions of years.*/
/*
Answer: The 32-bit clock suffered an overflow. The value 2147483647 is the largest
number a signed 32-bit int can store. By adding 1, the value exceeded this limit
and "wrapped around" to -2147483648, causing incorrect behavior.

This is the same problem as the Year 2038 bug: systems that store time in a
32-bit int will overflow when the seconds counter since 01/01/1970 exceeds 2147483647.

A long long typically uses 64 bits, having a much larger limit (9223372036854775807).
Therefore, it can store the same time count for billions of years without overflowing,
solving the Year 2038 problem.
*/

#include <stdio.h>

int main()
{

    int thirty_two_bit_time = 2147483647;

    long long sixty_four_bit_time = 2147483647;

    thirty_two_bit_time = thirty_two_bit_time + 1;

    sixty_four_bit_time = sixty_four_bit_time + 1;

    printf("%d\n", thirty_two_bit_time);

    printf("%lld", sixty_four_bit_time);

    return 0;

}