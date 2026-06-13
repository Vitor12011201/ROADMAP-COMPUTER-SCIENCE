/* Objective: See in practice the danger of using plain float to handle numbers that require many decimal places (such as financial systems).
Instructions:
1. Declare a float balance_float = 1000000.00;.
2. Declare a double balance_double = 1000000.00;.
3. Add 0.01 (one cent) ten times to both variables (you can use a loop or do it manually).
4. Print the final result of both with high precision using %.2f and then %.6f.
- Challenge: Explain in the comment why the float simply ignored or messed up the cents, while the double kept the calculation correct.*/
/* Answer: The precision of plain float is 6 digits, and the precision of double is 15 digits */

#include <stdio.h>

int main()
{

    float balance_float = 1000000.00;

    double balance_double = 1000000.00;

    for (int i = 0; i < 10; i++)
    {
        balance_float = balance_float + 0.1;

        balance_double = balance_double + 0.1;
    }

    printf("Value of balance_float: %.2f\n", balance_float);

    printf("Value of balance_double: %.6f\n", balance_double);

    return 0;

}