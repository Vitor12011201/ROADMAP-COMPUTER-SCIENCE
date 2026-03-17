/* Crie um programa que:
Declare um array de inteiros com tamanho 6.
Peça para o usuário digitar os 6 números.
O desafio: Imprima o array na ordem inversa (do último para o primeiro).*/

#include <stdio.h>

int main () {

    int array[6];
    for (int i = 0; i < 6; i++) {
        printf("Digite um numero inteiro: \n");
        scanf("%d", &array[i]);
    }
    printf("O Array invertido fica assim: \n");
    for (int j = 5; j >= 0; j--) {
        printf("%d\n", array[j]);
    }
}