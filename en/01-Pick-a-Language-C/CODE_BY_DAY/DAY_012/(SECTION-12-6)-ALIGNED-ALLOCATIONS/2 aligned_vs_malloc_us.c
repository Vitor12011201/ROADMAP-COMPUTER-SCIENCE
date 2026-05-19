#include <stdio.h>
#include <stdlib.h>

/* OBJECTIVE: Compare addresses returned by malloc (default alignment)
   versus aligned_alloc with different alignments. Show that malloc already
   provides sufficient alignment for double (usually 8 or 16 bytes).
   aligned_alloc allows forcing larger alignments (cache line, etc). */

int main() {
    double *p_malloc;
    double *p_aligned_8;
    double *p_aligned_64;
    int elements = 8;
    int size_bytes = elements * sizeof(double);  // 8 * 8 = 64 bytes

    // 1. normal malloc (alignment sufficient for double)
    p_malloc = malloc(size_bytes);
    if (p_malloc == NULL) return 1;

    // 2. aligned_alloc with 8-byte alignment (minimum for double)
    p_aligned_8 = aligned_alloc(8, size_bytes);
    if (p_aligned_8 == NULL) {
        free(p_malloc);
        return 1;
    }

    // 3. aligned_alloc with 64-byte alignment (common cache line size)
    p_aligned_64 = aligned_alloc(64, size_bytes);
    if (p_aligned_64 == NULL) {
        free(p_malloc);
        free(p_aligned_8);
        return 1;
    }

    // Display addresses and check alignment
    printf("Allocation of %d bytes (%d doubles):\n", size_bytes, elements);
    printf("malloc:        %p (automatic alignment)\n", (void*)p_malloc);
    printf("aligned_alloc(8):  %p (mod 8 = %lu)\n", (void*)p_aligned_8,
           (unsigned long)p_aligned_8 % 8);
    printf("aligned_alloc(64): %p (mod 64 = %lu)\n", (void*)p_aligned_64,
           (unsigned long)p_aligned_64 % 64);

    // Fill the arrays with values
    for (int i = 0; i < elements; i++) {
        p_malloc[i] = i * 1.5;
        p_aligned_8[i] = i * 2.5;
        p_aligned_64[i] = i * 3.5;
    }

    printf("\nFirst values (p_aligned_64):");
    for (int i = 0; i < elements; i++) {
        printf(" %.1f", p_aligned_64[i]);
    }
    printf("\n");

    free(p_malloc);
    free(p_aligned_8);
    free(p_aligned_64);

    return 0;
}