#include <stdio.h>

/* OBJECTIVE: Show that function parameters also create a scope.
   A parameter with the same name as a global variable hides the global inside the function. */

int rate = 10;   // Global variable

// Function that has a parameter named 'rate' – hides the global
void calculate(int rate) {
    printf("Inside function: rate = %d (parameter, not the global)\n", rate);
    printf("If we wanted to access the global, we couldn't (it's hidden).\n");
}

int main() {
    int local = 5;

    printf("Global (before function): rate = %d\n", rate);
    calculate(99);
    printf("Global (after function): rate = %d (unchanged)\n", rate);

    return 0;
}