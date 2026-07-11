/* Objective: Use sizeof to capture the resulting type of a mathematical operation mixing integers of different sizes.
Instructions:
1. Declare an int x = 10; and a long long int y = 20LL;.
2. Print the size in bytes of the result of the operation using sizeof(x + y).
3. Also print the size of the result of sizeof(x + 4.5f). */

#include <stdio.h>

int main()
{
    int x = 10;
    long long int y = 20LL;
    printf("Size of x + y: %zu bytes\n", sizeof(x + y));
    printf("Size of x + 4.5f: %zu bytes\n", sizeof(x + 4.5f));

    return 0;
}