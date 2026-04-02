#include <stdio.h>

int main() {
    int number = 7;

    // x % 2 == 0 checks if the remainder of the division by 2 is zero
    printf("The number %d is %s.\n", number, (number % 2 == 0) ? "even" : "odd");

    return 0;
}