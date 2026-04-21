#include <stdio.h>

/* OBJECTIVE: Create a nameless (anonymous) struct using only the alias 'Point'.
   The code becomes cleaner, but the keyword 'struct Point' ceases to exist. */

typedef struct {
    int x, y;
} Point;

int main() {
    // Point p1 is much more direct and easier to read
    Point p1 = {20, 40};

    printf("Coordinate: %d, %d\n", p1.x, p1.y);
    return 0;
}