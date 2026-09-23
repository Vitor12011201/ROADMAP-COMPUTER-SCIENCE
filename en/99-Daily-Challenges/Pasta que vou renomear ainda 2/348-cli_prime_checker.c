/*
Objective: check whether an integer received from the command line is prime.

Usage:
    ./app <integer>

Examples:
    ./app 97
    ./app 100
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

static int is_prime(long number)
{
    if (number < 2) {
        return 0;
    }

    if (number == 2) {
        return 1;
    }

    if (number % 2 == 0) {
        return 0;
    }

    for (long divisor = 3; divisor <= number / divisor; divisor += 2) {
        if (number % divisor == 0) {
            return 0;
        }
    }

    return 1;
}

int main(int argc, char *argv[])
{
    long number;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <integer>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!convert_to_long(argv[1], &number)) {
        fprintf(stderr, "Error: provide a valid integer.\n");
        return EXIT_FAILURE;
    }

    printf("%ld is %sprime.\n", number, is_prime(number) ? "" : "not ");

    return EXIT_SUCCESS;
}
