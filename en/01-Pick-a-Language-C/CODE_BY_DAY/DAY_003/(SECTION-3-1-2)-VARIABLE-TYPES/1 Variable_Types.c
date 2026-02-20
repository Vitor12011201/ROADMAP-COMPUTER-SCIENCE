#include <stdio.h>

int main() {
    // --- TYPE DECLARATIONS ---

    int age = 20;               // Integer (Including Negative Numbers)
    float height = 1.82;        // Decimal (Floating Point)
    char initial = 'V';         // Single character (single quotes)
    char *name = "Vitor";       // Text/String (double quotes)

    // --- ORGANIZED OUTPUT ---

    printf("=== MY DATA IN C ===\n\n");

    // Printing the Integer (%d)
    printf("Age: %d years\n", age);

    // Printing the Float (%f) - Using .2 to limit decimal places
    printf("Height: %.2f meters\n", height);

    // Printing the Char (%c)
    printf("Name initial: %c\n", initial);

    // Printing the String (%s)
    printf("Full name: %s\n", name);

    printf("\n=======================\n");

    return 0;
}