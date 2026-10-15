/*
Objective: reverse digits of a non-negative integer received from the command line.

Usage:
    ./app <non-negative-integer>

Example:
    ./app 12340
*/

#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

static int convert_to_ull(const char *text, unsigned long long *result)
{
    char *end = NULL;
    unsigned long long value;

    if (text[0] == '-') {
        return 0;
    }

    errno = 0;
    value = strtoull(text, &end, 10);

    if (text[0] == '\0' || *end != '\0' || errno == ERANGE) {
        return 0;
    }

    *result = value;
    return 1;
}

static int reverse_digits(unsigned long long number, unsigned long long *result)
{
    unsigned long long reversed = 0;

    do {
        unsigned long long digit = number % 10;

        if (reversed > (ULLONG_MAX - digit) / 10) {
            return 0;
        }

        reversed = reversed * 10 + digit;
        number /= 10;
    } while (number != 0);

    *result = reversed;
    return 1;
}

int main(int argc, char *argv[])
{
    unsigned long long number;
    unsigned long long reversed;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <non-negative-integer>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!convert_to_ull(argv[1], &number)) {
        fprintf(stderr, "Error: provide a valid non-negative integer.\n");
        return EXIT_FAILURE;
    }

    if (!reverse_digits(number, &reversed)) {
        fprintf(stderr, "Error: reversed number exceeds the type limit.\n");
        return EXIT_FAILURE;
    }

    printf("Reversed: %llu\n", reversed);

    return EXIT_SUCCESS;
}
