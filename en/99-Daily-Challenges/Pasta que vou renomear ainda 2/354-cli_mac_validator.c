/*
Objective: validate the format of a MAC address received from the command line.

Usage:
    ./app <mac>

Examples:
    ./app 00:1A:2B:3C:4D:5E
    ./app 00-1A-2B-3C-4D-5E
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int is_valid_mac(const char *mac)
{
    if (strlen(mac) != 17) {
        return 0;
    }

    for (int index = 0; index < 17; index++) {
        if (index % 3 == 2) {
            if (mac[index] != ':') {
                return 0;
            }
        } else if (!isxdigit((unsigned char)mac[index])) {
            return 0;
        }
    }

    return 1;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <mac>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!is_valid_mac(argv[1])) {
        fprintf(stderr, "Invalid MAC address. Use XX:XX:XX:XX:XX:XX.\n");
        return EXIT_FAILURE;
    }

    printf("Valid MAC address.\n");

    return EXIT_SUCCESS;
}
