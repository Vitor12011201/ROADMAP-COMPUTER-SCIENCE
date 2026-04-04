/*Objetivo: Entender que ler fora do limite é ruim, mas escrever é muito pior.
Declare um array int notas[2] = {10, 10};.
Tente forçar uma escrita fora do limite: notas[5] = 999;.
Logo em seguida, tente imprimir o notas[5].
O programa travou (Crash/Segmentation Fault) ou ele aceitou o valor?*/

#include <stdio.h>

int main()
{
    int notas[2] = {10, 10};
    notas[5] = 999;
    printf("%d", notas[5]);
}
