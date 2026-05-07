/* OBJECTIVE: Use the formula n * sizeof(type) to create an array on demand.
1. Ask the user: "How many integers do you want to store?".
2. Use malloc to create an array of exactly that size.
3. Fill the array with numbers (e.g., 10, 20, 30...).
4. Print the numbers and then release the memory.
Reflection: If the user enters 1,000,000, your program will work. If it were
a standard array 'int list[n]', the program could crash (Stack Overflow).
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int user_response = 0;

    printf("How many integers do you want to store: \n");
    scanf("%d", &user_response);

    int *p = malloc(user_response * sizeof(int));

    if (p == NULL)
    {
        printf("Memory Error\n");
        return 1;
    }

    for (int i = 0; i < user_response; i++)
    {
        printf("Enter number[%d]: ", i + 1);
        scanf("%d", &p[i]);
    }

    printf("\nEntered numbers:\n");

    for (int i = 0; i < user_response; i++)
    {
        printf("[%d] %d\n", i + 1, p[i]);
    }

    free(p);

    p = NULL;

    return 0;
}