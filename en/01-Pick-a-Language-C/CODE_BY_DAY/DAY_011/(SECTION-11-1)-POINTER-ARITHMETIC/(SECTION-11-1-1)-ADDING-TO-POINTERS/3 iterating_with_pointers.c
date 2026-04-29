#include <stdio.h>

/* OBJECTIVE: Traverse an array by moving the original pointer (p++).
   Unlike *(p + i), here the address stored in 'p' changes with each iteration. */

int main() {
    int a[5] = {11, 22, 33, 44, 55};
    int *p = a;

    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *p); // Prints what p points to now
        p++;               // Moves p to the next int address
    }
    printf("\n");

    return 0;
}