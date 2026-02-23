#include <stdio.h>

int main(void) {
    // A common variable that stores an integer
    int moons_of_mars = 2;

    // The '*' in the type indicates that this variable is a POINTER.
    // 'address_pointer' will store the address (the location) of an integer.
    int *address_pointer;

    // The '&' operator gets the ADDRESS of the variable 'moons_of_mars'
    // and stores it inside our pointer.
    address_pointer = &moons_of_mars;

    printf("Original value of the moons: %d\n", moons_of_mars);

    // The pointer only stores the "house" number (e.g., 0x7ffd...)
    printf("Address noted in the pointer: %p\n", (void *)address_pointer);

    // Using '&' directly on the variable results in the same address!
    printf("Real address in memory:       %p\n", (void *)&moons_of_mars);

    return 0;
}