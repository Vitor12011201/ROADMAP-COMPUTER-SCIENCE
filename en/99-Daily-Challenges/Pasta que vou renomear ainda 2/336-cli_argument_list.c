/*
Objective: process an option and a list of words received from the terminal.

Usage:
    ./app [--uppercase] <word1> [word2 ...]

Examples:
    ./app daily study
    ./app --uppercase daily study
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void print_word(const char *word, int use_uppercase)
{
    while (*word != '\0') {
        unsigned char character = (unsigned char)*word;

        putchar(use_uppercase ? toupper(character) : character);
        word++;
    }
}

int main(int argc, char *argv[])
{
    int first_index = 1;
    int use_uppercase = 0;

    if (argc > 1 && strcmp(argv[1], "--uppercase") == 0) {
        use_uppercase = 1;
        first_index++;
    }

    if (first_index == argc) {
        fprintf(stderr, "Usage: %s [--uppercase] <word1> [word2 ...]\n", argv[0]);
        return EXIT_FAILURE;
    }

    printf("Word count: %d\n", argc - first_index);

    for (int index = first_index; index < argc; index++) {
        printf("%d: ", index - first_index + 1);
        print_word(argv[index], use_uppercase);
        putchar('\n');
    }

    return EXIT_SUCCESS;
}
