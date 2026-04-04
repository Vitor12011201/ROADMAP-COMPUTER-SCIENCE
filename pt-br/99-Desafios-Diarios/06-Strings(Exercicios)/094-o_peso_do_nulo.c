/*Objetivo: Provar que o \0 ocupa espaço real na memória.
1. Declare char s[] = "Oi";.
2. Imprima o sizeof(s).
Pergunta: Se "Oi" tem 2 letras, por que o sizeof diz que são 3 bytes?
Resposta: O Array existe o nulo(\0), o nulo mostro para o compilador onde a String precisa parar*/

#include <stdio.h>

int main()
{
    char s[] = "Oi";
    printf("O Array s[] mede [%zu] Bytes, pois na medida esta incluido o nulo, mostrando onde a String deve parar\n",
           sizeof(s));

    return 0;
}
