/* Objective: Understand the space difference between a standard int, a short int, and a long long int.
Instructions:
1. Declare three variables: a short int small;, an int normal;, and a long long int giant;.
2. Use the sizeof operator to find out how many bytes each of these three variables occupies in your computer's memory.
3. Print these sizes using printf. */

#include <stdio.h>

int main()
{

    short int small;
    int normal;
    long long int giant;

    printf("Size of variable (small): %zu Bytes\n", sizeof(small));
    printf("Size of variable (normal): %zu Bytes\n", sizeof(normal));
    printf("Size of variable (giant): %zu Bytes\n", sizeof(giant));

    return 0;

}