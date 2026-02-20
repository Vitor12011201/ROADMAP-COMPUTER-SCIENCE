#include <stdio.h>

int main() {
    // 1. INT (Integers) -> Use %d or %i
    int age = 25;

    // 2. FLOAT (Single-precision decimals) -> Use %f
    float height = 1.75;

    // 3. DOUBLE (High-precision decimals) -> Use %lf (long float)
    double pi = 3.1415926535;

    // 4. CHAR (A single character) -> Use %c
    char initial = 'A';

    // 5. STRING (Character sequence) -> Use %s
    // Note: In C we use char* or arrays for strings
    char *name = "John";

    // --- PUTTING IT ALL TOGETHER IN PRINTF ---

    printf("User Report:\n");
    printf("---------------------\n");

    // You can print one by one:
    printf("Name: %s\n", name);

    // Or mix several in the same line (order matters!):
    printf("%s is %d years old and is %.2f meters tall.\n", name, age, height);

    // Example with char and double:
    printf("The initial is %c and the value of PI is %lf\n", initial, pi);

    return 0;
}