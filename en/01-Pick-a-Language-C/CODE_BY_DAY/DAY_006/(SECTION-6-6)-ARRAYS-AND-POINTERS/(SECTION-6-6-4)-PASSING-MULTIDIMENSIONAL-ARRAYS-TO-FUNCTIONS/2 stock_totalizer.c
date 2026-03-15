#include <stdio.h>

// Imagine a matrix where each row is a product and each column is a warehouse
void add_to_stock(int stock[][2], int product_id, int quantity) {
    // Directly modifies the value in the original memory
    stock[product_id][0] += quantity;
    printf("Stock for product %d updated!\n", product_id);
}

int main() {
    // 3 products, 2 warehouses each
    int warehouse[3][2] = {
        {10, 5}, // Product 0
        {20, 0}, // Product 1
        {0, 30}  // Product 2
    };

    // Adds 5 units to the first warehouse of Product 1
    add_to_stock(warehouse, 1, 5);

    // Now the original value is 25 (20 + 5)
    printf("New stock for Product 1, Warehouse 0: %d\n", warehouse[1][0]);

    return 0;
}