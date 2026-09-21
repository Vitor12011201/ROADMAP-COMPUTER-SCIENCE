/*
Objective: calculate the factorial of a non-negative integer received from the terminal.

Usage:
    ./app <non-negative-integer>

Example:
    ./app 20
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

int main(int argc, char *argv[])
{
    unsigned long long number;
    unsigned long long factorial = 1;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <non-negative-integer>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!convert_to_ull(argv[1], &number)) {
        fprintf(stderr, "Error: provide a valid non-negative integer.\n");
        return EXIT_FAILURE;
    }

    for (unsigned long long factor = 2; factor <= number; factor++) {
        if (factorial > ULLONG_MAX / factor) {
            fprintf(stderr, "Error: factorial of %llu exceeds the type limit.\n", number);
            return EXIT_FAILURE;
        }

        factorial *= factor;
    }

    printf("%llu! = %llu\n", number, factorial);

    return EXIT_SUCCESS;
}
