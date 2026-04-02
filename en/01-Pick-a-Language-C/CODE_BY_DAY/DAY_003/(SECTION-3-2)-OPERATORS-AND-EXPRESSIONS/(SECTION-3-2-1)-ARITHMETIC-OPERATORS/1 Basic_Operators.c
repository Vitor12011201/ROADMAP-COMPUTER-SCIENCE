#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;

    int sum = a + b;           // 13
    int subtract = a - b;      // 7
    int multiply = a * b;      // 30

    // WARNING: Integer division ALWAYS results in an integer!
    int divide = a / b;        // Result: 3 (it discards everything after the decimal point)

    // MODULUS: The remainder of the division
    int remainder = a % b;      // Result: 1 (because 10 divided by 3 leaves 1)

    printf("Sum: %d, Remainder: %d, Integer Division: %d\n", sum, remainder, divide);

    return 0;
}