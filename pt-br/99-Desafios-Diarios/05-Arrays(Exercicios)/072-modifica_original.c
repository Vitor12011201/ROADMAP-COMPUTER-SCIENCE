/*Objetivo: Provar que funções podem alterar o array original porque recebem o endereço dele.
1. Crie uma função void zerar_negativos(int a[], int len). Ela deve percorrer o array e, se encontrar um número menor que zero, deve transformá-lo em 0.
2. No main, crie um array com valores mistos: {10, -5, 20, -1, 30}.
3. Imprima o array antes da função.
4. Chame a função e imprima o array depois.*/

#include <stdio.h>

void zerar_numeros_negativos(int a[], int comprimento) {
    for (int i = 0; i < comprimento; i++) {
        if (a[i] < 0) {
            a[i] = 0;
        }
        printf("%d\n", a[i]);
    }
}

int main() {
    int array[5] = {10 , -5 , 20 , -1 , 30};
    printf("O Array original e: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", array[i]);
    }
    printf("=====================\n");
    printf("O Array depois das modificacao e: \n");
    zerar_numeros_negativos(array, 5);
}