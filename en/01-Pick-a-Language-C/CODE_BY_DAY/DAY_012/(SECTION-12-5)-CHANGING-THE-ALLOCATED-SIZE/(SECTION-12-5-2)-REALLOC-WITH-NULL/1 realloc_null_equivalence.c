#include <stdio.h>
#include <stdlib.h>

/* OBJECTIVE: Demonstrate that realloc(NULL, size) works exactly like
   malloc(size). Show two ways to allocate the same block. */

int main() {
    int *p1, *p2;
    int elements = 5;

    // Traditional way with malloc
    p1 = malloc(elements * sizeof(int));
    if (p1 == NULL) {
        fprintf(stderr, "Error: malloc failed.\n");
        return 1;
    }

    // Equivalent way with realloc starting from NULL
    p2 = realloc(NULL, elements * sizeof(int));
    if (p2 == NULL) {
        fprintf(stderr, "Error: realloc(NULL) failed.\n");
        free(p1);
        return 1;
    }

    printf("Both allocations succeeded!\n");
    printf("p1 (malloc): %p\n", (void*)p1);
    printf("p2 (realloc(NULL)): %p\n", (void*)p2);

    // Fill and print p2 to show it works normally
    for (int i = 0; i < elements; i++) {
        p2[i] = i * 10;
    }

    printf("Values in p2: ");
    for (int i = 0; i < elements; i++) {
        printf("%d ", p2[i]);
    }
    printf("\n");

    free(p1);
    free(p2);
    p1 = p2 = NULL;

    return 0;
}