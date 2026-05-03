#include <stdio.h>

/* OBJECTIVE: Show that char *s and char s[] are exactly the same thing to the compiler within function parameters.
   Both receive only a memory address. */

// Both functions are valid and do the same thing:
void print_with_pointer(char *s) {
    printf("Via pointer: %s\n", s);
}

void print_with_array(char s[]) {
    printf("Via array: %s\n", s);
}

int main() {
    char text[] = "Senior Dev";

    print_with_pointer(text);
    print_with_array(text);

    return 0;
}