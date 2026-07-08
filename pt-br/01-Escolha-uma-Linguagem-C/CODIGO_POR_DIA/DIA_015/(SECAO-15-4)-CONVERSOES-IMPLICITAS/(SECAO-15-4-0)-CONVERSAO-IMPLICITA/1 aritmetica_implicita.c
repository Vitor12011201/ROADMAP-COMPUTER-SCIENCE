#include <stdio.h>

/* OBJETIVO: Mostrar o compilador promovendo um tipo menor para um maior
   automaticamente em uma operação matemática mista. */

int main() {
    int quantidade_itens = 5;
    double preco_unitario = 19.90;

    /* O que acontece aqui: 'quantidade_itens' é transformado implicitamente
       em double (5.0) antes da multiplicação. A conta é double * double. */
    double total_compra = quantidade_itens * preco_unitario;

    printf("--- Conversão Aritmética implícita ---\n");
    printf("Total calculado automaticamente como double: R$ %.2f\n", total_compra);

    return 0;
}