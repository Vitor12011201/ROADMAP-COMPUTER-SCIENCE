#include <stdio.h>

/* OBJETIVO: Ilustrar o erro clássico de alinhar números decimais usando
   zeros à esquerda. Mostrar como o C transforma silenciosamente o valor
   em Octal (base 8), gerando resultados bizarros e bugs difíceis de achar. */

int main() {
    // O programador queria criar uma lista bonita e alinhada na tela:
    int id_usuario_1 = 11111; // Decimal 11111
    int id_usuario_2 = 00111; // C interpreta como OCTAL devido ao zero inicial!

    printf("--- O Perigo do Alinhamento com Zeros ---\n");
    printf("ID 1 (esperado 11111): %d\n", id_usuario_1);

    // O octal 111 equivale a (1 * 8^2) + (1 * 8^1) + (1 * 8^0) = 64 + 8 + 1 = 73
    printf("ID 2 (esperado 00111): %d (Virou 73 em decimal!)\n", id_usuario_2);

    // CUIDADO EXTRA: Números octais só vão de 0 a 7.
    // Descomentar a linha abaixo gera um ERRO DE COMPILAÇÃO imediato:
    // int erro_octal = 018; // Erro: dígito inválido '8' em constante octal

    return 0;
}