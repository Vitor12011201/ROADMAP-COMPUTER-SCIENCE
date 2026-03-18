/*Objetivo: Praticar a modificação direta dos valores originais.
1. Crie uma função void aplicar_indice(int *a, int len).
2. Essa função deve multiplicar cada elemento do array pelo seu próprio índice (ex: a[i] = a[i] * i).
3. No main, crie um array {10, 10, 10, 10, 10}.
4. Chame a função e imprima o array no main. O resultado esperado é {0, 10, 20, 30, 40}. */

#include <stdio.h>

void aplicar_indice(int *a, int comprimento) {

    for (int i = 0; i < comprimento; i++) {
        int multiplicacao = a[i] * i;
        a[i] = multiplicacao;
        printf("O elemento:[%d], do Array multiplicado pelo seu indice:[%d] tem o valor total de: [%d]\n", a[i] , i , multiplicacao);
    }
}

int main() {
    int array[] = {10 , 20 , 30 , 40 , 50};
    int comprimento = sizeof(array) / sizeof(int);

    aplicar_indice(array, comprimento);

}