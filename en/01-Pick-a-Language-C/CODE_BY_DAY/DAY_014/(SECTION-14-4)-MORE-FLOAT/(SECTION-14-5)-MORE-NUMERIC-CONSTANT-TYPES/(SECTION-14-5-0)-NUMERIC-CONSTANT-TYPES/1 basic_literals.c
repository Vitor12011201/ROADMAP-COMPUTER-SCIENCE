#include <stdio.h>

/* OBJECTIVE: Demonstrate that plain numeric constants are born as 'int' by default.
   Show how to use the 'U' (or 'u') suffix to force the compiler to treat the literal
   as an unsigned type (unsigned int). */

int main() {
    // By default, the number 4200000000 exceeds the maximum limit of a signed 32-bit int.
    // The compiler will try to promote it to a larger type automatically (like long or long long).
    
    // Using the U suffix, we explicitly guarantee it is born as Unsigned Int
    unsigned int active_connections = 4000000000U;

    printf("Number forced as Unsigned: %u\n", active_connections);
    printf("Size occupied by the literal: %zu bytes\n", sizeof(4000000000U));

    return 0;
}