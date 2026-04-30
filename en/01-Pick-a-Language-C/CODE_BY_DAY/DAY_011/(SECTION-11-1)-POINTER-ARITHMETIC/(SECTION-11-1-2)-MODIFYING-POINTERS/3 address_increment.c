#include <stdio.h>

/* OBJECTIVE: Use the compact *p++ form, very common in professional C code,
   which reads the value and moves the pointer in a single line. */

int main() {
    int a[] = {5, 10, 15, 0}; // 0 is the sentinel
    int *p = a;

    // Reads the current value, and THEN increments the address
    while (*p != 0) {
        printf("Processing: %d\n", *p++);
    }

    return 0;
}