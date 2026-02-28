/* This example demystifies the use of sizeof with pointers.
* It demonstrates that sizeof(ptr) returns the size of the memory address,
 * while sizeof(*ptr) returns the size of the pointed data type,
 * reinforcing that sizeof operates on types, not values.*/

#include <stdio.h>

/**
 * This code demonstrates that the size of a pointer is fixed (address size),
 * regardless of the data type it points to.
 */

int main() {
    char letter = 'A';    // Occupies 1 byte
    char *ptr = &letter;  // Occupies 8 bytes (on 64-bit systems)

    printf("--- Size Analysis ---\n");

    // 1. How much space does the actual data occupy? (char)
    printf("Variable size (letter): %zu byte\n", sizeof(letter));

    // 2. How much space does the pointer occupy (the key/address)?
    printf("Pointer size (ptr):     %zu bytes\n", sizeof(ptr));

    // 3. How much space does the thing the pointer points to occupy? (same as char)
    // The '*' makes sizeof look at the CONTENT.
    printf("Size of *ptr:           %zu byte\n", sizeof(*ptr));

    return 0;
}