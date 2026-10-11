/*
Objective: check whether a list of integers is in ascending order.

Usage:
    ./app <integer1> <integer2> [integer3 ...]

Examples:
    ./app 1 4 4 9
    ./app 3 8 2
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
    long previous;

    if (argc < 3) {
        fprintf(stderr, "Usage: %s <integer1> <integer2> [integer3 ...]\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!convert_to_long(argv[1], &previous)) {
        fprintf(stderr, "Error: '%s' is not a valid integer.\n", argv[1]);
        return EXIT_FAILURE;
    }

    for (int index = 2; index < argc; index++) {
        long current;

        if (!convert_to_long(argv[index], &current)) {
            fprintf(stderr, "Error: '%s' is not a valid integer.\n", argv[index]);
            return EXIT_FAILURE;
        }

        if (current < previous) {
            printf("The list is not sorted: %ld appears before %ld.\n",
                   previous, current);
            return EXIT_SUCCESS;
        }

        previous = current;
    }

    printf("The list is in ascending order.\n");

    return EXIT_SUCCESS;
}
