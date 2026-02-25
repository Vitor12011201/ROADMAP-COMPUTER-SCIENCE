/*Crie um programa que tenha duas variáveis int a e int b.
Peça para o usuário digitar valores para a e b.
Crie um ponteiro int *p.
Aponte p para a e imprima o valor.
Depois, mude o mesmo ponteiro p para apontar para b e imprima o valor.
(O objetivo é ver que um ponteiro pode mudar de "alvo" durante o programa).*/

#include <stdio.h>

int main() {
    int a;
    int b;
    printf("Digite um numero: \n");
    scanf("%d", &a);
    printf("Digite outro numero: \n");
    scanf("%d", &b);
    int *p = &a;
    printf("O valor da variavel A e: %d\n", a);
    *p = &b;
    printf("O valor da variavel A agora e: %d\n", a);
}