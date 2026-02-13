#include <stdio.h>

int main() {
    int i, j;

    // i começa em 0 e sobe (i++)
    // j começa em 10 e desce (j--)
    for (i = 0, j = 10; i < 5; i++, j--) {
        printf("i: %d, j: %d\n", i, j);
    }

    return 0;
}