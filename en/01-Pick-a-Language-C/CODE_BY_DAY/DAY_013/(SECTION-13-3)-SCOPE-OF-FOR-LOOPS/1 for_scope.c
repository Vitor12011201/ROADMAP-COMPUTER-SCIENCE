#include <stdio.h>

/* OBJECTIVE: Demonstrate the basic scope of a variable declared inside the 'for' loop.
   The variable 'i' is born at the loop initialization and ceases to exist (dies on the Stack)
   as soon as the loop ends. */

int main() {
    // 'i' exists only within this control block
    for (int i = 0; i < 5; i++) {
        printf("Count: %d\n", i);
    }

    // If you try to uncomment the line below, the code will not compile:
    // printf("Final value of i: %d\n", i); // ERROR: 'i' undeclared

    return 0;
}