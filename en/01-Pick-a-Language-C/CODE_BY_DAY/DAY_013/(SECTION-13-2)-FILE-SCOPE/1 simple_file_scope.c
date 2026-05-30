#include <stdio.h>

/* OBJECTIVE: Show that a variable defined outside any function
   (file scope) is visible and shared by all functions
   that come after it in the same file. */

int counter = 10;   // File scope (global within this file)

void add_5() {
    counter += 5;   // Modifies the global variable
    printf("Inside add_5: counter = %d\n", counter);
}

void multiply_by_2() {
    counter *= 2;   // Modifies the same global variable
    printf("Inside multiply_by_2: counter = %d\n", counter);
}

int main() {
    printf("Start: counter = %d\n", counter);

    add_5();        // counter becomes 15
    multiply_by_2(); // counter becomes 30

    printf("End: counter = %d\n", counter);
    return 0;
}