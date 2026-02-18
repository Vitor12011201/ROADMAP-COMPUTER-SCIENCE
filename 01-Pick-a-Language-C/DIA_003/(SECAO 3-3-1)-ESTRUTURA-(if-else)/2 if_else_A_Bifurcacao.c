#include <stdio.h>

// Comparador de senhas

int main() {
    int senha_digitada = 1234;
    int senha_correta = 2026;

    printf("--- SISTEMA DE SEGURANCA ---\n");

    if (senha_digitada == senha_correta) {
        // Se a comparação for VERDADEIRA (1), executa isso:
        printf("ACESSO CONCEDIDO!\n");
        printf("Bem-vindo ao sistema, chefe.\n");
    }
    else {
        // Se a comparação for FALSA (0), executa isso:
        printf("ACESSO NEGADO!\n");
        printf("Alerta: Senha incorreta detectada.\n");
    }

    printf("--- FIM DA OPERACAO ---\n");

    return 0;
}