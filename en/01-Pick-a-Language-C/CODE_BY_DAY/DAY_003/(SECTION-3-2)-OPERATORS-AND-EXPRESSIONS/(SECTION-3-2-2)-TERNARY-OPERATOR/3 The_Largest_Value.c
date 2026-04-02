#include <stdio.h>

int main() {
    int a = 42;
    int b = 99;
    int max;

    // If a is greater than b, max gets a. Otherwise, it gets b.
    max = (a > b) ? a : b;

    printf("The largest number is: %d\n", max);

    return 0;
}