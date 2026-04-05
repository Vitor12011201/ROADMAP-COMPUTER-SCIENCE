/*Objetivo: Declarar e imprimir strings literais.
1. No main, declare uma string da seguinte forma: char *frase = "Aprendendo a linguagem C";.
2. Use o printf com o formatador %s para exibir a frase.
3. Tente imprimir apenas o primeiro caractere dessa string usando %c e frase[0].*/

#include <stdio.h>

int main()
{
    char *frase = "Aprendo a linguagem C";

    printf("%s\n", frase);

    printf("A primeira letra do Array de char e: [%c]", frase[0]);
}
