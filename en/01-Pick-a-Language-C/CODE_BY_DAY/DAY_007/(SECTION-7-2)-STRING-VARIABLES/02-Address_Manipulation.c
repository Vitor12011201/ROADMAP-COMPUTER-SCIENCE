#include <stdio.h>

/*
 * Goal: Prove that %s prints starting from the provided memory address.
 */
int main() {
    char *s = "Programming";

    // Prints the entire string
    printf("Full:    %s\n", s);

    // We pass the address of the 4th letter (index 3)
    // printf will read from there until it finds the \0
    printf("Sliced:  %s\n", s + 3); // Will print "gramming"

    return 0;
}