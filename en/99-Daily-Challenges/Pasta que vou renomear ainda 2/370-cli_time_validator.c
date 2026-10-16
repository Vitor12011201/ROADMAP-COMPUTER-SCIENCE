/*
Objective: validate a 24-hour time in HH:MM format.

Usage:
    ./app <time>

Examples:
    ./app 23:59
    ./app 24:00
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int is_valid_time(const char *time)
{
    int hours;
    int minutes;

    if (strlen(time) != 5 || time[2] != ':' ||
        !isdigit((unsigned char)time[0]) ||
        !isdigit((unsigned char)time[1]) ||
        !isdigit((unsigned char)time[3]) ||
        !isdigit((unsigned char)time[4])) {
        return 0;
    }

    hours = (time[0] - '0') * 10 + time[1] - '0';
    minutes = (time[3] - '0') * 10 + time[4] - '0';

    return hours < 24 && minutes < 60;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <time HH:MM>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!is_valid_time(argv[1])) {
        fprintf(stderr, "Invalid time. Use a time between 00:00 and 23:59.\n");
        return EXIT_FAILURE;
    }

    printf("Valid time.\n");

    return EXIT_SUCCESS;
}
