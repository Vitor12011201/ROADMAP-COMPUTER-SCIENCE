/*
Objective: convert a number of seconds into days, hours, minutes, and seconds.

Usage:
    ./app <seconds>

Example:
    ./app 93784
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

int main(int argc, char *argv[])
{
    unsigned long long seconds;
    unsigned long long days;
    unsigned long long hours;
    unsigned long long minutes;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <seconds>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!convert_to_ull(argv[1], &seconds)) {
        fprintf(stderr, "Error: provide a valid number of seconds.\n");
        return EXIT_FAILURE;
    }

    days = seconds / 86400;
    seconds %= 86400;
    hours = seconds / 3600;
    seconds %= 3600;
    minutes = seconds / 60;
    seconds %= 60;

    printf("%llu day(s), %llu hour(s), %llu minute(s), and %llu second(s).\n",
           days, hours, minutes, seconds);

    return EXIT_SUCCESS;
}
