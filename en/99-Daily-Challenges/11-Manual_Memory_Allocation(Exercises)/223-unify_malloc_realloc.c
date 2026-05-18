/* Objective: Practice the equivalence between realloc(NULL, size) and malloc(size)
Write a program that demonstrates the equivalence between malloc and realloc with NULL pointer:
1. Declare an int pointer *p initialized to NULL.
2. Use realloc(p, 5 * sizeof(int)) to allocate space for 5 integers.
3. Fill the array with the values 2, 4, 6, 8, 10.
4. Print all values.
5. Free the memory with free(p). */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *p = NULL;

    int *new_p = realloc(p, 5 * sizeof(int));

    if (new_p == NULL)
    {
        fprintf(stderr, "Error allocating memory\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        new_p[i] = (i + 1) * 2;
        printf("%d\n", new_p[i]);
    }

    p = new_p;

    free(p);

    p = NULL;

    return 0;
}