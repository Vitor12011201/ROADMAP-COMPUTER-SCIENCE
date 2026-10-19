/*
Objective: validate the basic syntax of an email received from the command line.

Usage:
    ./app <email>

Note: this is a didactic format check, not an existence verification.
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int is_valid_email(const char *email)
{
    const char *at_sign = strchr(email, '@');
    const char *dot = strrchr(email, '.');

    if (at_sign == NULL || at_sign == email || at_sign[1] == '\0' ||
        strchr(at_sign + 1, '@') != NULL || dot == NULL ||
        dot < at_sign + 2 || dot[1] == '\0') {
        return 0;
    }

    for (const char *character = email; *character != '\0'; character++) {
        if (isspace((unsigned char)*character)) {
            return 0;
        }
    }

    return 1;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <email>\n", argv[0]);
        return EXIT_FAILURE;
    }

    printf("Email %s a valid basic format.\n", is_valid_email(argv[1]) ? "has" : "does not have");

    return EXIT_SUCCESS;
}
