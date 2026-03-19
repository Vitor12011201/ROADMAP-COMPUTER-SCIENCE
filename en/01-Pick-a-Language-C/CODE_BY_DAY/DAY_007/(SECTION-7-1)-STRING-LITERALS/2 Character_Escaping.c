#include <stdio.h>

/*
 * Goal: Demonstrate how to print double quotes and line breaks.
 */
int main() {
    // We use \" so the compiler doesn't think the string ended there
    char phrase[] = "He said: \"C is amazing!\"\nAnd I agreed.";

    printf("--- Formatted Text ---\n");
    printf("%s\n", phrase);

    return 0;
}