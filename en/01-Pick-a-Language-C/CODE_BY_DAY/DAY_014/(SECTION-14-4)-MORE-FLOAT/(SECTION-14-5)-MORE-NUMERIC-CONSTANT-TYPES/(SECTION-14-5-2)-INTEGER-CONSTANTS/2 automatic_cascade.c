#include <stdio.h>

/* OBJECTIVE: Visualize C11's "decision cascade" in practice. Show that
   without a suffix, the compiler dynamically increases the literal's type
   as the number grows to prevent the data from being born overflowed. */

int main() {
    // 2000000000 (2 billion) fits in a signed 32-bit int
    printf("Size of 2000000000:  %zu bytes\n", sizeof(2000000000));

    // 3000000000 (3 billion) does NOT fit in a signed 32-bit int.
    // C automatically cascades down and promotes the literal to 'long' or 'long long' (8 bytes)
    printf("Size of 3000000000:  %zu bytes (Automatically promoted!)\n", sizeof(3000000000));

    // Adding the U suffix, it fits back into 4 bytes as Unsigned Int!
    printf("Size of 3000000000U: %zu bytes (Forced to fit in 32-bit unsigned)\n", sizeof(3000000000U));

    return 0;
}