/*Crie um programa que peça para o usuário digitar um número inteiro.
Guarde esse número em uma variável x.
Em seguida, imprima a seguinte frase:
"O valor %d está guardado no 'quarto' de número %p".*/

#include <stdio.h>

int main()
{
    int numero;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &numero);
    printf("O valor %d esta guardado no endereco numero %p\n", numero, (void *)&numero);
}