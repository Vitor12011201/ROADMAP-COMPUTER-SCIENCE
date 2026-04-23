/* Objective: Practice creating an abstract type for money, facilitating a future change in precision.
1. Use typedef to create the type 'Currency' as a float.
2. In main, declare three variables of type 'Currency': item1, item2, and total.
3. Assign values to the first two, add them into 'total', and print with two decimal places.
 - The Test: Imagine the client asked for more precision. Change the typedef to 'double' and see if the code continues to work without touching the main function.
*/

#include <stdio.h>

typedef double Currency;

int main()
{
    Currency item1 = 45.3;
    Currency item2 = 72.5;
    Currency total;

    total = item1 + item2;

    printf("The total is: %.2f\n", total);

    return 0;
}