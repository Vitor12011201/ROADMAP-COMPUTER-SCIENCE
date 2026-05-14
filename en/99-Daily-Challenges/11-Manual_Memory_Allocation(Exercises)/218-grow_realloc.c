/* Objective: Practice realloc syntax to increase the size of a dynamically allocated array
Write a program that:
1. Allocates an array of 3 integers using malloc.
2. Fills them with values 10, 20, 30.
3. Uses realloc to increase the array to 5 integers.
4. Fills the two new elements (indices 3 and 4) with 40 and 50.
5. Prints all 5 values.
6. Frees the memory with free. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int *p = malloc(sizeof(int) * 3);
    memset(p, 0, 3 * sizeof(int));

    if (p == NULL)
    {
        fprintf(stderr, "Memory error\n");
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {
        p[i] = (i + 1) * 10;
        printf("Value at position[%d]: %d\n", i, p[i]);
    }

    int *new_p = realloc(p, sizeof(int) * 5);

    if (new_p == NULL)
    {
        fprintf(stderr, "Error reallocating memory\n");
        return 1;
    }

    p = new_p;

    for (int i = 3; i < 5; i++)
    {
        p[i] = (i + 1) * 10;
        printf("Value at position[%d]: %d\n", i, p[i]);
    }

    free(p);

    p = NULL;

    new_p = NULL;

    return 0;
}