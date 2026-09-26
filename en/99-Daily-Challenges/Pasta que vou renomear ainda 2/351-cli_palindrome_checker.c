/*
Objective: check whether text is a palindrome, ignoring case and punctuation.

Usage:
    ./app <text>

Example:
    ./app "Never odd or even"
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int is_palindrome(const char *text)
{
    size_t start = 0;
    size_t end = strlen(text);

    if (end == 0) {
        return 1;
    }

    end--;

    while (start < end) {
        while (start < end && !isalnum((unsigned char)text[start])) {
            start++;
        }

        while (start < end && !isalnum((unsigned char)text[end])) {
            end--;
        }

        if (start >= end) {
            break;
        }

        if (tolower((unsigned char)text[start]) !=
            tolower((unsigned char)text[end])) {
            return 0;
        }

        start++;
        end--;
    }

    return 1;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <text>\n", argv[0]);
        return EXIT_FAILURE;
    }

    printf("The text is %sa palindrome.\n", is_palindrome(argv[1]) ? "" : "not ");

    return EXIT_SUCCESS;
}
