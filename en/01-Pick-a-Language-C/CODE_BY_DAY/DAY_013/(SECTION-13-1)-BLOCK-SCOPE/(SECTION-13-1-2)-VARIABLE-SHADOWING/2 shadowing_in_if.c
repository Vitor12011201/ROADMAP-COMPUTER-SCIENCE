#include <stdio.h>

/* OBJECTIVE: Show shadowing inside an 'if' block.
   The variable declared inside the 'if' exists only there and hides the global. */

int counter = 100;   // Global variable (file scope)

int main() {
    int counter = 50;   // Local to main, hides the global

    printf("In main, before the if: counter = %d\n", counter);

    if (counter > 0) {
        int counter = 999;   // Hides the one from main inside the if
        printf("Inside the if: counter = %d\n", counter);
    }

    printf("After the if: counter = %d (back to main's)\n", counter);

    return 0;
}