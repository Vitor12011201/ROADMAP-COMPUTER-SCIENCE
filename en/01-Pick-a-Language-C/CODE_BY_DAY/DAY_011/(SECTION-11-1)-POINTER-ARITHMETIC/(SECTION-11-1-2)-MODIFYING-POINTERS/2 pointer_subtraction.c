#include <stdio.h>

/* OBJECTIVE: Demonstrate that pointers can also "walk backward" in memory
   using the decrement operator (--). */

int main() {
    int a[] = {10, 20, 30};
    int *p = &a[2]; // We start at the LAST element (30)

    printf("Reading from back to front:\n");
    while (p >= &a[0]) {
        printf("%d ", *p);
        p--; // Moves to the PREVIOUS address
    }
    printf("\n");

    return 0;
}