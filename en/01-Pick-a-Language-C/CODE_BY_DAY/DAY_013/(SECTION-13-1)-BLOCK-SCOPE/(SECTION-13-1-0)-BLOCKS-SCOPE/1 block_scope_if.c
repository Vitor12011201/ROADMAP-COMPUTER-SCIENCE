#include <stdio.h>

/* OBJECTIVE: Show that variables declared inside a block (here,
   the 'if' block) are not accessible outside it. Variables from the
   outer block (main) are visible inside the inner block. */

int main() {
    int a = 12;   // Variable from main's scope

    printf("Before the block: a = %d\n", a);

    if (a == 12) {
        // Inner block: we can access 'a' from the outer scope
        int b = 99;   // LOCAL variable to this block
        printf("Inside the block: a = %d, b = %d\n", a, b);
    } // End of block - 'b' dies here

    printf("Outside the block: a = %d (still alive)\n", a);

    // Trying to use b here would cause a compilation error:
    // printf("%d\n", b);  // ERROR! 'b' is not declared in this scope

    return 0;
}