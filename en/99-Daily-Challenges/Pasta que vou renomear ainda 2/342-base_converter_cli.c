/*
Objective: convert a number from any base between 2 and 36 to decimal.

Usage:
    ./app <number> <base>

Example:
    ./app 101101 2
    ./app FF 16
*/

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

static int convert_integer(const char *text, int base, long *result)
{
    char *end = NULL;
    long value;

    errno = 0;
    value = strtol(text, &end, base);

    if (text[0] == '\0' || *end != '\0' || errno == ERANGE) {
        return 0;
    }

    *result = value;
    return 1;
}

int main(int argc, char *argv[])
{
    long base;
    long number;

    if (argc != 3) {
        fprintf(stderr, "Usage: %s <number> <base 2..36>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!convert_integer(argv[2], 10, &base) || base < 2 || base > 36) {
        fprintf(stderr, "Error: base must be an integer between 2 and 36.\n");
        return EXIT_FAILURE;
    }

    if (!convert_integer(argv[1], (int)base, &number)) {
        fprintf(stderr, "Error: '%s' is not valid in base %ld.\n", argv[1], base);
        return EXIT_FAILURE;
    }

    printf("Decimal value: %ld\n", number);

    return EXIT_SUCCESS;
}
