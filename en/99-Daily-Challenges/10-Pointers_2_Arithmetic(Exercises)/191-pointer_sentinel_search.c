/* OBJECTIVE: Practice using 'while' with direct pointer modification.
1. Create an int array: {5, 12, 7, 20, 42, -1}. The -1 will be your sentinel.
2. Create a pointer 'p' pointing to the beginning.
3. Use a while loop (*p != -1) that prints the value and then performs p++.
4. After the loop, print the final address where the pointer stopped (where the -1 is).
*/

#include <stdio.h>

int main()
{
    int position = 0;
    int array[] = {5, 12, 7, 20, 42, -1};

    int *p = &array[0];

    while (*p != -1)
    {
        printf("Value at position[%d] of the array: %d\n", position, *p);
        p++;
        position++;
    }

    printf("Sentinel value at position[%d]: %d\n", position, *p);
    printf("Final pointer address (at -1): %p\n", (void*)p);

    return 0;
}