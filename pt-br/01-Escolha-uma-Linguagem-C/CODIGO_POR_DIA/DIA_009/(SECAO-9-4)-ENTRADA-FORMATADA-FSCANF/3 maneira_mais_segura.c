#include <stdio.h>

/* OBJETIVO: Evitar que o programa trave se o nome for grande demais (Buffer Overflow).
 * Usamos um numero no %s para dizer o tamanho maximo que o C pode ler.
 */

int main() {
    FILE *fp = fopen("whales.txt", "r");
    char nome[10]; // Buffer pequeno de propósito
    float comprimento;
    int massa;

    if (fp == NULL) return 1;

    // %9s diz: "leia no maximo 9 letras" (deixa 1 espaço para o \0)
    // Isso impede que o nome "humpback" quebre seu programa se o array for pequeno.
    while (fscanf(fp, "%9s %f %d", nome, &comprimento, &massa) != EOF) {
        printf("Processado: %s\n", nome);
    }

    fclose(fp);
    return 0;
}