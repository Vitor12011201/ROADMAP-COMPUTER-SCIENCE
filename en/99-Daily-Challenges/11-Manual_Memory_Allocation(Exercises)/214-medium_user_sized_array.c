/* Objective: Apply array allocation with user-defined size, fill with calculation and input validation
Implement a program that:
1. Ask the user: "How many integers do you want to store?"
2. If the entered number is less than or equal to zero, display "Invalid size" and exit.
3. Dynamically allocate an int array with that size using malloc (formula: sizeof(int) * size).
4. Fill the array so that the element at position i receives the value i * i (square of the index).
- Example: if size = 5 → [0, 1, 4, 9, 16].
5. Print the array in the format: "values: 0, 1, 4, 9, 16".
6. Free the memory.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int user_response = 0;

    printf("How many integers do you want to store? \n");
    scanf("%d", &user_response);

    if (user_response <= 0)
    {
        printf("Invalid size");
        return 1;
    }

    int *p = malloc(sizeof(int) * user_response);

    if (p == NULL)
    {
        fprintf(stderr, "Memory error\n");
        return 1;
    }

    for (int i = 0; i < user_response; i++)
    {
        p[i] = i * i;
    }

    printf("The array numbers are: \n");

    for (int i = 0; i < user_response; i++)
    {
        printf("%d\n", p[i]);
    }

    free(p);

    p = NULL;

}