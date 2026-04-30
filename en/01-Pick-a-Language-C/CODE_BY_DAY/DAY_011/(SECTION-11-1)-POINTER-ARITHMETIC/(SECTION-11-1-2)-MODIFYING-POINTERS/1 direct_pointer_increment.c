#include <stdio.h>

/* OBJECTIVE: Traverse an array by modifying the pointer value (p++) until
   a specific value (sentinel) is found, without using a counter 'i'. */

int main() {
    int a[] = {11, 22, 33, 44, 55, 999};
    int *p = a; // Points to the first element (11)

    // The loop continues as long as the CONTENT of p is not 999
    while (*p != 999) {
        printf("Value: %d | Address: %p\n", *p, (void*)p);

        p++; // Modifies the pointer to the NEXT int address
    }

    printf("End! The pointer stopped at value: %d\n", *p);
    return 0;
}