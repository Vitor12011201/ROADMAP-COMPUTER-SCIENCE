/*Take that Calculator code of yours (Exercise 013) (with the sum, subtraction functions, etc.) and reorganize it:
Place all prototypes at the top (before main).
Keep main in the middle.
Move all function definitions to the end of the file (after main).*/

#include <stdio.h>

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main ()
{
    float a, b;

    printf("Enter a number\n");
    scanf("%f", &a);
    printf("Enter another number\n");
    scanf("%f", &b);

    printf("The sum of %.2f + %.2f = %.2f\n", a , b , add(a,b));
    printf("The subtraction of %.2f - %.2f = %.2f\n", a , b , subtract(a,b));
    printf("The multiplication of %.2f * %.2f = %.2f\n", a , b , multiply(a,b));
    printf("The division of %.2f / %.2f = %.2f\n", a , b , divide(a,b));
}

float add(float a, float b)
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
    return a / b;
}