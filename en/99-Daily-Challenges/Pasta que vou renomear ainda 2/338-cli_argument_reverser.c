/*
Objective: print command-line arguments in reverse order.

Usage:
    ./app [--no-index] <word1> [word2 ...]

Examples:
    ./app learn C daily
    ./app --no-index learn C daily
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int first_index = 1;
    int show_index = 1;

    if (argc > 1 && strcmp(argv[1], "--no-index") == 0) {
        show_index = 0;
        first_index++;
    }

    if (first_index == argc) {
        fprintf(stderr, "Usage: %s [--no-index] <word1> [word2 ...]\n", argv[0]);
        return EXIT_FAILURE;
    }

    printf("Arguments in reverse order:\n");

    for (int index = argc - 1; index >= first_index; index--) {
        if (show_index) {
            printf("%d: ", index - first_index + 1);
        }

        printf("%s\n", argv[index]);
    }

    return EXIT_SUCCESS;
}
