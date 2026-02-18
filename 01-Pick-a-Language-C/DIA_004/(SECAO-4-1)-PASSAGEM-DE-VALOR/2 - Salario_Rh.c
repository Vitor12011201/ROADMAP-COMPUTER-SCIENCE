#include <stdio.h>

// Esta funcao recebe uma COPIA do valor do salario
void aplicar_bonus(float salario_rh) {
    printf("--- RH: Recebi o valor de %.2f ---\n", salario_rh);

    // O RH aumenta o salario localmente
    salario_rh = salario_rh + 500.00;

    printf("--- RH: Calculei o novo valor para %.2f ---\n", salario_rh);
    // Fim da funcao: a variavel 'salario_rh' e destruida aqui!
}

int main(void) {
    float salario_original = 2000.00;

    printf("ANTES da funcao: Salario = %.2f\n", salario_original);

    // Chamamos a funcao. O C faz: salario_rh = salario_original
    // Uma copia de 2000.00 e enviada para a funcao.
    aplicar_bonus(salario_original);

    // O salario_original continua sendo 2000.00!
    // A alteracao do RH ficou presa dentro daquela funcao.
    printf("DEPOIS da funcao: Salario = %.2f\n", salario_original);

    return 0;
}