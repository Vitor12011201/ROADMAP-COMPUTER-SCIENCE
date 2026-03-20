#include <stdio.h>

/*
 * Goal: Change specific characters in a char array.
 */
int main() {
    char greeting[] = "hello";

    // Changing 'h' to 'H' and 'e' to 'E' via index
    greeting[0] = 'H';
    greeting[1] = 'E';
    greeting[2] = 'L';
    greeting[3] = 'L';
    greeting[4] = 'O';

    printf("Modified string: %s\n", greeting); // Prints "HELLO"

    return 0;
}