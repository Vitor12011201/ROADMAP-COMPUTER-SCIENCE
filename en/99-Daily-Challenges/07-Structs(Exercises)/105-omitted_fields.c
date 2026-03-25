/* Objective: Understand what happens to fields that you do not initialize.
1. Create a car struct with attributes (name, price, speed).
2. Initialize a car called my_car by defining only .name = "Fusca".
3. Print the name, price, and speed. */

#include <stdio.h>

struct car {
    char *name;
    float price;
    int speed;
};

int main() {
    // Initializing only the name; omitted fields will be automatically zeroed
    struct car my_car = {.name = "Fusca"};

    printf("My car's name is: [%s]\n", my_car.name);

    // The print will show 0.00 because the attribute was not explicitly initialized
    printf("The car's price is: [%.2f]\n", my_car.price);

    // The print will show 0 because the attribute was not explicitly initialized
    printf("The car's speed is: [%d]\n", my_car.speed);

    return 0;
}