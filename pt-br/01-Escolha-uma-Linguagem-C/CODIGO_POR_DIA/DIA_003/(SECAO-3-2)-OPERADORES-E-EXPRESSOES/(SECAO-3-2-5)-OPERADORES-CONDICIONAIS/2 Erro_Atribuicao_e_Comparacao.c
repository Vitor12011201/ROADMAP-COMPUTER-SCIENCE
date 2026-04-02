#include <stdio.h>

int main()
{
    int x = 0;

    // O erro: em vez de comparar, você está ATRIBUINDO 10 a x!
    // Como 10 não é zero, o IF sempre será VERDADEIRO.
    if (x = 10) {
        printf("Isso vai imprimir, mesmo parecendo errado!\n");
        printf("Agora o valor de x mudou para: %d\n", x);
    }
}