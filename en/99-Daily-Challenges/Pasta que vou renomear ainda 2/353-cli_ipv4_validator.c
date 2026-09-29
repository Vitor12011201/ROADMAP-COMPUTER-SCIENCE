/*
Objective: validate an IPv4 address received from the command line.

Usage:
    ./app <ipv4>

Examples:
    ./app 192.168.1.10
    ./app 256.10.1.1
*/

#include <ctype.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

static int is_valid_ipv4(const char *address)
{
    const char *part = address;

    for (int index = 0; index < 4; index++) {
        char *end = NULL;
        long octet;

        if (!isdigit((unsigned char)*part)) {
            return 0;
        }

        errno = 0;
        octet = strtol(part, &end, 10);

        if (errno == ERANGE || octet > 255) {
            return 0;
        }

        if (index < 3) {
            if (*end != '.') {
                return 0;
            }

            part = end + 1;
        } else if (*end != '\0') {
            return 0;
        }
    }

    return 1;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <ipv4>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!is_valid_ipv4(argv[1])) {
        fprintf(stderr, "Invalid IPv4 address.\n");
        return EXIT_FAILURE;
    }

    printf("Valid IPv4 address.\n");

    return EXIT_SUCCESS;
}
