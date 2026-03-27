/* Objective: See struct copying in action.
1. Create a Coordinate struct with int x and int y.
2. In main, create p1 with values (10, 20).
3. Create p2 and set p2 = p1;.
4. Change p2.x to 99.
5. Print p1.x and p2.x. */

#include <stdio.h>

struct coordinate {
    int x;
    int y;
};

int main() {
    struct coordinate p1 = {.x = 10, .y = 20};
    struct coordinate p2;

    p2 = p1;

    p2.x = 99;

    printf("Coordinate p1.x is: [%d]\n", p1.x);
    printf("Coordinate p2.x is: [%d]\n", p2.x);

    return 0;
}