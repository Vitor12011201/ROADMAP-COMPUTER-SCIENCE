#include <stdio.h>

int main(void) {
    char key = 's'; // Movement keys: w, a, s, d

    switch (key) {
    case 'w':
        printf("The character moved FORWARD.\n");
        break;
    case 's':
        printf("The character moved BACKWARD.\n");
        break;
    case 'a':
        printf("The character turned LEFT.\n");
        break;
    case 'd':
        printf("The character turned RIGHT.\n");
        break;
    default:
        // If the user presses any other key (e.g., 'x')
        printf("Invalid key! Use W, A, S, or D.\n");
        break;
    }
}