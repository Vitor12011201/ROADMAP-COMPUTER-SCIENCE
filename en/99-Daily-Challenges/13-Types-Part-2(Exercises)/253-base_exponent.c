/* Objective: Investigate the internal gears of your processor by printing the mathematical base used in floating-point calculations.
Instructions:
1. Print the value of the FLT_RADIX macro (it shows the exponent base used in the book's bizarre formula).
2. Create a double number = 1.0;.
3. Use a while loop that divides this number by 2 indefinitely, until the number becomes exactly 0.0 (this happens when the memory exponent hits the minimum limit, called underflow).
4. Create a counter to see how many divisions were needed until the number vanishes from existence.
5. Print the total number of divisions. */

#include <stdio.h>
#include <float.h>

int main()
{
    int counter = 0;

    printf("exponent base: %d\n", FLT_RADIX);

    double number = 1.0;

    while (number != 0.0)
    {

        printf("%.20e\n", number);

        number = number / 2;

        counter++;

    }

    printf("Total divisions: %d\n", counter);

    return 0;

}