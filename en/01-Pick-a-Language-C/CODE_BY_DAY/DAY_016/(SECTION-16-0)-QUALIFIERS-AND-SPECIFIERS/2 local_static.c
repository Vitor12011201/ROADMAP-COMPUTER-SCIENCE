#include <stdio.h>

/* OBJECTIVE: Use the 'static' specifier on a local variable.
   Make a variable inside a function preserve its value in RAM
   even after the function finishes running, eliminating the need for dirty globals. */

void register_frame() {
    // Without 'static', this variable would be born and die (destroyed on the Stack) on each call.
    // With 'static', it is allocated in the data segment and keeps its value forever.
    static int frame_counter = 0;

    frame_counter++;
    printf("Processed frame ID: %d\n", frame_counter);
}

int main() {
    printf("--- Lifetime with the static Specifier ---\n");

    // We call the function multiple times. The internal state is preserved!
    register_frame();
    register_frame();
    register_frame();

    // printf("%d", frame_counter); // ERROR! The variable is invisible here in main. Total scope protection.

    return 0;
}