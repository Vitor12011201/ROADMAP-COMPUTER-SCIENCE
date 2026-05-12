/* Objective: Practice calloc syntax and verify zero initialization
Write a program that:
1. Allocate an array of 5 integers using calloc(5, sizeof(int)).
2. Do not fill the values manually.
3. Print the 5 values of the array using a for loop (index access).
4. Observe and note the output (should be all 0).
5. Free the memory with free.*/

#include <stdio.h>
#include <stdlib.h>


int main()
{

    int *array = calloc(5, sizeof(int));

    if (array == NULL)
    {
        fprintf(stderr, "Memory error\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", array[i]);
    }

    free(array);

    array = NULL;

    return 0;

}