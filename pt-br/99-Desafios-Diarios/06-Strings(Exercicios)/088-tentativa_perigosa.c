/*Objetivo: Sentir na pele o erro de memória (ou o comportamento indefinido).
1. Declare uma string usando ponteiro: char *perigo = "Nao me mude";.
2. Tente mudar a primeira letra: perigo[0] = 'X';.
3. Tente rodar o programa.
O que aconteceu? O programa fechou sozinho? Deu erro? (Isso prova que o ponteiro aponta para a memoria de leitura).*/

#include <stdio.h>

int main()
{
    char* perigo = "Nao me mude";
    perigo[0] = 'X';
    printf("%s", perigo);

    return 0;
}
