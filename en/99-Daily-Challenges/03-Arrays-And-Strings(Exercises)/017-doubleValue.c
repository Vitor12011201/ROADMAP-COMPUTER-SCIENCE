/* Write a function called doubleValue. It should:
Receive an integer as a parameter.
Return double that value (also as an integer). */

#include <stdio.h>

int doubleValue(int n)
{
    n = n * 2;
    return n;
}

int main()
{
    int number;
    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("The double of the entered number is %d", doubleValue(number));

    return 0;
}