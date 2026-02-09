#include <stdio.h>

int main() {
    int i, j;

    // Na inicializacao: i=0 e j=10 (separados por virgula)
    // No incremento: i++ e j-- (separados por virgula)
    for (i = 0, j = 10; i < 5; i++, j--) {
        printf("i: %d, j: %d\n", i, j);
    }

    return 0;
}