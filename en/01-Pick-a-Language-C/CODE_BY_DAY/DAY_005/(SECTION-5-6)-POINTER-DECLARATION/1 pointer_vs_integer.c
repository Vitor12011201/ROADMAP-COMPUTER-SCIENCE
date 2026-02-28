/**
* The Single-Line Declaration Trap
* Goal: Demonstrate that '*' binds to the variable, not the type.
*/

#include <stdio.h>

int main() {
    // In this line, only 'p1' is a pointer. 'v1' is a regular integer.
    int* p1, v1;

    p1 = &v1; // OK: p1 can receive an address
    v1 = 100; // OK: v1 stores a number

    printf("--- Type Analysis ---\n");
    printf("Size of p1 (pointer): %zu bytes\n", sizeof(p1));
    printf("Size of v1 (integer): %zu bytes\n", sizeof(v1));

    // Uncomenting the line below would cause a compilation error:
    // *v1 = 200; // Error! v1 is not a pointer.

    return 0;
}