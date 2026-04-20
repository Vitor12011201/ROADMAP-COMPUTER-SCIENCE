#include <stdio.h>

/* OBJECTIVE: Create a "Point" data type that does not require the 'struct' keyword.
 * This makes variable declarations much cleaner.
 */

typedef struct {
    int x;
    int y;
} Point; // The alias is placed at the end

int main() {
    // Without typedef: struct Point p1;
    // With typedef:
    Point p1 = {10, 20};

    printf("Coordinate: (%d, %d)\n", p1.x, p1.y);

    return 0;
}