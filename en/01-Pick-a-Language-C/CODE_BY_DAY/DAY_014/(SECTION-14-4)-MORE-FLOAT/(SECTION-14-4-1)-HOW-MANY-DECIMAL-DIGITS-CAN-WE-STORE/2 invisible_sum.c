#include <stdio.h>

/* OBJECTIVE: Simulate the classic problem. When we add a very small number
   to a large number, the float loses the smaller digits because they fall
   outside the "range" of its 6-digit precision. */

int main() {
    // 3.14159 has 6 significant digits (Safe!)
    float stable_pi = 3.14159f;
    
    // A tiny value we want to add
    float dust = 0.00000265358f; 

    // The actual result should be 3.14159265358
    stable_pi += dust;

    // Let's ask printf to show 11 decimal places to see the error
    printf("Expected result: 3.14159265358\n");
    printf("Actual C result: %.11f\n", stable_pi); 

    return 0;
}