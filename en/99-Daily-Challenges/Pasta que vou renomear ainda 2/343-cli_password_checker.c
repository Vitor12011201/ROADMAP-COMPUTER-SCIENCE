/*
Objective: evaluate basic password criteria received from the command line.

Usage:
    ./app <password>

Example:
    ./app "Study#2026"
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    const char *password;
    int has_uppercase = 0;
    int has_lowercase = 0;
    int has_digit = 0;
    int has_symbol = 0;
    size_t length = 0;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <password>\n", argv[0]);
        return EXIT_FAILURE;
    }

    password = argv[1];

    while (password[length] != '\0') {
        unsigned char character = (unsigned char)password[length];

        has_uppercase |= isupper(character) != 0;
        has_lowercase |= islower(character) != 0;
        has_digit |= isdigit(character) != 0;
        has_symbol |= ispunct(character) != 0;
        length++;
    }

    printf("Minimum length (8): %s\n", length >= 8 ? "ok" : "pending");
    printf("Uppercase letter: %s\n", has_uppercase ? "ok" : "pending");
    printf("Lowercase letter: %s\n", has_lowercase ? "ok" : "pending");
    printf("Digit: %s\n", has_digit ? "ok" : "pending");
    printf("Symbol: %s\n", has_symbol ? "ok" : "pending");

    if (length >= 8 && has_uppercase && has_lowercase && has_digit && has_symbol) {
        printf("Password approved.\n");
        return EXIT_SUCCESS;
    }

    printf("Password needs more requirements.\n");
    return EXIT_FAILURE;
}
