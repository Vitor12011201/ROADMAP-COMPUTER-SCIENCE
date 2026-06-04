#include <stdio.h>

/* OBJECTIVE: Use the 'short' and 'long long' modifiers to optimize
   memory usage or allow storing massive numbers. */

int main() {
    // 'short' guarantees a smaller integer (usually 16 bits / 2 bytes)
    // Perfect for saving memory on limited hardware (like TV boxes)
    short int planet_age_in_months = 120;

    // 'long long' guarantees a huge integer (usually 64 bits / 8 bytes)
    // Necessary for astronomical IDs or counting bytes in large files
    long long int streaming_bytes_transferred = 9223372036854775807LL;

    printf("Size of short: %zu bytes | Value: %d\n",
            sizeof(planet_age_in_months), planet_age_in_months);

    printf("Size of long long: %zu bytes | Value: %lld\n",
            sizeof(streaming_bytes_transferred), streaming_bytes_transferred);

    return 0;
}