/* Basic C Pointer Demonstration:
- 1. Storing memory addresses.
- 2. Value manipulation via dereferencing (*).
*/

#include <stdio.h>

int main() {
    int x = 10;
    // 'int *p' declares a pointer to an integer
    // '&x' gets the address of x
    int *p = &x;

    printf("x = %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("p stores: %p\n", p);
    printf("Value pointed to by p: %d\n", *p);

    // Dereferencing: changing the value at the address p points to
    *p = 20;

    printf("New x = %d\n", x);
    printf("Value pointed to by p: %d\n", *p);

    return 0;
}