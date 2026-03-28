/* Objective: Practice a function that returns an entire struct (instead of a pointer).
1. Create a Rectangle struct with float width and float height.
2. Create a function struct Rectangle create_square(float side).
3. Inside the function, declare a temporary struct, set both width and height to the side value, and return it.
4. In main, receive this return: struct Rectangle r = create_square(5.0);.
5. Print the area of the received rectangle. */

#include <stdio.h>

struct rectangle {
    float width;
    float height;
};

struct rectangle create_square(float side) {
    struct rectangle r;
    r.width = side;
    r.height = side;
    return r;
}

int main() {

    struct rectangle r = create_square(5.00);

    float area = r.width * r.height;

    printf("The area of the received rectangle is: %.2f\n", area);

    return 0;
}