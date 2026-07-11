/* Objective: Observe how the presence of a single floating-point operand transforms the result of an integer division.
Instructions:
1. Declare int a = 5; and int b = 2;.
2. Create a double variable result1 = a / b; and print it with %f. (Remember integer division!).
3. Create a double variable result2 = a / 2.0; (where 2.0 literal is a double). Print it with %f. */

#include <stdio.h>

int main()
{
    int a = 5;
    int b = 2;

    double result1 = a / b;
    printf("Result 1: %f\n", result1);

    double result2 = a / 2.0;
    printf("Result 2: %f\n", result2);

    return 0;
}