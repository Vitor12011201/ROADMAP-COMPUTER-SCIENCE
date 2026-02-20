#include <stdio.h>

int main() {
    int i = 10;

    // WHILE TEST:
    // It asks: "10 < 10?" -> No. So it does nothing.
    while (i < 10) {
        printf("This will never appear!\n");
        i++;
    }

    // DO-WHILE TEST:
    // It first executes the 'do' block, and only checks the 'while' at the end.
    do {
        printf("do-while: I appear at least once! (i = %d)\n", i);
        i++;
    } while (i < 10);

    printf("All done!\n");
    return 0;
}