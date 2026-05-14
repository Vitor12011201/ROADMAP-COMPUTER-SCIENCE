/* Objective: Challenge with dynamic growth controlled by a loop, successive realloc calls and correct error handling without losing original data
Create a program that reads integers from the user indefinitely until they type 0. The program must store all numbers (except the final 0) in a dynamic array that grows as needed.
Rules:
1. Start with an initial array size of 2 (allocated with malloc).
2. Keep track of:
   - capacity (current allocated size, in number of elements).
   - size (how many numbers have actually been stored).
3. For each new number read (different from 0):
   - If size == capacity, double the capacity using realloc (new capacity = capacity * 2).
   - Use a temporary pointer for realloc. If it fails (NULL), display "Error resizing – keeping current data and stopping input" and break the loop without losing the numbers already read.
   - After ensuring success, update the main pointer and capacity.
   - Add the number at the end of the array and increment size.
4. At the end (when the user types 0 or an allocation error occurs), print all stored numbers (one per line) and the final capacity.
5. Free all memory. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int capacity = 2;
    int size = 0;
    int user_number;
    int *p = malloc(sizeof(int) * capacity);
    memset(p, 0, capacity * sizeof(int));

    if (p == NULL)
    {
        fprintf(stderr, "Memory allocation error\n");
        free(p);
        return 1;
    }

    do
    {
        if (capacity == size)
        {
            printf("The array is full\n");
            printf("Allocating more space\n");
            printf("\n");
            printf("Space allocated!\n");
            printf("\n");

            capacity = capacity * 2;

            int *new_p = realloc(p, sizeof(int) * capacity);

            if (new_p == NULL)
            {
                fprintf(stderr, "Error reallocating memory\n");
                break;
            }

            p = new_p;
        }

        printf("Enter an integer: (type 0 to exit)\n");
        scanf("%d", &user_number);

        if (user_number != 0)
        {
            p[size] = user_number;
            size++;
        }
    }
    while (user_number != 0);

    printf("These were the numbers entered:\n");
    printf("\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", p[i]);
    }

    printf("\n");
    printf("The final capacity of the array is [%d] integer elements\n", capacity);

    free(p);

    p = NULL;

    return 0;
}