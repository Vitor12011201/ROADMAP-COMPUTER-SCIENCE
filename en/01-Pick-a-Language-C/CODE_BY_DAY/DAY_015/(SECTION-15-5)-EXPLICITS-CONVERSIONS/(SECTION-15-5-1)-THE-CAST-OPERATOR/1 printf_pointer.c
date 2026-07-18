#include <stdio.h>

/* OBJECTIVE: Demonstrate how the '%p' formatter in printf strictly requires
   a pointer of type 'void*'. Use explicit cast to eliminate compilation warnings
   on stricter compilers. */

int main() {
    int transmission_rate = 3490;
    int *rate_pointer = &transmission_rate;

    printf("--- Safe Display of Memory Addresses ---\n");

    /* If we pass 'rate_pointer' (which is int*) directly, some compilers
       complain that %p expected 'void*'. The cast solves this cleanly. */
    printf("Actual variable address in RAM: %p\n", (void *)rate_pointer);

    return 0;
}