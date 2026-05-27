#include <stdio.h>

/* OBJETIVO: Mostrar que parâmetros de função também criam um escopo.
   Um parâmetro com mesmo nome de uma variável global a oculta dentro da função. */

int taxa = 10;   // Variável global

// Função que tem um parâmetro chamado 'taxa' – oculta a global
void calcular(int taxa) {
    printf("Dentro da função: taxa = %d (parâmetro, não a global)\n", taxa);
    printf("Se quiséssemos acessar a global, não poderíamos (foi ocultada).\n");
}

int main() {
    int local = 5;

    printf("Global (antes da função): taxa = %d\n", taxa);
    calcular(99);
    printf("Global (depois da função): taxa = %d (não foi alterada)\n", taxa);

    return 0;
}