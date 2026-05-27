#include <stdio.h>

/* OBJECTIVE: Show that a variable declared inside an inner block
   hides a variable with the same name from the outer block.
   Inside the block, the outer one becomes invisible. */

int main() {
    int value = 10;

    printf("Before the block: value = %d\n", value);

    {
        int value = 20;   // This hides the outer 'value' inside this block
        printf("Inside the block: value = %d\n", value);
    } // The inner 'value' dies here

    printf("After the block: value = %d (original)\n", value);

    return 0;
}