#include <stdio.h>

int main() {
    int i, j;

    // i starts at 0 and goes up (i++)
    // j starts at 10 and goes down (j--)
    for (i = 0, j = 10; i < 5; i++, j--) {
        printf("i: %d, j: %d\n", i, j);
    }

    return 0;
}