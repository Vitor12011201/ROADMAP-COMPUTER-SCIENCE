#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // for memset

/* OBJECTIVE: Compare calloc with malloc + memset, showing that calloc
   is more concise and safer for allocating zeroed arrays. */

int main() {
    int elements = 6;
    int *p1, *p2;

    // Method 1: calloc already zeroes automatically
    if ((p1 = calloc(elements, sizeof(int))) == NULL) {
        perror("calloc failed");
        exit(EXIT_FAILURE);
    }

    // Method 2: malloc + memset (two steps)
    if ((p2 = malloc(elements * sizeof(int))) == NULL) {
        perror("malloc failed");
        free(p1);   // free previously allocated memory before exiting
        exit(EXIT_FAILURE);
    }
    memset(p2, 0, elements * sizeof(int));  // zero manually

    // Now both arrays are zeroed
    printf("p1 (calloc) - first values: %d %d %d\n", p1[0], p1[1], p1[2]);
    printf("p2 (malloc+memset) - first values: %d %d %d\n", p2[0], p2[1], p2[2]);

    // Free everything
    free(p1);
    free(p2);
    p1 = NULL;
    p2 = NULL;

    return 0;
}