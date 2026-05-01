#include <stdio.h>

/* OBJECTIVE: Implement strlen() using the distance between the starting pointer
   and the pointer that found the NULL terminator ('\0'). */

int my_strlen(char *s) {
    char *p = s;

    // Move 'p' to the end of the string
    while (*p != '\0') {
        p++;
    }

    // Subtraction returns how many 'chars' exist between the two addresses
    return p - s;
}

int main() {
    char *text = "C is amazing";
    printf("Length: %d\n", my_strlen(text));
    return 0;
}