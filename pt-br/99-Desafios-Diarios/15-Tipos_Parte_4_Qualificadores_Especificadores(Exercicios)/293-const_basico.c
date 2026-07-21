/* Objetivo: Entender como o qualificador const impede alterações acidentais em uma variável durante a execução do programa.
Instruções:
1. Declare uma constante inteira: const int taxa_limite = 100;.
2. Tente alterar o valor dela na linha seguinte: taxa_limite = 150;.
3. Observe o erro gerado pelo compilador ao tentar compilar esse código.
4. Comente a linha da alteração proibida para que o código volte a compilar e imprima o valor de taxa_limite usando printf.*/

#include <stdio.h>

int main(void)
{
    const int taxa_limite = 100;

    // Esta linha gera erro porque taxa_limite é constante:
    // taxa_limite = 150;

    printf("Taxa limite: %d\n", taxa_limite);

    return 0;
}