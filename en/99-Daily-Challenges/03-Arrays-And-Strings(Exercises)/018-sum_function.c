/* Create a program that:
Has a function called sum (or add).
This function should receive two integers as parameters: int a and int b.
It should return the sum of these two values.
In the main function, ask the user to type two numbers (you will need two scanfs or one scanf with two %d).
Show the result of the sum on the screen by calling the function. */

#include <stdio.h>

int sum(int a, int b)
{
    return (a + b);
}

int main()
{
    int a;
    int b;

    printf("Enter a number: \n");
    scanf("%d", &a);

    printf("Enter another number: \n");
    scanf("%d", &b);

    printf("The sum of %d + %d = %d\n", a, b, sum(a, b));

    return 0;
}
