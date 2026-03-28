#include <stdio.h>
#include <string.h>

/* OBJECTIVE: Show the correct way to compare two structs in C.
 * Since the '==' operator does not work for structs, we compare each member individually.
 */

struct Car {
    char *name;
    int speed;
};

int main() {
    struct Car a = {.name = "Saturn", .speed = 175};
    struct Car b = {.name = "Saturn", .speed = 175};

    // We check if names are equal (strcmp) AND if speeds are equal (==)
    if (strcmp(a.name, b.name) == 0 && a.speed == b.speed) {
        printf("The structs are EQUAL.\n");
    } else {
        printf("The structs are DIFFERENT.\n");
    }

    return 0;
}