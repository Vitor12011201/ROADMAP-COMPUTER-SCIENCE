#include <stdio.h>

/*
 * Goal: Demonstrate the logic of traversing memory until reaching '\0'.
 */
size_t my_strlen(char *s) {
    size_t counter = 0;

    // While the pointed character is not the null terminator...
    while (s[counter] != '\0') {
        counter++; // ...keep counting
    }

    return counter;
}

int main() {
    char *msg = "Logic";
    printf("Manual length: %zu\n", my_strlen(msg));
    return 0;
}