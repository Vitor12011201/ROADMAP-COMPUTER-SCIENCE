#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* OBJECTIVE: Implement a version of realloc for aligned memory
   (aligned_realloc) that allocates a new block with aligned_alloc, copies the data,
   and frees the old one. Although inefficient (always copies), it is necessary because
   standard realloc does not guarantee alignment. Applied to an array of structs. */

typedef struct {
    int id;
    char name[32];
    float value;
} Item;

// aligned_realloc: resizes aligned memory (always copies data)
// ptr: old pointer (can be NULL)
// old_size: old size in bytes (if ptr is NULL, use 0)
// alignment: desired alignment (power of two)
// new_size: new size in bytes (multiple of alignment)
void* aligned_realloc(void *ptr, size_t old_size, size_t alignment, size_t new_size) {
    // Allocate new aligned block
    void *new_ptr = aligned_alloc(alignment, new_size);
    if (new_ptr == NULL) {
        return NULL;   // allocation failed, old ptr remains intact
    }

    // Copy the minimum between old size and new size
    if (ptr != NULL) {
        size_t copy_size = (old_size < new_size) ? old_size : new_size;
        memcpy(new_ptr, ptr, copy_size);
        free(ptr);      // free the old block
    }

    return new_ptr;
}

int main() {
    size_t alignment = 16;          // 16-byte alignment
    size_t initial_elements = 3;
    size_t initial_size = initial_elements * sizeof(Item);
    // Ensure the size is a multiple of the alignment
    if (initial_size % alignment != 0) {
        initial_size += alignment - (initial_size % alignment);
    }

    // Allocate aligned array of Items
    Item *items = aligned_alloc(alignment, initial_size);
    if (items == NULL) {
        fprintf(stderr, "Initial allocation failed.\n");
        return 1;
    }

    // Fill the first 3 items
    for (int i = 0; i < initial_elements; i++) {
        items[i].id = i + 1;
        sprintf(items[i].name, "Item_%d", i + 1);
        items[i].value = (i + 1) * 10.5;
    }

    printf("Initial array (%zu elements):\n", initial_elements);
    for (int i = 0; i < initial_elements; i++) {
        printf("  %s: id=%d, value=%.1f\n", items[i].name, items[i].id, items[i].value);
    }

    // Resize to 6 elements (increase)
    size_t new_elements = 6;
    size_t new_size = new_elements * sizeof(Item);
    if (new_size % alignment != 0) {
        new_size += alignment - (new_size % alignment);
    }

    Item *temp = aligned_realloc(items, initial_size, alignment, new_size);
    if (temp == NULL) {
        fprintf(stderr, "Resizing failed.\n");
        free(items);
        return 1;
    }
    items = temp;

    // Initialize the new elements (indices 3,4,5)
    for (int i = initial_elements; i < new_elements; i++) {
        items[i].id = i + 1;
        sprintf(items[i].name, "Item_%d", i + 1);
        items[i].value = (i + 1) * 10.5;
    }

    printf("\nResized array (%zu elements):\n", new_elements);
    for (int i = 0; i < new_elements; i++) {
        printf("  %s: id=%d, value=%.1f\n", items[i].name, items[i].id, items[i].value);
    }

    // Check alignment of current pointer
    printf("\nCurrent pointer %p is aligned to %zu bytes? %s\n",
           (void*)items, alignment,
           ((unsigned long)items % alignment == 0) ? "Yes" : "No");

    free(items);
    return 0;
}