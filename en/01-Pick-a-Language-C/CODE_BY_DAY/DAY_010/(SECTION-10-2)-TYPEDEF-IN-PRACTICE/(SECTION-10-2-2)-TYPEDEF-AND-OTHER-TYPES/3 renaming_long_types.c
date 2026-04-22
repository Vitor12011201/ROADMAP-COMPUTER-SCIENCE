#include <stdio.h>

/* OBJECTIVE: Shorten types that have very long names in C.
   This prevents typing errors and visually cleans up the code. */

typedef unsigned long long u64; // Common alias for 64-bit unsigned integers

int main() {
    // Instead of writing 'unsigned long long' every time:
    u64 world_population = 8000000000ULL;

    printf("Estimated population: %llu\n", world_population);
    return 0;
}