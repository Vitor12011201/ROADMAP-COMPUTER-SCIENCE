#include <stdio.h>

/*
 * Difference between char[] (mutable) and char* (string literal).
 */
int main() {
    // As an array, we can change the letters
    char mutable_str[] = "Cat";
    mutable_str[0] = 'R';
    printf("Modified: %s\n", mutable_str); // Becomes "Rat"

    // IMPORTANT: char *p = "Text" usually points to a memory area
    // that the operating system does not allow you to write to.
    char *fixed_str = "Immutable";

    printf("Fixed string: %s\n", fixed_str);
    // fixed_str[0] = 'A'; // THIS WOULD CAUSE AN ERROR (Segmentation Fault)!

    return 0;
}