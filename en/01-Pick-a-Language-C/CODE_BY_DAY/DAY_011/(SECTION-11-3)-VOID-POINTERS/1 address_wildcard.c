#include <stdio.h>

/* OBJECTIVE: Demonstrate that a void* can point to any data type without generating compiler warnings,
   serving as a generic container. */

int main() {
    int n = 10;
    float f = 3.14;
    char c = 'Z';

    void *ptr; // Generic pointer

    ptr = &n; // OK
    printf("Pointing to int: %p\n", ptr);

    ptr = &f; // OK
    printf("Pointing to float: %p\n", ptr);

    ptr = &c; // OK
    printf("Pointing to char: %p\n", ptr);

    return 0;
}