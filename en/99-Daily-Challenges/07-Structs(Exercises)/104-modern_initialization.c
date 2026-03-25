/* Objective: Practice named initialization (Designated Initializers) and see that order does not matter.
1. Create a Smartphone struct with: char *model, int ram, and float price.
2. In main, initialize a variable s1 using the dot syntax, but change the order: put the price first, then the model, and finally the ram.
3. Print the values to confirm that C organized everything correctly. */

#include <stdio.h>

struct smartphone {
    char *model;
    int ram;
    float price;
};

int main() {

    struct smartphone s_1 = {.price = 1999.99, .model = "Samsung S3", .ram = 8};

    printf("The phone model is: [%s]\n", s_1.model);
    printf("The amount of RAM in the phone is: [%d GB RAM]\n", s_1.ram);
    printf("The price of the phone is: [$ %.2f]\n", s_1.price);

    return 0;
}