/*
Objective: check whether a positive integer is a perfect number.

Usage:
    ./app <positive-integer>

Examples:
    ./app 6
    ./app 28
*/

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

static int convert_to_positive_ull(const char *text, unsigned long long *result)
{
    char *end = NULL;
    unsigned long long value;

    if (text[0] == '-') {
        return 0;
    }

    errno = 0;
    value = strtoull(text, &end, 10);

    if (text[0] == '\0' || *end != '\0' || errno == ERANGE || value == 0) {
        return 0;
    }

    *result = value;
    return 1;
}

static int add_without_exceeding(unsigned long long *sum,
                                 unsigned long long value,
                                 unsigned long long limit)
{
    if (*sum > limit - value) {
        return 0;
    }

    *sum += value;
    return 1;
}

static int is_perfect(unsigned long long number)
{
    unsigned long long sum = 1;

    if (number < 2) {
        return 0;
    }

    for (unsigned long long divisor = 2; divisor <= number / divisor; divisor++) {
        if (number % divisor == 0) {
            unsigned long long pair = number / divisor;

            if (!add_without_exceeding(&sum, divisor, number)) {
                return 0;
            }

            if (pair != divisor && !add_without_exceeding(&sum, pair, number)) {
                return 0;
            }
        }
    }

    return sum == number;
}

int main(int argc, char *argv[])
{
    unsigned long long number;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <positive-integer>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!convert_to_positive_ull(argv[1], &number)) {
        fprintf(stderr, "Error: provide a valid positive integer.\n");
        return EXIT_FAILURE;
    }

    printf("%llu is %sa perfect number.\n", number, is_perfect(number) ? "" : "not ");

    return EXIT_SUCCESS;
}
