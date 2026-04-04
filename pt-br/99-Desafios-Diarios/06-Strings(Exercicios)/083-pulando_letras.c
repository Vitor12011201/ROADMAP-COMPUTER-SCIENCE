/* Objetivo: Usar aritmética de ponteiros para "cortar" a string.
1. Declare char *s = "Ola Mundo!";.
2. Crie um novo ponteiro char *p = s + 4;.
3. Imprima p usando %s.*/

#include <stdio.h>

int main()
{
    char* s = "Ola Mundo!";
    char* p = s + 4;
    printf("%s", p);
}
