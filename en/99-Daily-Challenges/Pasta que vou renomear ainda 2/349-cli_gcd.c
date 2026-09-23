/*
Objective: calculate the greatest common divisor of two integers from the command line.

Usage:
    ./app <integer1> <integer2>

Example:
    ./app 84 -30
*/

#include <errno.h>
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

static unsigned long long magnitude(long long value)
{
    return value < 0 ? (unsigned long long)(-(value + 1)) + 1 : (unsigned long long)value;
}

static unsigned long long calculate_gcd(unsigned long long first,
                                        unsigned long long second)
{
    while (second != 0) {
        unsigned long long remainder = first % second;

        first = second;
        second = remainder;
    }

    return first;
}

int main(int argc, char *argv[])
{
    long long first;
    long long second;

    if (argc != 3) {
        fprintf(stderr, "Usage: %s <integer1> <integer2>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!convert_to_ll(argv[1], &first) ||
        !convert_to_ll(argv[2], &second) || (first == 0 && second == 0)) {
        fprintf(stderr, "Error: provide two integers and at least one must be non-zero.\n");
        return EXIT_FAILURE;
    }

    printf("GCD: %llu\n", calculate_gcd(magnitude(first), magnitude(second)));

    return EXIT_SUCCESS;
}
