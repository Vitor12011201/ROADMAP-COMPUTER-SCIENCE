#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Challenge 375: determine whether a text is a palindrome.
 * Usage: 375-palindrome_cli.exe "A base do teto desaba"
 * Example: input "A base do teto desaba" -> palindrome
 */

static int is_palindrome(const char *text)
{
    size_t left = 0;
    size_t right = strlen(text);

    if (right == 0) {
        return 1;
    }
    right--;

    while (left < right) {
        while (left < right && !isalnum((unsigned char)text[left])) {
            left++;
        }
        while (left < right && !isalnum((unsigned char)text[right])) {
            right--;
        }

        if (tolower((unsigned char)text[left]) !=
            tolower((unsigned char)text[right])) {
            return 0;
        }
        left++;
        right--;
    }

    return 1;
}

int main(int argc, char **argv)
{
    if (argc != 2) {
        fprintf(stderr, "Usage: %s \"text\"\n", argv[0]);
        return EXIT_FAILURE;
    }

    printf("%s\n", is_palindrome(argv[1]) ? "palindrome" : "not palindrome");
    return EXIT_SUCCESS;
}
