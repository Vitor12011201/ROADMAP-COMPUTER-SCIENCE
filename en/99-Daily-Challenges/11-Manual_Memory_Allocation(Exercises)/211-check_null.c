/* Objective: Practice the syntax for checking NULL return after malloc for a single block
Write a program that:
1. Declares a pointer int *p.
2. Dynamically allocates memory for a single integer using malloc(sizeof(int)).
3. Checks if the pointer is NULL after allocation. If so, prints the message "Critical failure: insufficient memory.\n" and terminates the program with return 1.
4. Otherwise, assigns the value 42 to the allocated integer, prints that value, and frees the memory with free.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *p;

    p = malloc(sizeof(int));

    if (p == NULL)
    {
        fprintf(stderr, "Critical failure: insufficient memory.\n");
        return 1;
    }

    *p = 42;

    printf("The value inside *p is: %d\n", *p);

    free(p);

    p = NULL;

    return 0;

}