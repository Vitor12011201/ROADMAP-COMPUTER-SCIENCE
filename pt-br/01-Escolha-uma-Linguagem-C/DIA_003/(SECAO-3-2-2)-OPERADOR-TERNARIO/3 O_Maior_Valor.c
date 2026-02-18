#include <stdio.h>

int main() {
    int a = 42;
    int b = 99;
    int maior;

    // Se a for maior que b, maior recebe a. Senão, recebe b.
    maior = (a > b) ? a : b;

    printf("O maior numero e: %d\n", maior);

    return 0;
}