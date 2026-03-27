#include <stdio.h>

/* OBJECTIVE: Differentiate when to use the dot (.) and when to use the arrow (->).
 * If the variable is the struct itself, we use a dot. If it is a pointer, we use an arrow.
 */

struct Car {
    char *name;
    int speed;
};

int main() {
    struct Car beetle = {.name = "Beetle", .speed = 120};
    struct Car *ptr = &beetle;

    // Using DOT because 'beetle' is the struct variable itself
    printf("Via Dot:   %s\n", beetle.name);

    // Using ARROW because 'ptr' holds the address of the struct
    printf("Via Arrow: %s\n", ptr->name);

    return 0;
}