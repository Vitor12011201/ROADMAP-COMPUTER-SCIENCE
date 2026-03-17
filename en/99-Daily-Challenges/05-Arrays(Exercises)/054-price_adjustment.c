#include <stdio.h>

/* Create a program that:
Declares a float array with a size of 4.
Uses a for loop to ask the user to type 4 product prices.
After reading, uses another for loop to print these prices, but with a detail:
apply a 10% increase to each value when printing. */

int main() {

    float price[4];

    for (int i = 0; i < 4; i++) {
        printf("Enter the value for product number [%d]: \n", i + 1);
        scanf("%f", &price[i]);
    }

    printf("The product values entered + 10 percent are: \n");

    for (int i = 0; i < 4; i++) {
        price[i] *= 1.10;
        printf("%.2f\n", price[i]);
    }

    return 0;
}