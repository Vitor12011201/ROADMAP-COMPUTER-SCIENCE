/*
Objective: count character categories in text received from the command line.

Usage:
    ./app <text>

Example:
    ./app "Study C 2026!"
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    const char *text;
    size_t letters = 0;
    size_t digits = 0;
    size_t spaces = 0;
    size_t others = 0;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <text>\n", argv[0]);
        return EXIT_FAILURE;
    }

    text = argv[1];

    while (*text != '\0') {
        unsigned char character = (unsigned char)*text;

        if (isalpha(character)) {
            letters++;
        } else if (isdigit(character)) {
            digits++;
        } else if (isspace(character)) {
            spaces++;
        } else {
            others++;
        }

        text++;
    }

    printf("Letters: %zu\n", letters);
    printf("Digits: %zu\n", digits);
    printf("Spaces: %zu\n", spaces);
    printf("Others: %zu\n", others);

    return EXIT_SUCCESS;
}
