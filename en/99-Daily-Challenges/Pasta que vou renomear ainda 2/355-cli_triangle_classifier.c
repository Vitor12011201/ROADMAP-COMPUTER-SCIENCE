/*
Objective: validate three sides and classify the triangle formed by them.

Usage:
    ./app <side1> <side2> <side3>

Examples:
    ./app 3 4 5
    ./app 5 5 5
*/

#include <errno.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

static int convert_to_double(const char *text, double *result)
{
    char *end = NULL;
    double value;

    errno = 0;
    value = strtod(text, &end);

    if (text[0] == '\0' || *end != '\0' || errno == ERANGE ||
        !isfinite(value) || value <= 0.0) {
        return 0;
    }

    *result = value;
    return 1;
}

int main(int argc, char *argv[])
{
    double side1;
    double side2;
    double side3;

    if (argc != 4) {
        fprintf(stderr, "Usage: %s <side1> <side2> <side3>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!convert_to_double(argv[1], &side1) ||
        !convert_to_double(argv[2], &side2) ||
        !convert_to_double(argv[3], &side3)) {
        fprintf(stderr, "Error: all sides must be valid positive numbers.\n");
        return EXIT_FAILURE;
    }

    if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        fprintf(stderr, "Error: the provided sides do not form a triangle.\n");
        return EXIT_FAILURE;
    }

    if (side1 == side2 && side2 == side3) {
        printf("Equilateral triangle.\n");
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("Isosceles triangle.\n");
    } else {
        printf("Scalene triangle.\n");
    }

    return EXIT_SUCCESS;
}
