/*
Objective: check whether two texts are anagrams, ignoring case and punctuation.

Usage:
    ./app <text1> <text2>

Example:
    ./app "A gentleman" "Elegant man"
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

static int are_anagrams(const char *first, const char *second)
{
    int frequencies[256] = {0};

    while (*first != '\0') {
        unsigned char character = (unsigned char)*first;

        if (isalnum(character)) {
            frequencies[(unsigned char)tolower(character)]++;
        }

        first++;
    }

    while (*second != '\0') {
        unsigned char character = (unsigned char)*second;

        if (isalnum(character)) {
            int index = (unsigned char)tolower(character);

            frequencies[index]--;
            if (frequencies[index] < 0) {
                return 0;
            }
        }

        second++;
    }

    for (int index = 0; index < 256; index++) {
        if (frequencies[index] != 0) {
            return 0;
        }
    }

    return 1;
}

int main(int argc, char *argv[])
{
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <text1> <text2>\n", argv[0]);
        return EXIT_FAILURE;
    }

    printf("The texts are %sanagrams.\n", are_anagrams(argv[1], argv[2]) ? "" : "not ");

    return EXIT_SUCCESS;
}
