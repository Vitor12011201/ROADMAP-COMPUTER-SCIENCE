/* Objective: Create an alias for a basic type and one for a struct to feel the difference in readability.
1. Use typedef to create an alias called Real for the float type.
2. Use typedef to define a struct named Coordinate containing int x and int y.
In main:
3. Declare a Real variable price = 10.50;.
4. Declare a Coordinate c = {10, 20};. (Notice that you should not use the word 'struct' here!).
5. Print the values of price and the coordinates c.x and c.y. */

#include <stdio.h>

typedef float Real;

typedef struct {
    int x;
    int y;
} Coordinate;

int main() {
    Real price = 10.50;

    Coordinate c = {.x = 10, .y = 20};

    printf("Price: $ %.2f\n", price);
    printf("Coordinates: (x = %d) and (y = %d)\n", c.x, c.y);

    return 0;
}