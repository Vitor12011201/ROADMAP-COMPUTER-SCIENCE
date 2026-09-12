/*
Objective: filter even numbers received from the command line.

Usage:
    ./app <integer1> [integer2 ...]

Example:
    ./app 3 8 -2 11 20
*/

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

static int convert_to_long(const char *text, long *result)
{
    char *end = NULL;
    long value;

    errno = 0;
    value = strtol(text, &end, 10);

    if (text[0] == '\0' || *end != '\0' || errno == ERANGE) {
        return 0;
    }

    *result = value;
    return 1;
}

int main(int argc, char *argv[])
{
    int found_even = 0;

    if (argc < 2) {
        fprintf(stderr, "Usage: %s <integer1> [integer2 ...]\n", argv[0]);
        return EXIT_FAILURE;
    }

    printf("Even numbers:");

    for (int index = 1; index < argc; index++) {
        long number;

        if (!convert_to_long(argv[index], &number)) {
            fprintf(stderr, "\nError: '%s' is not a valid integer.\n", argv[index]);
            return EXIT_FAILURE;
        }

        if (number % 2 == 0) {
            printf(" %ld", number);
            found_even = 1;
        }
    }

    if (!found_even) {
        printf(" none");
    }

    putchar('\n');

    return EXIT_SUCCESS;
}
