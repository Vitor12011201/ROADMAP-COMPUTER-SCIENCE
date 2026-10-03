/*
Objective: sort three integers received from the command line.

Usage:
    ./app <integer1> <integer2> <integer3>

Example:
    ./app 12 -3 7
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

static void swap(long *first, long *second)
{
    long temporary = *first;

    *first = *second;
    *second = temporary;
}

int main(int argc, char *argv[])
{
    long first;
    long second;
    long third;

    if (argc != 4) {
        fprintf(stderr, "Usage: %s <integer1> <integer2> <integer3>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!convert_to_long(argv[1], &first) ||
        !convert_to_long(argv[2], &second) ||
        !convert_to_long(argv[3], &third)) {
        fprintf(stderr, "Error: provide three valid integers.\n");
        return EXIT_FAILURE;
    }

    if (first > second) {
        swap(&first, &second);
    }

    if (second > third) {
        swap(&second, &third);
    }

    if (first > second) {
        swap(&first, &second);
    }

    printf("Ascending order: %ld, %ld, %ld\n", first, second, third);

    return EXIT_SUCCESS;
}
