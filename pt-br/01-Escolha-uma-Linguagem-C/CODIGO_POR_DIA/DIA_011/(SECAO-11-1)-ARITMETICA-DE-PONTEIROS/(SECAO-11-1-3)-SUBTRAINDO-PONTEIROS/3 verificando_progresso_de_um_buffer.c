#include <stdio.h>

/* OBJETIVO: Em um cenário de processamento de dados (como streaming),
   usar subtração de ponteiros para saber quanto do buffer já foi processado. */

int main() {
    char buffer[100] = "DADOS_DE_VIDEO_YOUTUBE.COM";
    char *ptr_atual = buffer + 15; // Simula que ja processamos 15 bytes

    // Distancia do ponteiro atual para o inicio
    long processado = ptr_atual - buffer;
    // Distancia do ponteiro atual para o fim (limite do array)
    long restante = (buffer + 100) - ptr_atual;

    printf("Processado: %ld bytes\n", processado);
    printf("Espaco restante no buffer: %ld bytes\n", restante);

    return 0;
}