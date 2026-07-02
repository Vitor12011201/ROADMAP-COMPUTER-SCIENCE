#include <stdio.h>

/* OBJETIVO: Implementar uma função customizada de conversão de string para inteiro.
   Aplicar o truque do caractere de forma acumulativa multiplicando por 10 (base decimal)
   e rejeitar imediatamente caracteres que não sejam dígitos válidos. */

int extrair_inteiro(const char *texto, int *resultado_sucesso) {
    int acumulador = 0;

    for (int i = 0; texto[i] != '\0'; i++) {
        // Validação de segurança: se o caractere não for um dígito entre '0' e '9', aborta
        if (texto[i] < '0' || texto[i] > '9') {
            *resultado_sucesso = 0; // Sinaliza falha
            return 0;
        }

        // A mágica da base 10: desloca o número anterior para a esquerda e soma o novo dígito
        acumulador = (acumulador * 10) + (texto[i] - '0');
    }

    *resultado_sucesso = 1; // Sinaliza sucesso
    return acumulador;
}

int main() {
    char entrada_valida[] = "4810";
    char entrada_suja[]   = "48x10"; // Contém um intruso
    int flag_sucesso;

    // Teste 1: Entrada limpa
    int valor1 = extrair_inteiro(entrada_valida, &flag_sucesso);
    if (flag_sucesso) {
        printf("[SUCESSO] \"%s\" convertido para o int: %d\n", entrada_valida, valor1);
    }

    // Teste 2: Entrada inválida
    int valor2 = extrair_inteiro(entrada_suja, &flag_sucesso);
    if (!flag_sucesso) {
        printf("[ERRO] \"%s\" contem caracteres nao numericos! Conversao abortada.\n", entrada_suja);
    }

    return 0;
}