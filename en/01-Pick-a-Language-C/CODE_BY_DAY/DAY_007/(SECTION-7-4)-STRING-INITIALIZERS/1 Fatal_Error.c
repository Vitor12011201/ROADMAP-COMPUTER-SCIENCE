#include <stdio.h>

/*
 * Goal: Show that pointers to literals point to read-only memory.
 */

int main() {
    // 's' points to a protected region of memory
    char *s = "Immutable";

    printf("Original string: %s\n", s);

    // s[0] = 'a'; // DANGER: This would cause a crash (Segmentation Fault)
    // Reason: You do not have write permission in the system's text segment.

    printf("Pointers to literals must be treated as constants!\n");
    return 0;
}