#include <stdio.h>

int main() {

    //Para variáveis, os parênteses são opcionais: sizeof a

    int a = 10;
    double b = 3.14;
    char c = 'V';

    printf("=== TAMANHO DE VARIAVEIS ===\n");
    printf("Tamanho da variavel 'a' (int): %zu bytes\n", sizeof a);
    printf("Tamanho da variavel 'b' (double): %zu bytes\n", sizeof b);
    printf("Tamanho da variavel 'c' (char): %zu bytes\n", sizeof c);

    return 0;
}