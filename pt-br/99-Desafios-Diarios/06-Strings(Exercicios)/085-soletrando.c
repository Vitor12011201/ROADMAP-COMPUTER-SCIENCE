/*Objetivo: Usar o loop e o formatador %c para ver a string letra por letra.
1. Declare uma string char s[] = "C e top";.
2. Use um loop for para imprimir cada caractere separado por um hífen.
O resultado deve ser: C -   - e -   - t - o - p. (Sim, conte os espaços como caracteres!).*/

#include <stdio.h>

int main() {

    int i = 0;

    char s[] = "C e top";

    while (s[i] != '\0') {
        printf("%c - ", s[i]);
        i++;
    }
    printf("\nO array s[] tem: [%zu] elementos\n" , sizeof(s) / sizeof(char));
}