#include <stdio.h>

// For types, the use of parentheses is mandatory: sizeof(int)

int main() {

    printf("=== SIZE OF TYPES ===\n");
    printf("Size of type (int): %zu bytes\n", sizeof (int));
    printf("Size of type (double): %zu bytes\n", sizeof (double));
    printf("Size of type (char): %zu bytes\n", sizeof (char));

    return 0;
}