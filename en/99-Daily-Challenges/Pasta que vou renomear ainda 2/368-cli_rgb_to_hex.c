/*
Objective: convert three RGB components to a hexadecimal color.

Usage:
    ./app <red> <green> <blue>

Example:
    ./app 30 144 255
*/

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

static int convert_component(const char *text, unsigned int *result)
{
    char *end = NULL;
    long value;

    errno = 0;
    value = strtol(text, &end, 10);

    if (text[0] == '\0' || *end != '\0' || errno == ERANGE ||
        value < 0 || value > 255) {
        return 0;
    }

    *result = (unsigned int)value;
    return 1;
}

int main(int argc, char *argv[])
{
    unsigned int red;
    unsigned int green;
    unsigned int blue;

    if (argc != 4) {
        fprintf(stderr, "Usage: %s <red> <green> <blue>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!convert_component(argv[1], &red) ||
        !convert_component(argv[2], &green) ||
        !convert_component(argv[3], &blue)) {
        fprintf(stderr, "Error: each component must be between 0 and 255.\n");
        return EXIT_FAILURE;
    }

    printf("Hex color: #%02X%02X%02X\n", red, green, blue);

    return EXIT_SUCCESS;
}
