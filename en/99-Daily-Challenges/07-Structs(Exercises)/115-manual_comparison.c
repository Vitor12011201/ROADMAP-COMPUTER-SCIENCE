/* Objective: Create a function that compares two points manually.
1. Create a Ponto (Point) struct with int x and int y.
2. Create a function int are_points_equal(struct point p1, struct point p2).
3. The function should return 1 (true) if Xs and Ys are equal, and 0 (false) otherwise.
4. In main, test with two equal points and two different points. */

#include <stdio.h>

struct point {
    int x;
    int y;
} ;

int are_points_equal(struct point p1, struct point p2) {

    if (p1.x == p2.x && p1.y == p2.y) {
        printf("The coordinates of both structs are equal\n");
        return 1;
    } else {
        printf("The coordinates of both structs are different\n");
        return 0;
    }
}

int main() {
    struct point coordinate_1 = {.x = 15, .y = 20};
    struct point coordinate_2 = {.x = 15, .y = 20};

    are_points_equal(coordinate_1, coordinate_2);

    return 0;
}