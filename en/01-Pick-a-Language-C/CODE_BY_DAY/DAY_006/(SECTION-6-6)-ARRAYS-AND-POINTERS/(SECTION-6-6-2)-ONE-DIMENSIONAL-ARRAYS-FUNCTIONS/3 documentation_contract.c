#include <stdio.h>

/**
 * Style (a[5])
 * The '[2]' here is just a visual reminder that we expect (x, y).
 */
void print_point(int point[2]) {
    printf("Coordinate: X=%d, Y=%d\n", point[0], point[1]);
}

int main() {
    int gps[] = {45, -12};
    print_point(gps);
    return 0;
}