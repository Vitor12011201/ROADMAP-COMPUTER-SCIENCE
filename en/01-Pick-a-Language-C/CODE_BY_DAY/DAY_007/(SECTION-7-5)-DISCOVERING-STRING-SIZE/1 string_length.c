#include <stdio.h>
#include <string.h> // Required for using strlen()

/*
 * Goal: Show the correct use of the size_t type and the %zu specifier.
 */
int main() {
    char *sentence = "C is fun";

    // strlen returns size_t, which is a "robust" unsigned integer type
    size_t length = strlen(sentence);

    printf("The sentence: \"%s\"\n", sentence);
    printf("Has %zu characters.\n", length);

    return 0;
}