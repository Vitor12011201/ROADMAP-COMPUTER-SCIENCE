#include <stdio.h>

int main() {
    // Since 1 is always true, it never stops asking
    while (1) {
        printf("1 will always be true; this program will run forever\n");

        // In real programs, we usually have an "if" statement inside
        // with a command called "break" to exit when we want to.
    }

    return 0;
}