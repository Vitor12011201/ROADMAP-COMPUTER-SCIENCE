#include <stdio.h>

/* OBJETIVO: Transformar um tipo numérico em uma string de texto de forma segura.
   Utilizar 'snprintf' para garantir que o texto gerado nunca estoure o limite
   máximo do buffer alocado na Stack. */

int main() {
    int latência_ms = 45;
    char mensagem_rede[32]; // Buffer de destino para a string

    /* snprintf funciona como o printf, mas joga o resultado em uma string.
       O segundo argumento (32) protege o código contra Buffer Overflow.
       Ela adiciona automaticamente o terminador '\0' no final. */
    snprintf(mensagem_rede, sizeof(mensagem_rede), "Latencia Sunshine: %d ms", latência_ms);

    // Agora mensagem_rede é uma string válida com caracteres ASCII
    printf("Buffer gerado: %s\n", mensagem_rede);
    printf("Tamanho do caractere 0 (L): %c\n", mensagem_rede[0]);

    return 0;
}