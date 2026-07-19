/* Objective: Understand how casting a pointer drastically changes pointer arithmetic behavior (advancing positions in memory).
Instructions:
1. Declare an integer array: int array[4] = {10, 20, 30, 40};.
2. Create an integer pointer pointing to the start: int *ptr_int = array;.
3. Print the value of *(ptr_int + 1). You will see the number 20, because C knows that an int occupies 4 bytes and advances the correct offset.
4. Now, create a character pointer by explicit casting: char *ptr_char = (char *)array;.
5. Print the value of *(ptr_char + 1) as an integer (%d). */

#include <stdio.h>

int main()
{
    int array[4] = {10, 20, 30, 40};

    int *ptr_int = array;

    printf("*(ptr_int + 1): %d\n", *(ptr_int + 1));

    char *ptr_char = (char *)array;

    printf("*(ptr_char + 1): %d\n", *(ptr_char + 1));

    return 0;
}