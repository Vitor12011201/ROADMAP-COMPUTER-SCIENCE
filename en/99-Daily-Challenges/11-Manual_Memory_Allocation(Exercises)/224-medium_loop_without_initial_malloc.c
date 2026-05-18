/* Objective: Apply realloc(NULL) in a dynamic growth loop without special case for the first allocation
Implement a program that reads integers provided by the user until they type -1. The program must store all numbers in a dynamic array that grows exactly 3 elements at a time (does not double). Use realloc starting from NULL to avoid a separate initial malloc.
1. Initialize int *arr = NULL.
2. Keep track of capacity and size (how many numbers have actually been read).
3. For each new number (except -1):
4. If size == capacity, increase capacity += 3.
5. Call realloc(arr, capacity * sizeof(int)). Use a temporary pointer to check for failure.
6. If it fails, display "Allocation error", free whatever was already allocated (if any) and exit.
7. At the end (user types -1), print all numbers and the final capacity.
8. Free the memory. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int size = 0;
    int capacity = 3;

    int *arr = NULL;

    int *new_arr = realloc(arr, capacity * sizeof(int));

    if (new_arr == NULL)
    {
        fprintf(stderr, "Failed to allocate memory\n");
        return 1;
    }

    arr = new_arr;

    do
    {
        printf("Enter an integer (-1 to exit): ");
        scanf("%d", &arr[i]);

        if (arr[i] == -1)
        {
            break;
        }

        i++;
        size++;

        if (size == capacity)
        {
            printf("Array overflow, increasing capacity...\n");

            capacity += 3;

            int *temp = realloc(arr, capacity * sizeof(int));

            if (temp == NULL)
            {
                fprintf(stderr, "Failed to reallocate memory\n");
                free(arr);
                return 1;
            }

            arr = temp;
        }

    } while (1);

    printf("\nNumbers entered:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("Full array capacity: %d\n", capacity);

    free(arr);
    arr = NULL;

    return 0;
}