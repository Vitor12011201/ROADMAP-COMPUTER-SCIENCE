/*Objetivo: Criar um código onde o tipo de dado é "blindado" pelo typedef, facilitando a manutenção.
1. Use o typedef para criar os seguintes apelidos:
ID para o tipo unsigned int.
KM para o tipo float.
2. Crie uma struct anônima com typedef chamada Voo contendo:
ID codigo;
KM distancia;
3. No main:
4. Declare um Voo v1 = {12345, 850.50};.
5. Crie uma função chamada imprimirVoo que recebe uma struct Voo e imprime os dados.*/

#include <stdio.h>

typedef unsigned int ID;
typedef float KM;
typedef struct {
    ID codigo;
    KM distancia;
} Voo;

void imprimirVoo(Voo v) {
    printf("O ID e: %u\nA Distancia e: %.2f\n", v.codigo, v.distancia);
}

int main() {

    Voo v_1 = {.codigo = 12345, .distancia = 850.50};

    imprimirVoo(v_1);

    return 0;

}