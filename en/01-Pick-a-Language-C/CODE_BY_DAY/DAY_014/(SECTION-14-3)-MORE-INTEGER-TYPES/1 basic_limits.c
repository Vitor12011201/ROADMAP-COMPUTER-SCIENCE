#include <stdio.h>
#include <limits.h> // Library containing limit macros

/* OBJECTIVE: Print the actual size and value limits of 'short' and 'int'
   on your current system, using portable C macros. */

int main() {
    // Displaying size in bytes and limits of 'short' (usually 2 bytes)
    printf("SHORT: %zu bytes | Min: %d | Max: %d\n",
            sizeof(short), SHRT_MIN, SHRT_MAX);

    // Displaying size in bytes and limits of 'int' (usually 4 bytes)
    printf("INT:   %zu bytes | Min: %d | Max: %d\n",
            sizeof(int), INT_MIN, INT_MAX);

    return 0;
}