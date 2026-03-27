#include <stdio.h>

/* OBJECTIVE: Demonstrate how a function can manufacture and return an entire struct.
 * Upon returning, C creates a copy of the struct from the function to the variable in main.
 */

struct Car {
    char *name;
    int speed;
};

struct Car create_default_car() {
    struct Car new_car = {.name = "Base Model", .speed = 100};

    // We return the entire struct (by value), not a pointer
    return new_car;
}

int main() {
    struct Car my_car;

    // The variable receives the copy of what was created inside the function
    my_car = create_default_car();

    printf("Created Car: %s | Speed: %d\n", my_car.name, my_car.speed);

    return 0;
}