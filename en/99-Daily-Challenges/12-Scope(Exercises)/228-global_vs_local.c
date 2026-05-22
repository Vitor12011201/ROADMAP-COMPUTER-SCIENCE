/* Objective: Apply concepts of global and local scope, showing how a global variable can be "masked" by a local one
Create a program with:
1. A global int variable counter = 0.
2. A function void increment_global(void) that increments the global counter.
3. A function void increment_local(void) that declares a local int variable counter = 100, increments this local variable, and prints its value.
In main:
4. Call increment_global() three times.
5. Print the value of the global counter.
6. Call increment_local() twice.
7. Print the global counter again. */

#include <stdio.h>

int counter = 0;

void increment_global(void) {
    counter++;
}

void increment_local(void) {
    int counter = 100;
    counter++;
    printf("Local variable value: %d\n", counter);
}

int main() {

    increment_global();
    increment_global();
    increment_global();
    printf("Global variable value: %d\n", counter);
    printf("\n");
    increment_local();
    increment_local();
    printf("\n");
    printf("Global variable value: %d\n", counter);

    return 0;
}