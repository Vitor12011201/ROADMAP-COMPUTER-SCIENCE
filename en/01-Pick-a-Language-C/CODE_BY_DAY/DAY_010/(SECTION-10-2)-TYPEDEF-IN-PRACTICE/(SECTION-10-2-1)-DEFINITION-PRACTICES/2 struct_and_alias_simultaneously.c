#include <stdio.h>

/* OBJECTIVE: Define the struct and the alias in the same declaration.
   Saves space and maintains organization, while still allowing the use of the 'struct' keyword. */

typedef struct Vehicle {
    char *type;
    int wheels;
} vehicle_t;

int main() {
    vehicle_t v1 = {"Motorcycle", 2};
    struct Vehicle v2 = {"Car", 4}; // Still works!

    printf("A %s has %d wheels.\n", v1.type, v1.wheels);
    return 0;
}