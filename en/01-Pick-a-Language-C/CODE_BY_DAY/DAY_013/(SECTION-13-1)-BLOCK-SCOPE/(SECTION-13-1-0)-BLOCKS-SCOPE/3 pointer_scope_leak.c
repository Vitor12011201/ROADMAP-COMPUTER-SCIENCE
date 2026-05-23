#include <stdio.h>
#include <stdlib.h>

/* OBJECTIVE: Show the interaction between block scope and dynamic allocation.
   A pointer declared inside a block is a local variable; when the block ends,
   the pointer is destroyed, but the allocated memory PERSISTS (memory leak if
   the pointer is not saved or freed). Learn the technique of returning the
   pointer or using an outer scope. */

// Function that allocates memory and returns the pointer (bypasses scope)
int* allocate_external_block(int value) {
    int *p = (int*)malloc(sizeof(int));
    if (p == NULL) return NULL;
    *p = value;
    return p;  // The pointer is copied to the caller
}

int main() {
    printf("=== Caution: losing the pointer ===\n");

    // Block that allocates memory but loses the pointer
    {
        int *local_ptr = (int*)malloc(sizeof(int));
        if (local_ptr == NULL) {
            fprintf(stderr, "Allocation error\n");
            return 1;
        }
        *local_ptr = 42;
        printf("Inside the block: *local_ptr = %d\n", *local_ptr);
        // Did we forget to free(local_ptr) before leaving the block?
        // The pointer 'local_ptr' will be destroyed, but the allocated memory will NOT be freed
        // This causes a memory leak!
    } // 'local_ptr' ceases to exist, but the 4-byte (int) memory is still allocated
    printf("We left the block. The pointer was lost, memory leaked!\n");

    printf("\n=== Solution 1: free before the end of the block ===\n");
    {
        int *local_ptr = (int*)malloc(sizeof(int));
        if (local_ptr != NULL) {
            *local_ptr = 99;
            printf("Value = %d\n", *local_ptr);
            free(local_ptr);   // Free before losing the reference
            local_ptr = NULL;
        }
    } // Now no leak

    printf("\n=== Solution 2: return the pointer (or use an outer scope) ===\n");
    int *external_ptr = allocate_external_block(123);
    if (external_ptr != NULL) {
        printf("Pointer returned from function: %d\n", *external_ptr);
        free(external_ptr);   // Whoever allocated must free
        external_ptr = NULL;
    }

    printf("\n=== Solution 3: declare pointer in outer scope ===\n");
    int *saved;
    {
        int *local = (int*)malloc(sizeof(int));
        if (local != NULL) {
            *local = 777;
            saved = local;   // Assign to pointer from outer scope
        }
    }
    if (saved != NULL) {
        printf("Accessing via external pointer: %d\n", *saved);
        free(saved);
        saved = NULL;
    }

    return 0;
}