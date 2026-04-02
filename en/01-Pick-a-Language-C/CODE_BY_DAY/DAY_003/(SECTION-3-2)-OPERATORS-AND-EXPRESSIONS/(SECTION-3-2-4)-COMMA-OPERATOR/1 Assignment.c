#include <stdio.h>

int main() {
    int x;

    // C evaluates 1, then 2, and finally 3.
    // The value 3 is the one that "wins" and is assigned to x.
    x = (1, 2, 3);

    printf("x is equal to: %d\n", x); // Will print 3

    return 0;
}