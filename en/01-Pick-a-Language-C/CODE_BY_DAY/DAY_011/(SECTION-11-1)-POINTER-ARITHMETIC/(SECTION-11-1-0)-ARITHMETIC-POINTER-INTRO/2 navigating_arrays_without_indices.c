#include <stdio.h>

/* OBJECTIVE: Traverse an array using only pointer arithmetic and the dereference operator (*).
   This demonstrates that array[i] is just a shortcut for *(array + i). */

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int *p = numbers; // Points to the first element (index 0)

    for (int i = 0; i < 5; i++) {
        // Prints the value where 'p' points and then moves 'p' to the next int
        printf("Element %d: %d (Address: %p)\n", i, *p, (void*)p);
        p++;
    }

    return 0;
}