#include <stdio.h>

/* OBJECTIVE: Combine numeric conversion with advanced string formatting,
   controlling the decimal places of a double and inserting textual prefixes. */

int main() {
    char formatted_price[16];
    double product_price = 1250.7583;

    /* In addition to converting, we can use '%.2f' to visually round
       to two decimal places and embed the currency symbol in the same string. */
    snprintf(formatted_price, sizeof(formatted_price), "$ %.2f", product_price);

    printf("Final string generated in the buffer: %s\n", formatted_price);

    return 0;
}