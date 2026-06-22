/* Objective: Prove the specification rule that C automatically promotes the type of a constant without a suffix to fit the value.
Instructions:
1. Use the sizeof operator directly on literal constants inside printf, without creating variables.
2. Print sizeof(2000) (a number that fits in a regular int).
3. Print sizeof(3000000000) (3 billion — a number that does not fit in a standard 32-bit int, which only goes up to 2.1 billion).
4. Print sizeof(3000000000U) (with the U suffix).
- What to observe: See how the size in bytes changes from one number to the other on the screen, proving that the compiler applied the table from the book and automatically promoted the larger number to long or long long. */

#include <stdio.h>

int main() {

    printf("sizeof(2000)        = %zu\n", sizeof(2000));
    printf("sizeof(3000000000)  = %zu\n", sizeof(3000000000));
    printf("sizeof(3000000000U) = %zu\n", sizeof(3000000000U));

    return 0;
}