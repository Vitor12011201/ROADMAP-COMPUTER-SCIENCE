/* Objective: Deal with multiple items of the same struct type.
1. Create a Product struct with: char *name, float price, and int stock.
2. In main, declare two variables: p1 and p2.
3. Fill p1 with a "Keyboard" ($ 150.00) and p2 with a "Mouse" ($ 80.00).
4. Calculate and print the total value if you bought the entire stock of both products combined. */

#include <stdio.h>

struct product {
    char *name;
    float price;
    int stock;
};

int main() {

    struct product p_1 = {"Keyboard", 150.0, 10};
    struct product p_2 = {"Mouse", 80.0, 15};

    printf("Product p_1: Name: [%s], Price: [%.2f], Quantity in stock: [%d]\n", p_1.name, p_1.price, p_1.stock);
    printf("Product p_2: Name: [%s], Price: [%.2f], Quantity in stock: [%d]\n", p_2.name, p_2.price, p_2.stock);

    printf("Total inventory value for [%s]: $ %.2f\n", p_1.name, p_1.price * p_1.stock);
    printf("Total inventory value for [%s]: $ %.2f\n", p_2.name, p_2.price * p_2.stock);

    float grand_total = (p_1.price * p_1.stock) + (p_2.price * p_2.stock);
    printf("Grand total value for all stock: $ %.2f\n", grand_total);

    return 0;
}