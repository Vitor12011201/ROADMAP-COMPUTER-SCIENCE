/* Objective: Practice aligned_alloc syntax and verify alignment
Write a program that:
1. Allocate 128 bytes of memory with 16-byte alignment using aligned_alloc(16, 128).
2. Check if allocation was successful (pointer not NULL).
3. Fill the first 20 bytes with the string "Aligned!" using strcpy.
4. Print the pointer address (format %p) and the string.
5. Free the memory with free. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *p = _aligned_malloc(128, 16);

    if (p == NULL)
    {
        fprintf(stderr, "Error allocating memory\n");
        return 1;
    }

    strcpy(p, "Aligned!");

    printf("Address: %p\n", (void *)p);
    printf("String: %s\n", p);

    _aligned_free(p);

    p = NULL;

    return 0;
}