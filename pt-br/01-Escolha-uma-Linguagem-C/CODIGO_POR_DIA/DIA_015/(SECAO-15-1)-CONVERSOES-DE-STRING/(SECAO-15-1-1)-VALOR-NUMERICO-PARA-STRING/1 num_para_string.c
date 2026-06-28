#include <stdio.h>

/* OBJETIVO: Demonstrar a conversão direta de um número inteiro para uma
   string utilizando 'snprintf' com um limite de buffer seguro. */

int main() {
    char buffer_texto[20];
    int pontuacao_maxima = 9999;

    // Convertendo o int para texto e guardando no buffer
    // sizeof(buffer_texto) garante que o C só escreverá até 20 bytes
    snprintf(buffer_texto, sizeof(buffer_texto), "%d", pontuacao_maxima);

    // Agora podemos manipular ou exibir como uma string comum
    printf("A pontuacao convertida em string eh: \"%s\"\n", buffer_texto);

    return 0;
}