#include <stdio.h>

int main() {
    // --- DECLARAÇÃO DOS TIPOS ---

    int idade = 20;               // Inteiro (Inclusive Numeros Negativos)
    float altura = 1.82;          // Decimal
    char inicial = 'V';           // Caractere único (aspas simples)
    char *nome = "Vitor";        // Texto/String (aspas duplas)

    // --- IMPRESSÃO ORGANIZADA ---

    printf("=== MEUS DADOS EM C ===\n\n");

    // Imprimindo o Inteiro (%d)
    printf("Idade: %d anos\n", idade);

    // Imprimindo o Float (%f) - Usando .2 para limitar as casas decimais
    printf("Altura: %.2f metros\n", altura);

    // Imprimindo o Char (%c)
    printf("Inicial do nome: %c\n", inicial);

    // Imprimindo a String (%s)
    printf("Nome completo: %s\n", nome);

    printf("\n=======================\n");

    return 0;
}