/* Declare a float f = 10.5;
Declare a pointer to this float: float *ptr;
Point the pointer to the variable: ptr = &f;
Print the address using %p and the ptr pointer. */

#include <stdio.h>

int main() {
    float f = 10.5;
    float *ptr;
    ptr = &f;
    printf("The address of variable f is: %p\n", (void *)ptr);
    printf("The address of variable f is: %p\n", (void *)&f);

    return 0;
}