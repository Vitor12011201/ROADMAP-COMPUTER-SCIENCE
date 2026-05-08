#include <stdio.h>
#include <stdlib.h>

/* OBJECTIVE: Perform allocation and verify if the pointer is null before any use.
   If it fails, we report the error and stop execution safely. */

int main() {
    int *p = malloc(sizeof(int) * 100);

    // Always check! If p is NULL, *p = 10 would cause a crash.
    if (p == NULL) {
        fprintf(stderr, "Fatal error: Failed to allocate memory.\n");
        return 1; // Terminates the program with an error code
    }

    // If it reaches here, the memory is guaranteed
    p[0] = 10;
    printf("Success! First element: %d\n", p[0]);

    free(p);
    return 0;
}