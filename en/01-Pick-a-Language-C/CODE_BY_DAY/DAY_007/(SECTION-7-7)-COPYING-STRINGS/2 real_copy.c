#include <stdio.h>
#include <string.h> // Required for strcpy

/*
 * Goal: Create an independent copy of the string.
 */
int main() {
    char s[] = "C is amazing";
    char t[50]; // We create an empty "bucket" with enough space

    // strcpy(destination, source)
    // Think of it as: t = s (if '=' actually worked)
    strcpy(t, s);

    // Now we can change 't' without worrying about ruining 's'
    t[0] = 'X';

    printf("S (intact): %s\n", s); // "C is amazing"
    printf("T (altered): %s\n", t); // "X is amazing"

    return 0;
}