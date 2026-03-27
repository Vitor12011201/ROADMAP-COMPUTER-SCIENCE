/* Objective: Use the arrow operator for accumulation (sum) logic inside functions.
1. Create an Item struct with char *name and int quantity.
2. Create a function void add_to_stock(struct Item *i, int new_qty).
3. Inside it, use the arrow operator to add new_qty to the existing value: i->quantity += new_qty;.
4. In main, initialize an item with 10 units, call the function to add 5 more, and print the new total. */

#include <stdio.h>

struct item {
    char *name;
    int quantity;
};

void add_to_stock(struct item *i, int new_quantity) {

    i->quantity = i->quantity + new_quantity;
}

int main() {
    struct item gpu = {.name = "RTX 4060", .quantity = 10};

    printf("Before restocking item [%s], the stock quantity is: [%d units]\n", gpu.name, gpu.quantity);
    printf("\n");

    add_to_stock(&gpu, 5);

    printf("After restocking item [%s], the stock quantity is: [%d units]\n", gpu.name, gpu.quantity);

    return 0;
}