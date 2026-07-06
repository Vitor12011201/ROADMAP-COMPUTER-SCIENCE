#include <stdio.h>

/* OBJETIVO: Demonstrar como o C elimina a parte fracionária de um float/double
   ao convertê-lo para inteiro, ignorando qualquer proximidade de arredondamento. */

int main() {
    double aproximacao_critica = 99.999999;

    // A conversão implícita joga o .999999 no lixo. Ele NÃO arredonda para 100!
    int valor_inteiro = aproximacao_critica;

    printf("--- Teste de Truncamento de Ponto Flutuante ---\n");
    printf("Valor original em double: %f\n", aproximacao_critica);
    printf("Valor após virar int:     %d\n", valor_inteiro);

    return 0;
}