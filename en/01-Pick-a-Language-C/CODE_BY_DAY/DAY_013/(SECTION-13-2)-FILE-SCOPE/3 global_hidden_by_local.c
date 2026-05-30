#include <stdio.h>

/* OBJECTIVE: Show that a local variable (inside a function) with the
   same name as a global variable hides the global within that function.
   The global is not modified unless explicitly accessed
   (which is not possible directly when hidden). */

int value = 100;   // Global variable

void function_with_local() {
    int value = 50;   // This LOCAL variable hides the global inside the function
    printf("Inside the function: value = %d (local, not the global)\n", value);

    // To access the global here, it's not possible because it's hidden.
    // In C, there is no way to access the global if a local with the same name exists.
}

void function_without_local() {
    // This function has no local 'value' variable, so it uses the global
    printf("Inside the function without local: value = %d (global)\n", value);
}

int main() {
    printf("In main (before): global value = %d\n", value);
    function_with_local();
    function_without_local();
    printf("In main (after): global value is still = %d (was not modified)\n", value);
    return 0;
}