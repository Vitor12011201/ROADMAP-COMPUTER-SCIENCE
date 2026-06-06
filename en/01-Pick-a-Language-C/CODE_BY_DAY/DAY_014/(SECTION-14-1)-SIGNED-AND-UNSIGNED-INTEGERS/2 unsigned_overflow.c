#include <stdio.h>
#include <limits.h> // Contains limit constants like UINT_MAX

/* OBJECTIVE: Visualize the behavior of memory overflow. When an 'unsigned' variable
   exceeds its maximum limit, it resets and goes back to zero. */

int main() {
    // UINT_MAX represents the largest value that the unsigned int on your machine can hold
    unsigned int max_limit = UINT_MAX;

    printf("Maximum unsigned value possible on this system: %u\n", max_limit);

    // What happens if we add 1 to the maximum limit?
    unsigned int overflow_test = max_limit + 1;

    // The value "wraps around" the bit clock and returns to the minimum value (0)
    printf("Value after overflow (limit + 1): %u\n", overflow_test);

    return 0;
}