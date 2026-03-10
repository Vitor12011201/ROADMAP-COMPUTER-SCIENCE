#include <stdio.h>

/**
 * Accessing Memory Outside the Array
 * Objective: Demonstrate Undefined Behavior and "Memory Garbage".
 * WARNING: Do not use this type of access in real projects!
 */

int main() {
    int safe_values[3] = {10, 20, 30};

    printf("--- Accessing valid indices ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Index %d: %d\n", i, safe_values[i]);
    }

    printf("\n--- Crossing the boundary (Danger!) ---\n");
    // Let's try to read what is right after the array in memory
    for (int i = 3; i < 6; i++) {
        printf("Index %d (Garbage): %d\n", i, safe_values[i]);
    }

    return 0;
}