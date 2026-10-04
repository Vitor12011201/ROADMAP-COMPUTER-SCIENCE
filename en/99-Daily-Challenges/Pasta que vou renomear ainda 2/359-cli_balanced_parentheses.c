/*
Objective: check whether parentheses in text are balanced.

Usage:
    ./app <text>

Examples:
    ./app "function(a, (b + c))"
    ./app "(a + b))"
*/

#include <stdio.h>
#include <stdlib.h>

static int has_balanced_parentheses(const char *text)
{
    int depth = 0;

    while (*text != '\0') {
        if (*text == '(') {
            depth++;
        } else if (*text == ')') {
            if (depth == 0) {
                return 0;
            }

            depth--;
        }

        text++;
    }

    return depth == 0;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <text>\n", argv[0]);
        return EXIT_FAILURE;
    }

    printf("Parentheses are %s.\n",
           has_balanced_parentheses(argv[1]) ? "balanced" : "unbalanced");

    return EXIT_SUCCESS;
}
