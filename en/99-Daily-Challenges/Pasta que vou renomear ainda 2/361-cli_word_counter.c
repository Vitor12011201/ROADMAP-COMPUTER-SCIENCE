/*
Objective: count words in text received from the command line.

Usage:
    ./app <text>

Example:
    ./app "  Study C every day  "
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

static size_t count_words(const char *text)
{
    int inside_word = 0;
    size_t count = 0;

    while (*text != '\0') {
        if (isspace((unsigned char)*text)) {
            inside_word = 0;
        } else if (!inside_word) {
            count++;
            inside_word = 1;
        }

        text++;
    }

    return count;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <text>\n", argv[0]);
        return EXIT_FAILURE;
    }

    printf("Words: %zu\n", count_words(argv[1]));

    return EXIT_SUCCESS;
}
