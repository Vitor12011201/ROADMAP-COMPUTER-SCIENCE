#include <stdio.h>

int main() {
    int x = 5;

    // Only the line immediately below is part of the if statement
    if (x == 10)
        printf("This will NOT appear.\n");

    printf("This ALWAYS APPEARS because it is outside the if statement.\n");

    return 0;
}