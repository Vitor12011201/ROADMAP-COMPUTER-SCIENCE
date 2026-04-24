/*Objetivo: Usar o typedef de ponteiro como argumento de uma função.
1. Crie um typedef float* FloatPtr;.
2. Crie uma função chamada zerar(FloatPtr p) que coloca o valor 0.0 dentro do endereço que o ponteiro aponta.
3. No main, declare um float saldo = 1500.75;.
4. Chame a função zerar(&saldo);.
5. Imprima o saldo para confirmar que a função conseguiu alterá-lo através do apelido do ponteiro.*/

#include <stdio.h>

typedef float *FloatPtr;

void zerar(FloatPtr p) {

    *p = 0;

}

int main() {

    float saldo = 1500.75;
    printf("Seu saldo atual e de: R$ %.2f\n", saldo);
    zerar(&saldo);
    printf("Seu saldo depois de pagar as contas: R$ %.2f\n", saldo);

    return 0;
}