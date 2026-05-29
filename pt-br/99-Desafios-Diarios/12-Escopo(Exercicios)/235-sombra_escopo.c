/* Objetivo: Entender o fenômeno de shadowing (quando uma variável local "esconde" uma global de mesmo nome).
Instruções:
1. Declare uma variável de escopo de arquivo int taxa = 5;.
2. Crie uma função void calcular_sem_sombra() que apenas imprime o valor de taxa.
3. Crie uma função void calcular_com_sombra(). Dentro dela, declare uma variável local chamada int taxa = 20; e imprima seu valor.
4. No main, chame as duas funções e observe como a variável local "escondeu" a global dentro do seu próprio bloco de código. */

#include <stdio.h>

int taxa = 5;

void calcular_sem_sombra(void)
{
    printf("O valor da taxa %d\n", taxa);
}

void calcular_com_sombra(void)
{
    taxa = 20;
    printf("O valor da taxa %d\n", taxa);
}

int main()
{

    calcular_sem_sombra();
    calcular_com_sombra();
    printf("Valor da taxa: %d", taxa);

    return 0;

}
