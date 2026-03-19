#include <stdio.h>

/*
 * Goal: Show how to organize long strings in the source code.
 */
int main() {
    // The compiler joins these two lines into a single string in memory
    char long_string[] = "This is a very long string that "
                         "was broken into two lines in the code.";

    printf("%s\n", long_string);

    return 0;
}