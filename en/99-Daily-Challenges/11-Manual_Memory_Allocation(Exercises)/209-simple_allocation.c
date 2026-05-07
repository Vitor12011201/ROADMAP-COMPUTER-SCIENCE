/* OBJECTIVE: Practice allocating a single value and performing a safety check.
1. Allocate memory for a float.
2. Check if the pointer is null: 'if (p == NULL) { return 1; }'.
3. Store the value 3.14 in that memory.
4. Print the value and the memory address.
5. Release the memory and explain why we must not use 'printf("%f", *p)' after 'free(p)'.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float memory_val = 3.14;

    float *p = malloc(sizeof(float));

    if (p == NULL)
    {
        printf("Memory Error\n");
        return 1;
    }

    *p = memory_val;

    printf("Value: %.2f\n", *p);
    printf("Memory Address: %p\n", (void*)p);

    free(p);

    p = NULL;

    return 0;
}