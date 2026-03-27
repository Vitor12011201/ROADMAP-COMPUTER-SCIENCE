#include <stdio.h>

/* OBJECTIVE: Use the arrow operator inside a function to modify the original struct.
 * This is the most common way to use '->' in real-world C programming.
 */

struct Car {
    char *name;
    int speed;
};

// The function receives a pointer 'c' to avoid copying the entire struct
void update_speed(struct Car *c, int new_speed) {
    // Go to the address in 'c' and change the 'speed' field
    c->speed = new_speed;
}

int main() {
    struct Car saturn = {.name = "Saturn SL/2", .speed = 175};

    // We pass the address (&) to the function
    update_speed(&saturn, 200);

    printf("Updated Speed: %d km/h\n", saturn.speed);

    return 0;
}