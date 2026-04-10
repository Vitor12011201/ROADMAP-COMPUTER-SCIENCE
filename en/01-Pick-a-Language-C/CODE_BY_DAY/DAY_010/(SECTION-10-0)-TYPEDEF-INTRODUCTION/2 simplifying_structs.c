#include <stdio.h>

/* OBJECTIVE: Use typedef to avoid writing 'struct' every time.
 */

// We define the struct and immediately give it the alias 'Point'
typedef struct {
    int x;
    int y;
} Point;

int main() {
    // Without typedef, you would have to write: struct Point p1;
    Point p1 = {10, 20};

    printf("Coordinates: %d, %d\n", p1.x, p1.y);

    return 0;
}