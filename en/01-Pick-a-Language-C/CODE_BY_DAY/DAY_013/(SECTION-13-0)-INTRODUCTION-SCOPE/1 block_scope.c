#include <stdio.h>
#include <stdlib.h>

/* OBJECTIVE: Show block scope (within curly braces {}) and how local
   variables are "born" and "die" upon entering and exiting the block.
   Also demonstrate that inner blocks can hide outer variables. */

int main() {
    int x = 10;   // local variable to main

    printf("Outside the inner block: x = %d\n", x);

    // Start of a new block (nested scope)
    {
        int x = 20;   // This variable HIDES the x from main within this block
        printf("Inside the inner block: x = %d\n", x);

        // We can have an even more inner block
        {
            int x = 30;
            printf("Inside the innermost block: x = %d\n", x);
        } // x = 30 dies here

        printf("Back to the inner block (x is still %d)\n", x);
    } // x = 20 dies here

    printf("Outside again: x = %d (the original)\n", x);

    return 0;
}