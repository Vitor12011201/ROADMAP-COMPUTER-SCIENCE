/* Objetivo: Criar uma função utilitária que aceita dados de qualquer tipo usando void* e um indicador de tipo.
Instruções:
1. Escreva uma função chamada void imprime_dado(void *dados, char tipo).
2. Dentro dela, use uma estrutura switch(tipo):
 - Se tipo == 'i', faça o cast de dados para int*, desreferencie e imprima como inteiro.
 - Se tipo == 'f', faça o cast para float* e imprima como flutuante.
 - Se tipo == 'c', faça o cast para char* e imprima como caractere.
3. No seu main, use essa mesma função para imprimir um int x = 42;, um float y = 3.14f; e um char z = 'A';. */

#include <stdio.h>

void imprime_dado(void *dados, char tipo)
{
    switch (tipo)
    {
    case 'i':
        printf("%d\n", *(int *)dados);
        break;

    case 'f':
        printf("%.2f\n", *(float *)dados);
        break;

    case 'c':
        printf("%c\n", *(char *)dados);
        break;

    default:
        printf("Tipo inválido\n");
        break;
    }
}

int main()
{

    int x = 42;

    float y = 3.14f;

    char z = 'A';

    imprime_dado(&x, 'i');

    imprime_dado(&y, 'f');

    imprime_dado(&z, 'c');

    return 0;

}
