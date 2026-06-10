#include <stdio.h>
#include <limits.h>

/* OBJECTIVE: Simulate monitoring large-scale data transfer.
   Demonstrate that a normal 'int' would fail due to overflow when exceeding 2 billion,
   making it necessary to use 'unsigned long long' for massive counters. */

int main() {
    // Simulating a scenario of bytes transmitted at high performance
    // The 'ULL' suffix tells the compiler that the constant is Unsigned Long Long
    unsigned long long bytes_transmitted = 18446744073709551610ULL;

    printf("Starting monitoring of large data volumes...\n");

    // Simulating the arrival of more network data packets
    for (int i = 0; i < 10; i++) {
        bytes_transmitted++;

        // Printing with the correct format specifier for unsigned long long (%llu)
        printf("Total accumulated: %llu bytes\n", bytes_transmitted);

        // Checking if we have reached the absolute hardware limit
        if (bytes_transmitted == ULLONG_MAX) {
            printf("\n[ALERT] The counter has reached the 64-bit maximum limit (%llu)!\n", ULLONG_MAX);
        }
    }

    return 0;
}