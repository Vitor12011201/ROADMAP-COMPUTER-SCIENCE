/*
Objective: check whether text has a valid format for a C identifier.

Usage:
    ./app <identifier>

Examples:
    ./app total_scores
    ./app 3value
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

static int is_valid_identifier(const char *text)
{
    if (*text == '\0' ||
        (!isalpha((unsigned char)*text) && *text != '_')) {
        return 0;
    }

    text++;

    while (*text != '\0') {
        if (!isalnum((unsigned char)*text) && *text != '_') {
            return 0;
        }

        text++;
    }

    return 1;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <identifier>\n", argv[0]);
        return EXIT_FAILURE;
    }

    printf("'%s' %s a valid identifier format.\n",
           argv[1], is_valid_identifier(argv[1]) ? "has" : "does not have");

    return EXIT_SUCCESS;
}
