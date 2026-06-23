#include <stdio.h>

/* OBJECTIVE: Prove that floating-point constants are born as 'double' by default
   and demonstrate how to use the 'f' and 'L' suffixes to change this behavior on the Stack. */

int main() {
    // Why is the size of plain 3.14 8 bytes if a float is 4? Because it is born as double!
    printf("Size of plain literal '3.14':     %zu bytes (Double!)\n", sizeof(3.14));

    // Using the 'f' or 'F' suffix, we force the literal to be born as a 4-byte float
    printf("Size of literal '3.14f':         %zu bytes (Float!)\n", sizeof(3.14f));

    // Using the 'l' or 'L' suffix, we force maximum precision of Long Double
    printf("Size of literal '3.14L':         %zu bytes (Long Double!)\n", sizeof(3.14L));

    return 0;
}