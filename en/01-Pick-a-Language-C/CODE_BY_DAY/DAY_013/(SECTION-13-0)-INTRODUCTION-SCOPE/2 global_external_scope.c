#include <stdio.h>
#include <stdlib.h>

/* OBJECTIVE: Compare global variables (file scope) with local variables.
   Show that a local variable with the same name hides the global one.
   Introduce 'extern' to access a global variable from another file. */

// GLOBAL VARIABLE (file scope)
int counter = 100;   // visible throughout the rest of this file

void example_function() {
    // Here the global variable 'counter' is visible (no local with the same name)
    printf("Inside example_function: global counter = %d\n", counter);

    // Modify the global
    counter = 200;
    printf("example_function modified counter to %d\n", counter);
}

int main() {
    printf("Start of main: global counter = %d\n", counter);

    // Create a LOCAL variable with the same name - HIDES the global in this scope
    int counter = 999;
    printf("Inside main (local variable): counter = %d\n", counter);

    // To access the global even with the local present, we can use explicit scope
    // (there is no 'global' keyword in C; but we can refer to the global
    // if there is no local, or use pointers. Let's demonstrate by calling a function)
    example_function();   // inside there, the global is visible and was modified

    printf("Back in main: local counter is still %d\n", counter);
    printf("The global counter is now %d (access directly?\n", counter);
    printf("To see the global, we cannot because the local hides it.\n");

    // If we needed to access the global even with a local, one solution is to use a global pointer
    // or declare an 'extern' reference elsewhere, but here we just illustrate.

    // Simulating access to the global via a pointer (not standard, but didactic)
    // The correct approach is to avoid conflicting names for global and local.

    printf("Tip: Avoid conflicting names. The global still exists in memory.\n");

    return 0;
}