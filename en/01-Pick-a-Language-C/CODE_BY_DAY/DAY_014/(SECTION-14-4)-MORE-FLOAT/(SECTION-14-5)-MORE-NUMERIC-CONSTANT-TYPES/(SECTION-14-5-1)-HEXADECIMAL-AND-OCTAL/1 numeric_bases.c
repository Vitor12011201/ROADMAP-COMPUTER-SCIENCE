#include <stdio.h>

/* OBJECTIVE: Demonstrate how to declare the same numeric value using
   Decimal, Hexadecimal (0x), and Binary (0b) bases, and how to display them
   with the correct printf formatters. */

int main() {
    // All the values below represent exactly the number 42 in RAM
    int dec = 42;
    int hex = 0x2A;    // 2 * 16 + 10 = 42 (uppercase or lowercase works: 0x2a)
    int bin = 0b101010; // Widely accepted extension (C23/GCC/Clang)

    printf("--- Displaying the number 42 in various ways ---\n");
    printf("In decimal base:     %d\n", dec);
    printf("In hexadecimal base: %x (using %%x)\n", hex);
    printf("In hexadecimal base: %X (using %%X in uppercase)\n", hex);
    
    // Proving that to the CPU they are strictly the same thing:
    if (dec == hex && hex == bin) {
        printf("\nConfirmed: They all occupy the same bits in the register!\n");
    }

    return 0;
}