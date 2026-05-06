#include <stdio.h>
#include <stdlib.h>

/* OBJECTIVE: Allocate space for a single primitive type on the Heap and understand
   that the pointer returned by malloc must be handled with the correct type. */

int main() {
    // Allocates memory for 1 int. malloc returns void*, which C automatically
    // converts to int* during assignment.
    int *p = malloc(sizeof(int));

    // Best practice: check if the system ran out of memory
    if (p == NULL) return 1;

    *p = 12;
    printf("Value on the heap: %d\n", *p);

    // Freeing memory. The pointer 'p' still exists, but it's now "garbage" (dangling).
    free(p);

    // Safety technique: prevents accidental use of the pointer (dangling pointer).
    p = NULL;

    return 0;
}