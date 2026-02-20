#include <stdio.h>

// Sizeof looks at the final result of the calculation and tells how much space the type of that result occupies.

int main() {
    // 2 + 7 results in an 'int', which usually occupies 4 bytes
    printf("Size of (2 + 7): %zu bytes\n", sizeof(2 + 7));

    // The literal 3.14 is treated as a 'double' by C, occupying 8 bytes
    printf("Size of the number 3.14: %zu bytes\n", sizeof 3.14);

    return 0;
}