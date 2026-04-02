#include <stdio.h>

int main() {
    int i, j;

    // In initialization: i=0 and j=10 (separated by commas)
    // In increment: i++ and j-- (separated by commas)
    for (i = 0, j = 10; i < 5; i++, j--) {
        printf("i: %d, j: %d\n", i, j);
    }

    return 0;
}