#include <stdio.h>

/* OBJECTIVE: Demonstrate how to use suffixes (U, L, LL) to take control
   and force the compiler to allocate specific sizes for numeric constants,
   even if the number is small and fits in a standard int. */

int main() {
    // The number 10 fits in 4 bytes (int), but we'll force the CPU to treat them with other sizes
    printf("Size of plain '10' (default int):    %zu bytes\n", sizeof(10));
    
    // Suffix L forces it to become Long
    printf("Size of '10L' (Long int):          %zu bytes\n", sizeof(10L));
    
    // Suffix LL forces it to become Long Long (guaranteed 64 bits)
    printf("Size of '10LL' (Long Long int):    %zu bytes\n", sizeof(10LL));
    
    // Suffix ULL combines Unsigned with Long Long
    printf("Size of '10ULL' (Unsigned LL):     %zu bytes\n", sizeof(10ULL));

    return 0;
}