#include <stdio.h>

/* OBJECTIVE: Use hexadecimal literals (prefix 0x) combined with suffixes.
   Hexadecimals have slightly different promotion rules in C (they try to
   fit into unsigned before jumping to larger types), making suffix control vital. */

int main() {
    // 0xFF represents the number 255 in decimal (all 8 bits of a byte active: 11111111)
    // Widely used in bitmasks to isolate bytes of network data (such as in the Sunshine protocol)
    unsigned int clean_mask = 0xFFU;

    // Forcing a 64-bit mask using the UL suffix (Unsigned Long)
    // This ensures the compiler uses 64-bit registers for the bitwise operation
    unsigned long long_mask = 0xFFFFFFFFUL;

    printf("Mask 1 (Decimal): %u\n", clean_mask);
    printf("Mask 2 (Decimal): %lu\n", long_mask);
    printf("Size of long mask: %zu bytes\n", sizeof(0xFFFFFFFFUL));

    return 0;
}