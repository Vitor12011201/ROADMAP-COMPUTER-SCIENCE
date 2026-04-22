#include <stdio.h>

/* OBJECTIVE: Define specific types for counting.
   This makes it clear that the variable is not just any 'int',
   but rather a unit of measurement for quantity. */

typedef unsigned int quantity_t;

int main() {
    // It becomes much more readable to know the variable holds a quantity
    quantity_t car_stock = 15;
    quantity_t motorcycle_stock = 30;

    printf("Total items in stock: %u\n", car_stock + motorcycle_stock);
    return 0;
}