#include <stdio.h>

/* OBJECTIVE: Show how to copy all data from one struct to another using '='.
 * C automatically copies field by field from 'a' to 'b'.
 */

struct Car {
    char *name;
    int speed;
};

int main() {
    struct Car a = {.name = "Saturn SL/2", .speed = 175};
    struct Car b;

    // FULL COPY: 'b' now has the same values as 'a'
    b = a;

    printf("Car A: %s | Speed: %d\n", a.name, a.speed);
    printf("Car B: %s | Speed: %d (Copy of A)\n", b.name, b.speed);

    return 0;
}