#include <stdio.h>

/*
 * Goal: To show that every string in C ends with '\0' (ASCII 0).
 */
int main() {
    // C automatically places the '\0' at the end of "Caco"
    char name[] = "Caco";

    printf("String: %s\n", name);

    // Let's see the actual size of the array (4 letters + 1 terminator)
    printf("Size in sizeof: %zu bytes\n", sizeof(name));

    // Proving that the last character is the null (zero) character
    if (name[4] == '\0') {
        printf("The character at index 4 is the null terminator!\n");
    }

    return 0;
}