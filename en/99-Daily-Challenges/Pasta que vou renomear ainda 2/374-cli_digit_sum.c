/*
Objective: calculate digit sum and digital root of a non-negative integer.

Usage:
    ./app <non-negative-integer>

Example:
    ./app 9875
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

static unsigned int sum_digits(unsigned long long number)
{
    unsigned int sum = 0;

    do {
        sum += (unsigned int)(number % 10);
        number /= 10;
    } while (number != 0);

    return sum;
}

int main(int argc, char *argv[])
{
    unsigned long long number;
    unsigned int sum;
    unsigned int root;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <non-negative-integer>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!convert_to_ull(argv[1], &number)) {
        fprintf(stderr, "Error: provide a valid non-negative integer.\n");
        return EXIT_FAILURE;
    }

    sum = sum_digits(number);
    root = sum;

    while (root >= 10) {
        root = sum_digits(root);
    }

    printf("Digit sum: %u\n", sum);
    printf("Digital root: %u\n", root);

    return EXIT_SUCCESS;
}
