/*
Objective: count characters in words received from the command line.

Usage:
    ./app [--ignore-spaces] <text1> [text2 ...]

Examples:
    ./app "hello world" C
    ./app --ignore-spaces "hello world" C
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static size_t count_characters(const char *text, int ignore_spaces)
{
    size_t count = 0;

    while (*text != '\0') {
        unsigned char character = (unsigned char)*text;

        if (!ignore_spaces || !isspace(character)) {
            count++;
        }

        text++;
    }

    return count;
}

int main(int argc, char *argv[])
{
    int first_index = 1;
    int ignore_spaces = 0;
    size_t total = 0;

    if (argc > 1 && strcmp(argv[1], "--ignore-spaces") == 0) {
        ignore_spaces = 1;
        first_index++;
    }

    if (first_index == argc) {
        fprintf(stderr, "Usage: %s [--ignore-spaces] <text1> [text2 ...]\n", argv[0]);
        return EXIT_FAILURE;
    }

    for (int index = first_index; index < argc; index++) {
        size_t count = count_characters(argv[index], ignore_spaces);

        printf("%s: %zu character(s)\n", argv[index], count);
        total += count;
    }

    printf("Total: %zu character(s)\n", total);

    return EXIT_SUCCESS;
}
