#include <stdio.h>

/* OBJECTIVE: Show the compiler promoting a smaller type to a larger one
   automatically in a mixed mathematical operation. */

int main() {
    int item_count = 5;
    double unit_price = 19.90;

    /* What happens here: 'item_count' is implicitly transformed
       into double (5.0) before the multiplication. The operation is double * double. */
    double total_purchase = item_count * unit_price;

    printf("--- Implicit Arithmetic Conversion ---\n");
    printf("Total automatically calculated as double: $ %.2f\n", total_purchase);

    return 0;
}