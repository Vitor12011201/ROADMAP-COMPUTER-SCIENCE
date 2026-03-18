/*Objetivo: Usar funções para "limpar" ou restringir dados em um array.
Imagine que você está recebendo dados de um sensor que não podem passar de 100.
1. Crie uma função void aplicar_teto(int a[], int len).
2. Se algum valor no array for maior que 100, a função deve alterá-lo para exatamente 100.
3. No main, use um array com valores como {45, 120, 88, 250, 95}.
4. Imprima o array antes e depois de chamar a função para ver a "limitação" acontecendo.*/

#include <stdio.h>

void aplicar_teto(int *a, int comprimento) {

    for (int i = 0; i < comprimento; i++) {
        if (a[i] > 100) {
            a[i] = 100;
        }
        printf("%d\n", a[i]);
    }
}

int main() {

    int array[] = {45 , 120 , 88 , 250 , 95};
    printf("Nenhum numero do Array pode passar de 100, vou resolver isso com uma funcao: \n");
    aplicar_teto(array, sizeof(array) / sizeof(int));
}