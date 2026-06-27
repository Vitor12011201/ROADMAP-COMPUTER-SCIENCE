#include <stdio.h>
#include <stdlib.h> // Required for the atoi() function

/* OBJECTIVE: Demonstrate the basic conversion of a purely numeric string
   to an 'int' type using the quick 'atoi' (ASCII To Integer) function. */

int main() {
    char text_number[] = "2026";

    // Converting the raw text to a real integer in RAM
    int current_year = atoi(text_number);

    // Proving the conversion by performing a basic arithmetic operation
    int years_passed = current_year - 2000;

    printf("Original text:   \"%s\"\n", text_number);
    printf("Converted number: %d\n", current_year);
    printf("Years passed:     %d\n", years_passed);

    return 0;
}