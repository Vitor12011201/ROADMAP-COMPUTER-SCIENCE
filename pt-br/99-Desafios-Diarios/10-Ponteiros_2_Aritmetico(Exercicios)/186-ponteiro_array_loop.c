/*Objetivo: Percorrer um array inteiro sem usar colchetes [], apenas aritmética.
Crie um array double notas[3] = {8.5, 7.0, 9.2};.
Crie um ponteiro double *ptr = notas; (Lembre-se: o nome do array já é o endereço do primeiro elemento).
Use um loop for que rode 3 vezes.
Dentro do loop, imprima o valor apontado por ptr e depois incremente o ponteiro (ptr++).
Dica: Tente imprimir o valor usando *(ptr + i) dentro do loop para ver outra forma de escrita!*/

#include <stdio.h>

int main() {

    double notas[3] = {8.5 , 7.0 , 9.2};

    double *ptr = notas;

    for (int i = 0; i < 3; i++) {
        printf("endereco da variavel: %p\n", ptr);
        ptr++;
    }

    return 0;

}