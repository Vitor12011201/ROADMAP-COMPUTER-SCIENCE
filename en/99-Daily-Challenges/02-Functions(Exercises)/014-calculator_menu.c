/*Ask for two numbers.
Show a small menu:
1 - Add
2 - Subtract
3 - Multiply
4 - Divide
Ask the user to choose an option (e.g., int option).
Use if or switch to call only the function the user chose.*/

#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}
float subtract(float a, float b)
{
    return a - b;
}
float multiply(float a , float b)
{
    return a * b;
}
float divide(float a, float b)
{
    if (b == 0)
    {
        printf("Division by zero is not allowed \n");
    }
    return a / b;
}

int main ()
{
    float n_1 , n_2;
    int choice;
    do {
        printf("Enter a number: \n");
        scanf("%f", &n_1);
        printf("Enter another number: \n");
        scanf("%f", &n_2);
        printf("-------------------------------------------------\n");
        printf("1 - Add \n");
        printf("2 - Subtract \n");
        printf("3 - Multiply \n");
        printf("4 - Divide \n");
        printf("0 - Exit Program \n");
        printf("Choose what you want to do with these numbers: \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("The sum of %.2f and %.2f is: %.2f \n", n_1 , n_2, add(n_1,n_2));
            break;
        case 2:
            printf("The subtraction of %.2f and %.2f is: %.2f \n", n_1, n_2, subtract(n_1,n_2));
            break;
        case 3:
            printf("The multiplication of %.2f and %.2f is: %.2f \n", n_1 , n_2 , multiply(n_1,n_2));
            break;
        case 4:
            printf("The division of %.2f and %.2f is: %.2f \n ", n_1, n_2, divide(n_1,n_2));
            break;
        }
    }
    while (choice != 0);

    printf("Thank you for using the program, come back soon! \n");
}