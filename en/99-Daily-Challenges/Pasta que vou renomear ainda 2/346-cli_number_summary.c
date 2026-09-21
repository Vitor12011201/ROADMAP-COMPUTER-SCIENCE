/*
Objective: generate a summary of integer numbers received from the command line.

Usage:
    ./app <integer1> [integer2 ...]

Example:
    ./app 12 -4 8 20
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
    double sum = 0.0;
    long smallest = 0;
    long largest = 0;

    if (argc < 2) {
        fprintf(stderr, "Usage: %s <integer1> [integer2 ...]\n", argv[0]);
        return EXIT_FAILURE;
    }

    for (int index = 1; index < argc; index++) {
        long number;

        if (!convert_to_long(argv[index], &number)) {
            fprintf(stderr, "Error: '%s' is not a valid integer.\n", argv[index]);
            return EXIT_FAILURE;
        }

        if (index == 1 || number < smallest) {
            smallest = number;
        }

        if (index == 1 || number > largest) {
            largest = number;
        }

        sum += number;
    }

    printf("Count: %d\n", argc - 1);
    printf("Smallest: %ld\n", smallest);
    printf("Largest: %ld\n", largest);
    printf("Average: %.2f\n", sum / (argc - 1));

    return EXIT_SUCCESS;
}
