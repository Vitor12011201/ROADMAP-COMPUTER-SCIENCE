/*
Objective: remove excessive whitespace from text received from the command line.

Usage:
    ./app <text>

Example:
    ./app "  Study   C   daily  "
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

static void print_normalized(const char *text)
{
    int wrote_character = 0;
    int pending_space = 0;

    while (*text != '\0') {
        unsigned char character = (unsigned char)*text;

        if (isspace(character)) {
            if (wrote_character) {
                pending_space = 1;
            }
        } else {
            if (pending_space) {
                putchar(' ');
                pending_space = 0;
            }

            putchar(character);
            wrote_character = 1;
        }

        text++;
    }
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <text>\n", argv[0]);
        return EXIT_FAILURE;
    }

    print_normalized(argv[1]);
    putchar('\n');

    return EXIT_SUCCESS;
}
