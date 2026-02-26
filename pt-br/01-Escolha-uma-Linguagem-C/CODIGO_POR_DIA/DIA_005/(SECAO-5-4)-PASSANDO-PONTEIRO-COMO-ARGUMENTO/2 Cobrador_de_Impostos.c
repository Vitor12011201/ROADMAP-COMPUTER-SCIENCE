#include <stdio.h>

// FUNÇÃO 1: Tenta cobrar imposto do jeito normal (PASSAGEM POR VALOR)
// Ela recebe uma CÓPIA do dinheiro.
void cobrar_imposto_comum(float grana) {
    grana = grana - 10.0; 
    printf("--- Funcao Comum: Tirei 10 da copia, mas o original nem sabe! ---\n");
}

// FUNÇÃO 2: Cobra imposto de verdade (PASSAGEM POR PONTEIRO)
// Ela recebe o ENDEREÇO de onde o dinheiro está guardado.
void cobrar_imposto_real(float *ptr_grana) {
    // Desreferenciamos (*) para mexer no dinheiro original
    *ptr_grana = *ptr_grana - 10.0;
    printf("--- Funcao Real: Usei o endereco para tirar 10 do original! ---\n");
}

int main(void) {
    float meu_saldo = 100.0;

    printf("Saldo inicial: %.2f\n\n", meu_saldo);

    // Tentativa 1: Passando o valor (Não vai mudar nada na main)
    cobrar_imposto_comum(meu_saldo);
    printf("Saldo apos imposto comum: %.2f (Igual! O C copiou o valor)\n\n", meu_saldo);

    // Tentativa 2: Passando o endereço (A mágica acontece)
    cobrar_imposto_real(&meu_saldo);
    printf("Saldo apos imposto real:  %.2f (Mudou! A funcao achou o original)\n", meu_saldo);

    return 0;
}