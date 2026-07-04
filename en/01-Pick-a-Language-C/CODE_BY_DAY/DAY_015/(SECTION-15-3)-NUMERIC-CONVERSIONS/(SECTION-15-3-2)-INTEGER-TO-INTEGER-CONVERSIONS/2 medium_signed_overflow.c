#include <stdio.h>

/* OBJECTIVE: Observe the implementation-defined behavior when overflowing
   a signed type (short). Show how bit truncation on x86/ARM architecture
   turns a positive number into a negative one due to Two's Complement. */

int main() {
    // A signed short stores from -32768 to 32767
    int original_number = 32769;

    // Forcing 32769 into a space that only goes up to 32767
    // In most modern compilers, the upper bits are chopped off
    short signed_destination = original_number;

    printf("--- Signed Overflow Test (Architecture-Dependent) ---\n");
    printf("Original 32-bit number (int):   %d\n", original_number);
    
    /* The sign bit of the short (bit 15) ends up being activated by truncation,
       making the number negative in Two's Complement representation. */
    printf("Truncated 16-bit number (short): %d\n", signed_destination);

    return 0;
}