/*
Objective: convert a non-negative integer received from the command line to binary.

Usage:
    ./app <non-negative-integer>

Example:
    ./app 42
*/

#include <errno.h>
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

static void print_binary(unsigned long long number)
{
    unsigned long long mask = 1;

    if (number == 0) {
        putchar('0');
        return;
    }

    while (mask <= number / 2) {
        mask *= 2;
    }

    while (mask > 0) {
        putchar((number & mask) == 0 ? '0' : '1');
        mask /= 2;
    }
}

int main(int argc, char *argv[])
{
    unsigned long long number;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <non-negative-integer>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!convert_to_ull(argv[1], &number)) {
        fprintf(stderr, "Error: provide a valid non-negative integer.\n");
        return EXIT_FAILURE;
    }

    printf("Binary: ");
    print_binary(number);
    putchar('\n');

    return EXIT_SUCCESS;
}
