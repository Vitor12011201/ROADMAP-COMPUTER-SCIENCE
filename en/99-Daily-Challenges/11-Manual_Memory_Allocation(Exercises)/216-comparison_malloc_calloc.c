/* Objective: Apply calloc and compare it with malloc followed by memset, demonstrating calloc's practicality
Implement a program that:
1. Ask the user how many doubles they want to store (positive value; otherwise display error and exit).
2. Allocate two arrays of the same size:
   - calloc_arr using calloc(size, sizeof(double)).
   - malloc_arr using malloc(size * sizeof(double)) and then explicitly zero it with memset(malloc_arr, 0, size * sizeof(double)).
3. Fill both arrays with the values: (i+1) * 0.5 (index 0 → 0.5, index 1 → 1.0, etc.).
4. Print the first 3 elements of each array to verify they are equal.
5. Free both arrays.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int user_response = 0;

    printf("How many doubles do you want to store: \n");
    scanf("%d", &user_response);

    if (user_response <= 0)
    {
        fprintf(stderr, "The number entered is zero or negative\n");
        return 1;
    }

    double *calloc_arr = calloc(user_response, sizeof(double));

    double *malloc_arr = malloc(user_response * sizeof(double));
    memset(malloc_arr, 0, user_response * sizeof(double));

    if (calloc_arr == NULL || malloc_arr == NULL)
    {
        fprintf(stderr, "Memory error\n");

        free(calloc_arr);

        free(malloc_arr);

        return 1;

    }

    for (int i = 0; i < user_response; i++)
    {
        calloc_arr[i] = (i + 1) * 0.5;
        malloc_arr[i] = (i + 1) * 0.5;
        if (i < 3)
        {
            printf("calloc_arr[%d] = %.2lf \n", i, calloc_arr[i]);
            printf("malloc_arr[%d] = %.2lf \n", i, malloc_arr[i]);
            printf("\n");
        }

    }

    free(calloc_arr);
    free(malloc_arr);

    calloc_arr = NULL;
    malloc_arr = NULL;

    return 0;

}