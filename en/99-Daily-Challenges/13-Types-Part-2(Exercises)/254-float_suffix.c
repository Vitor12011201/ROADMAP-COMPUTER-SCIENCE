/* Objective: Understand the practical difference between a constant with and without the f suffix.
Instructions:
1. C treats any number with a decimal point (e.g., 3.14) as double by default. To force the compiler to treat it as float, we need to put f at the end (3.14f).
2. In your main, declare float without_f = 0.123456789012345; and double with_d = 0.123456789012345;.
3. Print both using %.15f.
What to observe: See how the lack of the f suffix or choosing the wrong type corrupts the number soon after the safe digit barrier. */

#include <stdio.h>

int main()
{

    float without_f = 0.123456789012345;

    double with_d = 0.123456789012345;

    printf("without_f : %.15f\n", without_f);

    printf("with_d : %.15f\n", with_d);

    return 0;

}