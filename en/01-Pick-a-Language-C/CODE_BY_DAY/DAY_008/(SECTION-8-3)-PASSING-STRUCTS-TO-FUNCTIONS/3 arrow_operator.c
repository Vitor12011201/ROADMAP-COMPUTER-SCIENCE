#include <stdio.h>

/* OBJECTIVE: Use the arrow operator (->) to access members via pointer.
 * This is the standard and most readable way in C to manipulate structs within functions.
 */

struct Car {
    char *name;
    float price;
};

void set_price_arrow(struct Car *c, float new_price) {
    // The '->' operator replaces the cluttered '(*c).' syntax.
    // It says: "Go to where 'c' points and change the 'price'"
    c->price = new_price;
}

int main() {
    struct Car saturn = {.name = "Saturn SL/2", .price = 0.0};

    // Once again, we pass the address (&)
    set_price_arrow(&saturn, 950.00);

    printf("Final Price (via arrow): %.2f\n", saturn.price);

    return 0;
}