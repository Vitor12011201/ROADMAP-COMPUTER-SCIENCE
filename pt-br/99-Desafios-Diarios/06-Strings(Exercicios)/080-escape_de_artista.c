/* Objetivo: Dominar as sequências de escape (caracteres especiais).
Escreva um programa que imprima exatamente a seguinte frase (incluindo as aspas e os pulos de linha):
1. Ele disse: "O caminho é longo..."
Mas o \atalho\ é perigoso.
2. Dica: Você vai precisar usar \" para as aspas e \\ para a barra invertida*/

#include <stdio.h>

int main()
{
    char *texto_poetico = "Ele disse: \"O caminho e longo...\nMas o \\atalho\\ e perigoso.";
    printf("%s", texto_poetico);
}
