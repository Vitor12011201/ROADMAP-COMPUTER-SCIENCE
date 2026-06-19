#include <stdio.h>

/* OBJECTIVE: Work around printf's limitation, which has no native formatting
   specifier for binary. Build a function based on bitwise operators
   (Bitwise Shifts) to read and print the actual bits of a byte. */

void print_byte_binary(unsigned char byte) {
    // Loop from the most significant bit (bit 7) down to the least significant (bit 0)
    for (int i = 7; i >= 0; i--) {
        // Shift the target bit to the reading position and isolate it with the mask '& 1'
        int bit = (byte >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    // Defining a very common bitmask in networking and drivers (0x5A)
    unsigned char control_mask = 0x5A; // 90 in decimal

    printf("--- Hardware Bit Analyzer ---\n");
    printf("Decimal value:     %d\n", control_mask);
    printf("Hexadecimal value: 0x%X\n", control_mask);
    
    printf("Actual Binary Representation in RAM: ");
    print_byte_binary(control_mask);

    return 0;
}