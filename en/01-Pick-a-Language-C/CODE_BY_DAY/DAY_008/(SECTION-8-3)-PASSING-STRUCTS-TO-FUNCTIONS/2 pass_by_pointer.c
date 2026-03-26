#include <stdio.h>

/* OBJECTIVE: Pass a pointer to the struct and use dereferencing (*c).
 * This allows the function to change the actual value stored in the main memory.
 */

struct Car {
    char *name;
    float price;
};

void set_price_manual(struct Car *c, float new_price) {
    // We use parentheses to ensure C first reaches the struct (dereference)
    // and then accesses the .price field
    (*c).price = new_price;
}

int main() {
    struct Car saturn = {.name = "Saturn SL/2", .price = 0.0};

    // We pass the ADDRESS (&) of the struct to the pointer
    set_price_manual(&saturn, 799.99);

    printf("New Price (via dereferencing): %.2f\n", saturn.price);

    return 0;
}