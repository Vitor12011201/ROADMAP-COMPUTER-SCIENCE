#include <stdio.h>

/*Faça um programa em C que:
Peça dois números inteiros ao usuário
Mostre:
Qual é o maior número
Ou se os dois são iguai*/

int ler_Numero() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    return n;
    }

int main() {
    int a = ler_Numero();
    int b = ler_Numero();

    if (a > b) {
        printf("%d e MAIOR que %d", a , b);
    } else if (a < b) {
        printf("%d e MAIOR que %d", b , a);
    } else {
    printf("Os numeros são iguais");
    }

    return 0;
}