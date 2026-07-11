/* Objective: Understand that literal constants without a decimal point (like 3) are treated strictly as integers, while constants with a decimal point (like 3.0) are double, altering the result of the expression.
Instructions:
1. Declare double int_result = 1 / 2; (using pure integers).
2. Declare double double_result = 1.0 / 2; (using a double constant).
3. Print both results using %f. */

#include <stdio.h>

int main()
{

    double int_result = 1 / 2;
    double double_result = 1.0 / 2;

    printf("Integer result: %f\n", int_result);
    printf("Double result: %f\n", double_result);

    return 0;

}