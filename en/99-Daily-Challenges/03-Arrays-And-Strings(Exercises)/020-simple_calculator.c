/* Make a program that simulates a Simple Calculator.
The program should have:
A function for each operation: sum, subtract, multiply, and divide (All receiving two floats and returning a float).
In the main function, ask the user for two numbers.
Then, print a "table" with the 4 results. */

#include <stdio.h>

float sum(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if (b == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return a / b;
}

int main()
{
    float a, b;

    printf("Enter a number: \n");
    scanf("%f", &a);

    printf("Enter another number: \n");
    scanf("%f", &b);

    printf("\nThe numbers entered were: %.2f and %.2f\n", a, b);
    printf("----------------------------------------\n");
    printf("Sum:            %.2f\n", sum(a, b));
    printf("Subtraction:    %.2f\n", subtract(a, b));
    printf("Multiplication: %.2f\n", multiply(a, b));
    printf("Division:       %.2f\n", divide(a, b));
    printf("----------------------------------------\n");

    return 0;
}