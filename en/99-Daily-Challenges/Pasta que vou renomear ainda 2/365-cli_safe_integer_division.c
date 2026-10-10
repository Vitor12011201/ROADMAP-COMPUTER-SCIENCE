/*
Objective: calculate quotient and remainder of integer division with validation.

Usage:
    ./app <dividend> <divisor>

Example:
    ./app 17 5
*/

#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

static int convert_to_ll(const char *text, long long *result)
{
    char *end = NULL;
    long long value;

    errno = 0;
    value = strtoll(text, &end, 10);

    if (text[0] == '\0' || *end != '\0' || errno == ERANGE) {
        return 0;
    }

    *result = value;
    return 1;
}

int main(int argc, char *argv[])
{
    long long dividend;
    long long divisor;

    if (argc != 3) {
        fprintf(stderr, "Usage: %s <dividend> <divisor>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!convert_to_ll(argv[1], &dividend) ||
        !convert_to_ll(argv[2], &divisor)) {
        fprintf(stderr, "Error: provide two valid integers.\n");
        return EXIT_FAILURE;
    }

    if (divisor == 0) {
        fprintf(stderr, "Error: division by zero is not allowed.\n");
        return EXIT_FAILURE;
    }

    if (dividend == LLONG_MIN && divisor == -1) {
        fprintf(stderr, "Error: result exceeds the type limit.\n");
        return EXIT_FAILURE;
    }

    printf("Quotient: %lld\n", dividend / divisor);
    printf("Remainder: %lld\n", dividend % divisor);

    return EXIT_SUCCESS;
}
