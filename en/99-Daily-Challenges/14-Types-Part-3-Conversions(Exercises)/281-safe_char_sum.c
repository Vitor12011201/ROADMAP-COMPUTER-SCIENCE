/* Objective: Understand how automatic promotion prevents an intermediate calculation from exceeding the limit of the original type.
Instructions:
1. The maximum limit of a signed char is 127.
2. Declare char x = 100; and char y = 50;. The theoretical sum would be 150, which would overflow the char.
3. Create an int variable result = x + y;.
4. Print the result using %d. */

#include <stdio.h>

int main()
{
    char x = 100;
    char y = 50;

    int result = x + y;

    printf("Result: %d\n", result);

    return 0;
}