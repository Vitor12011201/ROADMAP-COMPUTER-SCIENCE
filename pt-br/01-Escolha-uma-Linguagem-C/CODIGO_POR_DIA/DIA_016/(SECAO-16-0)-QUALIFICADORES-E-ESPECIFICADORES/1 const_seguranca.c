#include <stdio.h>

/* OBJETIVO: Demonstrar o uso do qualificador 'const'. Ele transforma uma
   variável em uma região de memória de "apenas leitura" protegida pelo compilador. */

int main() {
    // Uma variável comum pode ser alterada a qualquer momento
    int taxa_quadros = 60;
    taxa_quadros = 120; // Perfeitamente válido

    // O qualificador 'const' blinda o valor contra modificações acidentais
    const int LIMITE_BUFFERS = 8;

    // Se você tentar descommentar a linha abaixo, o código se recusa a compilar:
    // LIMITE_BUFFERS = 16; // ERRO: assignment of read-only variable

    printf("--- Uso do Qualificador const ---\n");
    printf("Taxa de quadros dinâmica: %d FPS\n", taxa_quadros);
    printf("Limite físico de buffers: %d (Protegido)\n", LIMITE_BUFFERS);

    return 0;
}