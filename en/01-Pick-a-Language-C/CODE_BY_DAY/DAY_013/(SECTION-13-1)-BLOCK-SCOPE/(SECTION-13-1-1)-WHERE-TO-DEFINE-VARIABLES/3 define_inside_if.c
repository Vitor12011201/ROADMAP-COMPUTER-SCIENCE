#include <stdio.h>

/* OBJECTIVE: Show that we can define variables inside inner blocks
   (like an if), and they only exist within that block.
   This is useful for temporary variables that don't need to exist outside. */

int main() {
    int value = 5;

    if (value > 0) {
        int temp = value * 2;   // defined inside the if
        printf("Inside the if: temp = %d\n", temp);
    }

    // Trying to use temp here would cause an error:
    // printf("%d\n", temp);   // ERROR: out of scope

    printf("Outside the if, value = %d\n", value);
    return 0;
}