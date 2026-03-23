#include <stdio.h>

struct Car {
    char brand[20];
    int year;
};

/*
 * Goal: Show how code becomes more readable by grouping data.
 */
void display_car(struct Car c) {
    printf("Car: %s | Year: %d\n", c.brand, c.year);
}

int main() {
    struct Car my_car = {"BMW-I7", 2026};

    // We pass only ONE variable (the struct) instead of two
    display_car(my_car);

    return 0;
}