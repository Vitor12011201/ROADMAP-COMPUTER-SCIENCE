#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* OBJECTIVE: Allocate memory with specific alignment (64 bytes)
   using aligned_alloc. The allocated size must be a multiple of the alignment.
   The returned memory will have an address multiple of 64. */

int main() {
    int alignment = 64;          // power of two, greater than zero
    int size = 256;              // 256 is a multiple of 64 (64 * 4)
    char *buffer;

    // Allocates 256 bytes aligned on a 64-byte boundary
    buffer = aligned_alloc(alignment, size);

    if (buffer == NULL) {
        fprintf(stderr, "Error: aligned_alloc failed. Alignment %d, size %d\n",
                alignment, size);
        return 1;
    }

    // Check if the pointer is actually aligned
    if ((unsigned long)buffer % alignment == 0) {
        printf("Success! Pointer %p is aligned to %d bytes.\n",
               (void*)buffer, alignment);
    } else {
        printf("Warning: pointer %p is not aligned (but it should be).\n", (void*)buffer);
    }

    // Use the memory normally
    strcpy(buffer, "Data aligned successfully!");
    printf("Content: %s\n", buffer);

    free(buffer);
    buffer = NULL;
    return 0;
}