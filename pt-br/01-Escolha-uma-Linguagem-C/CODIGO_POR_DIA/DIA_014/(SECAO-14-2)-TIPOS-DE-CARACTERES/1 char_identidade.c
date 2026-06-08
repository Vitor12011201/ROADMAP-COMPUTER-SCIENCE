#include <stdio.h>

/* OBJETIVO: Demonstrar que um 'char' armazena um número e pode ser impresso
   tanto como caractere (%c) quanto como valor numérico inteiro (%d). */

int main() {
    char letra = 'A'; // Na tabela ASCII, 'A' equivale ao número 65

    // Imprimindo a mesma variável de duas formas diferentes
    printf("Exibicao como caractere: %c\n", letra);
    printf("Exibicao como numero int: %d\n", letra);

    // Também podemos atribuir o número diretamente
    char outra_letra = 66; // 66 é o 'B'
    printf("O numero 66 em caractere eh: %c\n", outra_letra);

    return 0;
}