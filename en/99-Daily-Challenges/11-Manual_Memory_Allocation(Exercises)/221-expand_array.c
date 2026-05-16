/* Objective: Practice using realloc() to manually increase the size of a memory block.
1. Dynamically allocate an array for 2 integers using malloc. Fill with numbers 10 and 20.
2. Use realloc() to expand this same array so it can hold 4 integers.
3. Add numbers 30 and 40 in the new positions.
4. Print the 4 numbers to ensure realloc kept the original data intact.
5. Don't forget free().*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int capacity = 2;
    int new_capacity = 4;
    int *p = malloc(sizeof(int) * capacity);
    memset(p, 0, capacity * sizeof(int));

    if (p == NULL)
    {
        fprintf(stderr, "Memory error\n");
        return 1;
    }

    for (int i = 0; i < capacity; i++)
    {
        p[i] = 10 * (i + 1);
    }

    int *new_p = realloc(p, sizeof(int) * new_capacity);

    if (new_p == NULL)
    {
        fprintf(stderr, "Error reallocating memory\n");
        return 1;
    }

    p = new_p;

    for (int i = 2; i < new_capacity; i++)
    {
        p[i] = 10 * (i + 1);
    }

    for (int i = 0; i < new_capacity; i++)
    {
        printf("p[%d] = %d\n", i, p[i]);
    }

    free(p);

    p = NULL;

    return 0;
}