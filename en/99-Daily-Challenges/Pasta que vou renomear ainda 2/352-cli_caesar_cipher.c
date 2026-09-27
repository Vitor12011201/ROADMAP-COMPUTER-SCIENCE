/*
Objective: encode text using the Caesar cipher from the command line.

Usage:
    ./app <shift> <text>

Example:
    ./app 3 "Study C!"
*/

#include <ctype.h>
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

static void encode(const char *text, int shift)
{
    while (*text != '\0') {
        unsigned char character = (unsigned char)*text;

        if (isupper(character)) {
            putchar('A' + (character - 'A' + shift) % 26);
        } else if (islower(character)) {
            putchar('a' + (character - 'a' + shift) % 26);
        } else {
            putchar(character);
        }

        text++;
    }
}

int main(int argc, char *argv[])
{
    long shift_value;
    int shift;

    if (argc != 3) {
        fprintf(stderr, "Usage: %s <shift> <text>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!convert_to_long(argv[1], &shift_value)) {
        fprintf(stderr, "Error: provide a valid integer shift.\n");
        return EXIT_FAILURE;
    }

    shift = (int)(shift_value % 26);
    if (shift < 0) {
        shift += 26;
    }

    encode(argv[2], shift);
    putchar('\n');

    return EXIT_SUCCESS;
}
