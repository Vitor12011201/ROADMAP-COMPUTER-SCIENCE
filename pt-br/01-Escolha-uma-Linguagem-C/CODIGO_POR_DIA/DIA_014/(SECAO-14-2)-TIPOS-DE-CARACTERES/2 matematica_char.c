#include <stdio.h>

/* OBJETIVO: Realizar operações aritméticas diretamente em variáveis 'char'.
   Isso é útil para manipular textos, como converter letras maiúsculas em minúsculas. */

int main() {
    char maiuscula = 'G';

    // Na tabela ASCII, a distância entre uma maiúscula e uma minúscula é sempre 32
    char minuscula = maiuscula + 32;

    printf("Maiuscula: %c (Codigo: %d)\n", maiuscula, maiuscula);
    printf("Minuscula: %c (Codigo: %d)\n", minuscula, minuscula);

    // Avançando na criptografia simples (Cifra de César: pular 3 letras)
    char letra_original = 'A';
    char letra_cifrada = letra_original + 3;
    printf("Cifra de Cesar ('A' + 3): %c\n", letra_cifrada);

    return 0;
}