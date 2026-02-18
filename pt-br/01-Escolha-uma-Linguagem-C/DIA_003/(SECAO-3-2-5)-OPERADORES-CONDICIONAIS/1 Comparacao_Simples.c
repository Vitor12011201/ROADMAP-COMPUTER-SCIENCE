#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    // Igualdade (==)
    printf("A e igual a B? %d\n", a == b); // 0 (Falso)

    // Diferenca (!=)
    printf("A e diferente de B? %d\n", a != b); // 1 (Verdadeiro)

    // Maior e Menor
    printf("A e menor que B? %d\n", a < b);    // 1 (Verdadeiro)
    printf("A e maior que B? %d\n", a > b);    // 0 (Falso)

    return 0;
}