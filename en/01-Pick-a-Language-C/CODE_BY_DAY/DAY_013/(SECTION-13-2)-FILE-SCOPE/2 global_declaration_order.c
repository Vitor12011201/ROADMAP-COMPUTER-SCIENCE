#include <stdio.h>

/* OBJECTIVE: Show that a file-scope variable needs to be declared before it is used.
   If declared later, previous functions cannot see it. To solve this, we can use a forward
   declaration (extern) or move the variable up. */

// Prototype (declaration) of the function that uses the global variable
void use_global(void);

int global = 42;   // Global variable declaration NOW visible to the rest

int main() {
    printf("main: global = %d\n", global);
    use_global();
    return 0;
}

void use_global(void) {
    // This function comes AFTER the global declaration, so it sees it
    printf("use_global: global = %d\n", global);
}