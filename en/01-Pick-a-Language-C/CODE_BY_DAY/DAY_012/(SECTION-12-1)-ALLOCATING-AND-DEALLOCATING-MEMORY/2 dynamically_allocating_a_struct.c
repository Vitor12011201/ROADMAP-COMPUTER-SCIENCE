#include <stdio.h>
#include <stdlib.h>

/* OBJECTIVE: Use malloc to create complex structures that persist in memory.
   Very useful for systems that create objects "on demand," such as users on a website. */

typedef struct {
    int id;
    float price;
} Product;

int main() {
    // Allocating space for an entire struct on the Heap
    Product *item = malloc(sizeof(Product));

    // Checking if the allocation was successful before accessing members
    if (item != NULL) {
        // Using the arrow operator (->) to access members through a pointer
        item->id = 501;
        item->price = 19.90;

        printf("Product %d costs $%.2f\n", item->id, item->price);

        // Releasing the memory occupied by the struct
        free(item);
    }

    return 0;
}