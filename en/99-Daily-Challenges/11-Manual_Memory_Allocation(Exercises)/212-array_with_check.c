/* Objective: Apply error checking in dynamic array allocation and handle invalid user input.
Implement a program that:
1. Ask the user how many double numbers they want to store.
2. If the number is less than or equal to zero, display "Invalid size" and terminate.
3. Allocate a dynamic array of double with that size, using the inline if-check pattern as shown in the material:
if ((array = malloc(size * sizeof(double))) == NULL)
4. If allocation fails, display "Error: insufficient memory for the array" and exit.
5. Fill the array with twice the index (index 0 → 0.0, index 1 → 2.0, index 2 → 4.0, etc.).
6. Print all stored values.
7. Free the memory. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input_size = 0;
    double *array;

    printf("How many double numbers do you want to store? \n");
    scanf("%d", &input_size);

    if (input_size <= 0)
    {
        fprintf(stderr, "Invalid size\n");
        fprintf(stderr, "The program has been terminated\n");
        return 1;
    }

    array = malloc(input_size * sizeof(double));

    if (array == NULL)
    {
        fprintf(stderr, "Error: insufficient memory for the array\n");
        return 1;
    }

    for (int i = 0; i < input_size; i++)
    {
        array[i] = i * 2;
        printf("%.2f\n", array[i]);
    }

    free(array);

    array = NULL;

    return 0;
}