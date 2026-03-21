#include <stdio.h>

/*
 * Goal: Show that array initialization creates a writable COPY.
 */

int main() {
    // Here, C copies the bytes from "Mutable" into its own array 't'
    char t[] = "Mutable";

    printf("Before: %s\n", t);

    // Since 't' is an array in your scope, you can change the values
    t[0] = 'm';
    t[5] = 'i';

    printf("After:  %s\n", t); // Prints "mutabile"
    return 0;
}