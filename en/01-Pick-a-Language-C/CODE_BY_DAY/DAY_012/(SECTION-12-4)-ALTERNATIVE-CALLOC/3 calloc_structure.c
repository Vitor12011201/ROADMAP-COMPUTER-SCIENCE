#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* OBJECTIVE: Use calloc to allocate an array of structures, ensuring
   that all fields (including pointers) are initialized to zero.
   This avoids garbage memory and invalid pointers. */

// Structure representing a product
typedef struct {
    int code;
    float price;
    char description[50];
    int *stock_ptr;  // pointer (will be NULL if calloc zeroes it)
} Product;

int main() {
    int total_products = 4;
    Product *products;

    // calloc zeroes all bytes: code=0, price=0.0, stock_ptr=NULL
    products = calloc(total_products, sizeof(Product));

    if (products == NULL) {
        fprintf(stderr, "Fatal error: Failed to allocate %d products.\n", total_products);
        return 1;
    }

    // Since calloc already zeroed everything, we don't need to initialize each field manually
    printf("Products allocated with calloc (all zeroed):\n");
    for (int i = 0; i < total_products; i++) {
        printf("Product %d: code=%d, price=%.2f, stock_ptr=%p\n",
               i, products[i].code, products[i].price, (void*)products[i].stock_ptr);
    }

    // Now we can fill only the ones we want
    products[0].code = 1001;
    products[0].price = 19.90;
    strcpy(products[0].description, "T-Shirt");

    products[1].code = 1002;
    products[1].price = 49.90;
    strcpy(products[1].description, "Jeans");

    printf("\nAfter filling some products:\n");
    printf("Product 0: %s - Code %d - $%.2f\n",
           products[0].description, products[0].code, products[0].price);
    printf("Product 1: %s - Code %d - $%.2f\n",
           products[1].description, products[1].code, products[1].price);

    // Free memory
    free(products);
    products = NULL;

    return 0;
}