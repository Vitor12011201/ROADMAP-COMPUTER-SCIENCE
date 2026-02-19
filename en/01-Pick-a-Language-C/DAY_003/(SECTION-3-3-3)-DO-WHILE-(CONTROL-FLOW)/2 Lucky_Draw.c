#include <stdio.h>
#include <stdlib.h> // To use rand() and srand()
#include <time.h>   // To use time as a seed

int main() {
    int r;

    // Small trick: srand(time(NULL)) makes the numbers
    // different every time you run the program!
    srand(time(NULL));

    printf("Searching for the number 37...\n");

    do {
        r = rand() % 100; // Generates a number between 0 and 99
        printf("Drawn: %d\n", r);
    } while (r != 37); // Repeat WHILE the number is not 37

    printf("Finally found 37!\n");

    return 0;
}