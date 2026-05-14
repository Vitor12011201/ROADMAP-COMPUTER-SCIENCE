/* Objective: Apply realloc to reduce the size of an array, preserving the first elements
Implement a program that:
1. Dynamically allocate an array of 10 doubles using calloc (already zeroed).
2. Fill the array with the values: 100.0, 200.0, 300.0, ..., 1000.0.
3. Ask the user: "How many elements do you want to reduce the array to?" (value between 1 and 10).
   - If the value is invalid (out of range), display an error and exit without freeing? (Free before exiting.)
4. Use realloc to shrink the array to the new size informed.
5. Print the remaining elements.
6. Free the memory. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double *p = calloc(10, sizeof(double));
    int user_input = 0;

    if (p == NULL)
    {
        fprintf(stderr, "Error allocating memory\n");
        return 1;
    }

    printf("Array element values before modification: \n");

    for (int i = 0; i < 10; i++)
    {
        p[i] = (i + 1) * 100;
        printf("p[%d]: %.2lf\n", i, p[i]);
    }

    printf("How many elements do you want to reduce to? (Enter a number between 1 and 10)\n");
    scanf("%d", &user_input);

    if (user_input > 10 || user_input < 1)
    {
        fprintf(stderr, "Invalid number entered\n");
        free(p);
        return 1;
    }

    double *new_p = realloc(p, sizeof(double) * user_input);

    if (new_p == NULL)
    {
        fprintf(stderr, "Error reallocating memory\n");
        free(p);
        return 1;
    }

    p = new_p;

    printf("Array element values before modification: \n");
    for (int i = 0; i < user_input; i++)
    {
        printf("p[%d]: %.2lf\n", i, p[i]);
    }

    free(p);

    p = NULL;

    return 0;

}