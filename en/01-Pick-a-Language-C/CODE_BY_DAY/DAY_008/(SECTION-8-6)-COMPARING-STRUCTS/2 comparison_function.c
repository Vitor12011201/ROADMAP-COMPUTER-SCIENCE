#include <stdio.h>
#include <string.h>

/* OBJECTIVE: Organize comparison logic within a reusable function.
 * This makes the main code much cleaner and more readable.
 */

struct Car {
    char *name;
    int speed;
};

// Returns 1 if equal, 0 if different
int are_cars_equal(struct Car c1, struct Car c2) {
    if (c1.speed != c2.speed) return 0;
    if (strcmp(c1.name, c2.name) != 0) return 0;

    return 1; // If it passed the tests above, they are equal
}

int main() {
    struct Car a = {.name = "Beetle", .speed = 120};
    struct Car b = {.name = "Ferrari", .speed = 300};

    if (are_cars_equal(a, b)) {
        printf("The cars are identical.\n");
    } else {
        printf("The cars are distinct.\n");
    }

    return 0;
}