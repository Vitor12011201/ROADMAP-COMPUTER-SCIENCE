/* Objective: Practice the "cluttered" dereferencing syntax (*p).field to understand the logic before the arrow operator.
1. Create a Book struct with char *title and float price.
2. Create a function void apply_discount(struct Book *b, float percentage).
3. Inside the function, change the price using the parentheses syntax: (*b).price = (*b).price - ((*b).price * percentage / 100);.
4. In main, use '&' to pass the book's address and verify if the price actually changed after the function call. */

#include <stdio.h>

struct book {
    char *name;
    float price;
};

void apply_discount(struct book *b, float percentage) {
    (*b).price = (*b).price - ((*b).price * percentage / 100);
}

int main() {
    struct book one_piece = {.name = "One Piece", .price = 33.99};

    printf("The current price of the manga [%s] is: [%.2f]\n", one_piece.name, one_piece.price);

    apply_discount(&one_piece, 20);

    printf("The price of the manga [%s] with a discount is: [%.2f]\n", one_piece.name, one_piece.price);

    return 0;
}