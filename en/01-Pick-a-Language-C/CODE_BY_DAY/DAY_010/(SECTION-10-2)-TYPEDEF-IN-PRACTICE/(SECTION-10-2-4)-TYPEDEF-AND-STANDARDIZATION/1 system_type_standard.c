#include <stdio.h>

/* OBJECTIVE: Use the '_t' suffix in lowercase (snake_case).
   This pattern mimics the C standard library and is very common in Linux/Unix systems. */

typedef struct {
    int id;
    float price;
} product_t;

int main() {
    product_t p1 = {101, 4.50};
    printf("Product ID: %d\n", p1.id);
    return 0;
}