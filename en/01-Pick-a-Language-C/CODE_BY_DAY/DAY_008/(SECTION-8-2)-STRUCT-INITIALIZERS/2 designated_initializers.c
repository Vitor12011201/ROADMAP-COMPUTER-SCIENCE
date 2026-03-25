#include <stdio.h>

// Objective: Demonstrate how to initialize specific fields by name (.field), making the code immune to changes in the struct order.

struct Car {
    char *name;
    float price;
    int speed;
};

int main() {
    // We use the dot (.) to choose which field to fill, ignoring the order
    struct Car c2 = {.speed = 220, .name = "Ferrari"};

    // Note that .price was omitted and will be automatically 0.00
    printf("Name: %s | Speed: %d | Price: %.2f\n", c2.name, c2.speed, c2.price);
    return 0;
}