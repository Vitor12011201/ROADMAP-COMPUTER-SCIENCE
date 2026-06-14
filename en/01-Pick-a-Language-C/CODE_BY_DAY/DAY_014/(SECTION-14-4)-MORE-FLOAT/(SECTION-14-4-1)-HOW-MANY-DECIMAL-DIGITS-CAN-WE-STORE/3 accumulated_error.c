#include <stdio.h>

/* OBJECTIVE: Demonstrate how small precision losses below FLT_DIG
   accumulate in long loops, generating huge errors in real-time systems
   (such as frame counters or transfer rates). */

int main() {
    float time_float = 0.0f;
    double time_double = 0.0; // Double has DBL_DIG (15 digits), much safer

    // Simulating a loop that runs 100,000 times adding 0.1 milliseconds
    // 0.1 does not have an exact binary representation!
    for (int i = 0; i < 100000; i++) {
        time_float += 0.1f;
        time_double += 0.1;
    }

    // The correct result should be exactly 10000.0
    printf("--- Error Accumulation Comparison ---\n");
    printf("Expected result: 10000.000000\n");
    printf("Total with FLOAT:    %f (Error due to accumulation)\n", time_float);
    printf("Total with DOUBLE:   %f (Remained accurate)\n", time_double);

    return 0;
}