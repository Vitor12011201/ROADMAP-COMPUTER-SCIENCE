#include <stdio.h>

/* OBJECTIVE: Illustrate the only restriction: while a pointer is a variable that can "walk" (move),
   the array name is a fixed (constant) address that cannot be reassigned. */

int main() {
    int a[] = {10, 20, 30};
    int b[] = {40, 50, 60};
    int *p = a;

    p = b;     // OK! The pointer now points somewhere else.
    p++;       // OK! The pointer now points to 50.

    // a = b;  // COMPILATION ERROR! Array is not reassignable.
    // a++;    // COMPILATION ERROR! We cannot change the base address of the array.

    printf("Pointer p points to: %d\n", *p);
    return 0;
}