#include <stdio.h>

/* OBJECTIVE: Demonstrate the use of the 'unsigned' modifier.
   By removing the ability to store negative numbers, we double the
   positive capacity of the type in stack memory. */

int main() {
    // A normal (signed) int goes from about -2 billion to +2 billion
    int negative_balance = -50;

    // An unsigned int goes from 0 to about 4 billion
    unsigned int site_visitors = 4294967295U; // Maximum value for 32 bits

    printf("Balance: %d\n", negative_balance);
    printf("Visitors on nuppac.net: %u\n", site_visitors);

    // CAUTION: If you try to put a negative number into an unsigned:
    unsigned int error = -1;
    printf("What happens to -1 in unsigned: %u (Overflow!)\n", error);

    return 0;
}