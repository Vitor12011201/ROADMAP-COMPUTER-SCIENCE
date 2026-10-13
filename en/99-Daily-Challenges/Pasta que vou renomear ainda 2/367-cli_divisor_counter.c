/*
Objective: count positive divisors of an integer received from the command line.

Usage:
    ./app <positive-integer>

Example:
    ./app 36
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

static unsigned long long count_divisors(unsigned long long number)
{
    unsigned long long count = 0;

    for (unsigned long long divisor = 1; divisor <= number / divisor; divisor++) {
        if (number % divisor == 0) {
            count += number / divisor == divisor ? 1 : 2;
        }
    }

    return count;
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

    printf("%llu has %llu positive divisor(s).\n", number, count_divisors(number));

    return EXIT_SUCCESS;
}
