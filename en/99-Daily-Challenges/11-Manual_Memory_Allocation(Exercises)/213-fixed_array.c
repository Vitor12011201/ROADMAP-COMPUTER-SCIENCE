/* Objective: Practice the syntax for allocating a fixed-size array using malloc, filling it, and freeing it
Write a program that:
1. Dynamically allocate an array of 8 floats using malloc.
2. Use the correct number of bytes: sizeof(float) * 8.
3. Fill the array with the values: 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5.
4. Print all values using index notation (array[i]).
5. Free the memory at the end.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float *p = malloc(sizeof(float) * 8);

    if (p == NULL)
    {
        fprintf(stderr, "Error allocating memory.\n");
        return 1;
    }

    for (int i = 0; i < 8; i++)
    {
        p[i] = i + 1.5;
    }

    for (int i = 0; i < 8; i++)
    {
        printf("%.2f\n", p[i]);
    }

    free(p);

    p = NULL;

    return 0;

}