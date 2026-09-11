/*
Objective: calculate the average of grades received from the command line.

Usage:
    ./app <grade1> [grade2 ...]

Example:
    ./app 7.5 8 10 6.5
*/

#include <errno.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

static int convert_to_grade(const char *text, double *grade)
{
    char *end = NULL;
    double value;

    errno = 0;
    value = strtod(text, &end);

    if (text[0] == '\0' || *end != '\0' || errno == ERANGE ||
        !isfinite(value)) {
        return 0;
    }

    *grade = value;
    return 1;
}

int main(int argc, char *argv[])
{
    double sum = 0.0;

    if (argc < 2) {
        fprintf(stderr, "Usage: %s <grade1> [grade2 ...]\n", argv[0]);
        return EXIT_FAILURE;
    }

    for (int index = 1; index < argc; index++) {
        double grade;

        if (!convert_to_grade(argv[index], &grade)) {
            fprintf(stderr, "Error: '%s' is not a valid grade.\n", argv[index]);
            return EXIT_FAILURE;
        }

        sum += grade;
    }

    printf("Average of %d grade(s): %.2f\n", argc - 1, sum / (argc - 1));

    return EXIT_SUCCESS;
}
