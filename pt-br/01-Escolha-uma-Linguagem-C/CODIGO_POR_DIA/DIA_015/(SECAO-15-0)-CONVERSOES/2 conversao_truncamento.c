#include <stdio.h>

/* OBJETIVO: Ilustrar o perigo do rebaixamento de tipo (demotion/truncation).
   Ao enfiar um numero quebrado dentro de um inteiro, o C simplesmente joga
   a parte decimal no lixo (nao arredonda, ele decepa o numero). */

int main() {
    double preco_curso = 99.99;

    // Jogando um double (8 bytes) para dentro de um int (4 bytes)
    int valor_decepado = preco_curso;

    // O .99 desaparece completamente da existencia
    printf("Preco original: %.2f\n", preco_curso);
    printf("Valor apos o truncamento implícito: %d\n", valor_decepado);

    return 0;
}