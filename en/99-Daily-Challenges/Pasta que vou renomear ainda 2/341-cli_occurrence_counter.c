/*
Objective: count how many times a number appears in the received arguments.

Usage:
    ./app <target> <integer1> [integer2 ...]

Example:
    ./app 7 2 7 4 7 9
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
    long target;
    int occurrences = 0;

    if (argc < 3) {
        fprintf(stderr, "Usage: %s <target> <integer1> [integer2 ...]\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!convert_to_long(argv[1], &target)) {
        fprintf(stderr, "Error: '%s' is not a valid target.\n", argv[1]);
        return EXIT_FAILURE;
    }

    for (int index = 2; index < argc; index++) {
        long number;

        if (!convert_to_long(argv[index], &number)) {
            fprintf(stderr, "Error: '%s' is not a valid integer.\n", argv[index]);
            return EXIT_FAILURE;
        }

        if (number == target) {
            occurrences++;
        }
    }

    printf("The number %ld appears %d time(s).\n", target, occurrences);

    return EXIT_SUCCESS;
}
