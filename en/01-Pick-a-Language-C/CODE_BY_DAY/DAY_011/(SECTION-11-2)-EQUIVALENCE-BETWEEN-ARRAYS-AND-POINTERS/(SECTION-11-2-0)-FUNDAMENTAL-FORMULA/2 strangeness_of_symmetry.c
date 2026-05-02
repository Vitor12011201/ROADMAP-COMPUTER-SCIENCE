#include <stdio.h>

/* OBJECTIVE: Show that, because the formula is a sum (a+i is the same as i+a), the syntax i[a] technically works in C,
   although it is considered a very bad practice. */

int main() {
    int a[] = {10, 20, 30};

    // If a[1] == *(a + 1), then 1[a] == *(1 + a)
    // It works, but DO NOT use this in production! It is only to understand the mathematics.
    printf("Element at index 1: %d\n", 1[a]);

    return 0;
}