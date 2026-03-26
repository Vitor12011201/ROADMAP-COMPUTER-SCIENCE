#include <stdio.h>

/* OBJECTIVE: Demonstrate passing a struct by value.
 * The function receives a COPY. Changing the copy does not change the original in main.
 */

struct Car {
    char *name;
    float price;
};

void try_to_change_price(struct Car c) {
    c.price = 500.00; // Changes only the local copy within the function
}

int main() {
    struct Car saturn = {.name = "Saturn SL/2", .price = 16000.99};

    try_to_change_price(saturn);

    // The price remains 16000.99 because we passed by value
    printf("Original price: %.2f\n", saturn.price);

    return 0;
}