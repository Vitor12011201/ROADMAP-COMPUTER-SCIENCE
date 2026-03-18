/*Objetivo: Processar dados de uma matriz dentro de uma função.
1. Crie uma função void total_por_linha(int m[][2], int linhas).
2. Essa função deve percorrer cada linha, somar os dois elementos dela e imprimir: "Soma da linha X: Y".
3. No main, crie uma matriz int dados[3][2] com valores de sua escolha (ex: vendas de 3 vendedores em 2 meses).
4. Chame a função e veja os totais aparecendo.*/

#include <stdio.h>

void total_por_linha(int matriz[][2], int linha) {
    for (int i = 0; i < linha; i++) {
        int soma = 0;
        for (int j = 0; j < 2; j++) {
        soma = soma + matriz[i][j];
        }
        printf("O vendedor numero: %d, em 2 meses vendeu: R$%d \n", i + 1 , soma);
    }
}

int main() {

    int vendas[][2] = {
        {583, 834},
        {743, 942},
        {632, 537}
    };
    total_por_linha(vendas, 3);
}