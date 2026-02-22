/* Create a program that calculates the Arithmetic Mean of two numbers.
Create a function called calculateAverage.
It should receive two numbers (can be int or float).
It should return a float (because the average of 5 and 2 is 3.5).
Extra Tip: Try to make the calculateAverage function call your sum function inside it to get the total before dividing by 2. */

#include <stdio.h>

float sum(float a, float b)
{
    return a + b;
}

float average(float total)
{
    return total / 2;
}

int main()
{
    float a, b;

    printf("Enter a number: \n");
    scanf("%f", &a);

    printf("Enter another number: \n");
    scanf("%f", &b);

    float totalSum = sum(a, b);

    printf("The average of %.2f and %.2f is %.2f\n", a, b, average(totalSum));

    return 0;
}