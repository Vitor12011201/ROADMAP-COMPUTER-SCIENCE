#include <stdio.h>

/*
 * Goal: Show that 't = s' makes both point to the same phrase.
 */
int main() {
    char *s = "Original Text";
    char *t;

    t = s; // 't' now points to the same location as 's'

    printf("Address of s: %p\n", (void*)s);
    printf("Address of t: %p\n", (void*)t);
    printf("Both print:   %s\n", t);

    return 0;
}