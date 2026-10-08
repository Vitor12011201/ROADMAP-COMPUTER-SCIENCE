/*
Objective: check whether text contains every letter from A to Z.

Usage:
    ./app <text>

Example:
    ./app "The quick brown fox jumps over the lazy dog"
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

static int count_distinct_letters(const char *text)
{
    int seen[26] = {0};
    int count = 0;

    while (*text != '\0') {
        int letter = tolower((unsigned char)*text);

        if (letter >= 'a' && letter <= 'z' && !seen[letter - 'a']) {
            seen[letter - 'a'] = 1;
            count++;
        }

        text++;
    }

    return count;
}

int main(int argc, char *argv[])
{
    int count;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <text>\n", argv[0]);
        return EXIT_FAILURE;
    }

    count = count_distinct_letters(argv[1]);
    printf("Distinct letters: %d of 26\n", count);
    printf("The text is %sa pangram.\n", count == 26 ? "" : "not ");

    return EXIT_SUCCESS;
}
