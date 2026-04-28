/*Objetivo: Usar subtração e adição de ponteiros para manipular uma string de trás para frente.
Crie uma string: char nome[] = "Vitor";.
Crie um ponteiro char *p = nome;.
Primeiro, use um loop while e p++ para levar o ponteiro até o caractere final (o \0).
Agora, use a aritmética de ponteiros para voltar (p--) e imprimir cada letra de trás para frente até chegar ao início do nome novamente.*/

#include <stdio.h>

int main() {

    char nome[] = "Vitor";

    char *p = nome;

    while (*p != '\0') {
        p++;
    }

    p--;

    while (p >= nome) {
    printf("%c\n",*p);
        p--;
    }

    return 0;

}