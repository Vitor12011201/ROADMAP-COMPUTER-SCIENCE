#include <stdio.h>

/* OBJETIVO: Demonstrar o truque clássico de conversão bidirecional entre
   um caractere numérico (char) e seu valor inteiro real (int) usando a tabela ASCII. */

int main() {
    char caractere_cinco = '5'; // Código ASCII 53

    // Convertendo de caractere para número real (53 - 48 = 5)
    int numero_real = caractere_cinco - '0';

    printf("Símbolo original (char): '%c'\n", caractere_cinco);
    printf("Código ASCII real na RAM: %d\n", caractere_cinco);
    printf("Valor matemático obtido:  %d\n\n", numero_real);

    // O inverso também funciona: transformando o número 7 no caractere '7'
    int numero_sete = 7;
    char caractere_sete = numero_sete + '0'; // 7 + 48 = 55 ('7')

    printf("Número original:          %d\n", numero_sete);
    printf("Convertido para caractere: '%c' (ASCII %d)\n", caractere_sete, caractere_sete);

    return 0;
}