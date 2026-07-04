#include <stdio.h>
#include <stdbool.h>

/* OBJETIVO: Provar que qualquer valor diferente de zero (negativos, floats minúsculos)
   é colapsado estritamente para o valor inteiro 1 quando armazenado em um bool. */

int main() {
    // Atribuindo números bizarros a variáveis booleanas
    bool negativo = -5;
    bool float_minulo = 0.0001f;
    bool zero_float = 0.0;

    printf("--- Comportamento de Coercao Booleana ---\n");

    // -5 não é zero, então vira estritamente 1!
    printf("O numero -5 virou:      %d (true)\n", negativo);

    // 0.0001 não é zero, então vira estritamente 1!
    printf("O float 0.0001f virou:  %d (true)\n", float_minulo);

    // 0.0 é o zero absoluto do ponto flutuante, então vira 0!
    printf("O float 0.0 virou:      %d (false)\n", zero_float);

    return 0;
}