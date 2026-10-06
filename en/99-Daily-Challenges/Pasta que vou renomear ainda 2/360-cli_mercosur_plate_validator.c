/*
Objective: validate a Brazilian Mercosur-style license plate in ABC1D23 format.

Usage:
    ./app <plate>

Examples:
    ./app ABC1D23
    ./app ABC-1234
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int is_valid_mercosur_plate(const char *plate)
{
    if (strlen(plate) != 7) {
        return 0;
    }

    return isalpha((unsigned char)plate[0]) &&
           isalpha((unsigned char)plate[1]) &&
           isalpha((unsigned char)plate[2]) &&
           isdigit((unsigned char)plate[3]) &&
           isalpha((unsigned char)plate[4]) &&
           isdigit((unsigned char)plate[5]) &&
           isdigit((unsigned char)plate[6]);
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <plate>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!is_valid_mercosur_plate(argv[1])) {
        fprintf(stderr, "Invalid plate. Use ABC1D23 format.\n");
        return EXIT_FAILURE;
    }

    printf("Valid Mercosur plate.\n");

    return EXIT_SUCCESS;
}
