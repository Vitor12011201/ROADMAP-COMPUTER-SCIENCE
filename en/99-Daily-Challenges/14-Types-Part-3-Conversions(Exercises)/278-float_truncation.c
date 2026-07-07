/* Objective: Practice basic floating-point to integer conversion and observe the discarding of the fractional part.
Instructions:
1. Declare a double precise_pi = 3.99999;.
2. Create an int integer_pi variable;.
3. Perform the explicit conversion using cast: integer_pi = (int)precise_pi;.
4. Print the value of integer_pi with %d. */

#include <stdio.h>

int main(void)
{
    double precise_pi = 3.99999;
    int integer_pi;

    integer_pi = (int) precise_pi;

    printf("%d\n", integer_pi);

    return 0;
}