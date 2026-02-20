#include <stdio.h>

int main() {

    // For variables, parentheses are optional: sizeof a

    int a = 10;
    double b = 3.14;
    char c = 'V';

    printf("=== SIZE OF VARIABLES ===\n");
    printf("Size of variable 'a' (int): %zu bytes\n", sizeof a);
    printf("Size of variable 'b' (double): %zu bytes\n", sizeof b);
    printf("Size of variable 'c' (char): %zu bytes\n", sizeof c);

    return 0;
}