#include <stdio.h>

/* OBJECTIVE: Prove that 'pointer->field' is exactly the same as '(*pointer).field'.
 * The arrow operator was created solely to make the code cleaner and easier to read.
 */

struct Car {
    char *name;
    float price;
};

int main() {
    struct Car saturn = {.name = "Saturn SL/2", .price = 0.0};
    struct Car *c = &saturn;

    // "Cluttered" and manual way (dereference + dot)
    (*c).price = 500.00;

    // "Clean" and professional way (arrow)
    c->price = 799.99;

    printf("Final Price: %.2f\n", saturn.price);

    return 0;
}