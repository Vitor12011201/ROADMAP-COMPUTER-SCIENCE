#include <stdio.h>

/*
 * Goal: Show that s[i] works even if 's' is a pointer (char *).
 */
int main() {
    // Pointing to a literal
    char *s = "Pointer";

    printf("Using indices on a pointer:\n");
    printf("s[0] = %c\n", s[0]);
    printf("s[3] = %c\n", s[3]);
    printf("s[7] = %c\n", s[5]);

    return 0;
}