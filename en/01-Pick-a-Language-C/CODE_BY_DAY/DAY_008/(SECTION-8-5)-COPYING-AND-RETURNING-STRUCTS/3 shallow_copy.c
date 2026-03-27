#include <stdio.h>

/* OBJECTIVE: Warn about "Shallow Copy". When copying structs with pointers,
 * both structs end up pointing to the SAME memory location.
 */

struct Car {
    char *name; // Pointer to string
};

int main() {
    struct Car a = {.name = "Original"};
    struct Car b;

    // We copy the struct. The address of the 'name' pointer is copied.
    b = a;

    // If we change the content pointed to by 'a', 'b' will also see the change
    // because both 'name' pointers point to the same text.
    printf("Name A: %p (Address)\n", (void*)a.name);
    printf("Name B: %p (Same Address)\n", (void*)b.name);

    return 0;
}