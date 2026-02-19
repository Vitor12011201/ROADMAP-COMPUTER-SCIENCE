#include <stdio.h>

int main() {
    int x = 15;
    int y = 100;

    // If x is greater than 10, add 17. Otherwise, add 37.
    y += (x > 10) ? 17 : 37;

    printf("The value of y is now: %d\n", y); // Will print 117

    return 0;
}