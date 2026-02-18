#include <stdio.h>

/* Faça um programa em C que:
Peça para o usuário digitar um número inteiro
Se o número for:
maior que 0 → mostrar: Numero positivo
menor que 0 → mostrar: Numero negativo
igual a 0 → mostrar: Numero neutro */

int main () {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    if (n > 0) {
        printf("O seu numero e Positivo");
    } else if (n < 0) {
        printf("O seu numeros e Negativo");
    } else {
        printf("Seu numero e Neutro");
    }
}