#include <stdio.h>

/* OBJETIVO: Demonstrar o uso do cast explícito para forçar uma divisão
   de ponto flutuante entre dois números inteiros comuns. */

int main() {
    int soma_notas = 15;
    int total_provas = 4;

    // Sem cast, 15 / 4 resulta em 3 (o C corta a parte fracionária sem dó)
    double media_truncada = soma_notas / total_provas;

    // Com cast explícito, forçamos 'soma_notas' a virar double (15.0) temporariamente.
    // O C é obrigado a fazer uma divisão double / int, promovendo o resultado para 3.75.
    double media_correta = (double)soma_notas / total_provas;

    printf("--- Divisao de Inteiros com Cast ---\n");
    printf("Media sem cast (truncada): %.2f\n", media_truncada);
    printf("Media com cast (correta):  %.2f\n", media_correta);

    return 0;
}