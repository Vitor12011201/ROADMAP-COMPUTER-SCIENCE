#include <stdio.h>

/*
 * Goal: Demonstrate how to prevent mutation attempts at compile time.
 */

int main() {
    // 'const' warns: "Do not try to change what this pointer points to"
    const char *message = "Protected Message";

    printf("%s\n", message);

    // If you tried to do: message[0] = 'A';
    // The compiler would throw an ERROR and wouldn't even generate the executable.

    return 0;
}