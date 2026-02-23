/*Escreva um programa que declare três variáveis de tipos diferentes: um char, um int e um double.
Imprima o valor de cada uma.
Imprima o endereço de cada uma usando %p.
Imprima o tamanho que cada uma ocupa na memória usando sizeof.
Dica: Observe se os endereços são números próximos um do outro!*/

#include <stdio.h>


int main ()
{
    char n_1 = 'A';
    int n_2 = 20;
    double n_3 = 30;

    printf("O valor da variavel n_1 e: %c\n", n_1);
    printf("O endereco na memoria de n_1 e: %p\n", (void *) &n_1);
    printf("O tamanho da variavel n_1 e: %zu\n", sizeof(n_1));

    printf("================================================\n");

    printf("O valor da variavel n_2 e: %d\n", n_2);
    printf("O endereco na memoria de n_2 e: %p\n",(void *) &n_2);
    printf("O tamanho da variavel n_2 e: %zu\n", sizeof(n_2));

    printf("================================================\n");

    printf("O valor de variavel n_3 e: %.2f\n", n_3);
    printf("O endereco na memoria de n_3 e: %p\n", (void *) &n_3);
    printf("O tamanho da variavel n_3 e: %zu\n", sizeof(n_3));

}