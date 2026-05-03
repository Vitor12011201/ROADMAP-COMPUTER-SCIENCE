#include <stdio.h>

/* OBJECTIVE: Demonstrate that a function expecting a pointer accepts a literal array,
   a pointer variable, or even a specific address in the middle of an array. */

void show_first_char(char *c) {
    printf("The character is: %c\n", *c);
}

int main() {
    char s[] = "Sunshine";
    char *p = "Moonlight";

    show_first_char(s);      // Passing an array
    show_first_char(p);      // Passing a pointer
    show_first_char(&s[3]);  // Passing the address of 's' (index 3)

    return 0;
}