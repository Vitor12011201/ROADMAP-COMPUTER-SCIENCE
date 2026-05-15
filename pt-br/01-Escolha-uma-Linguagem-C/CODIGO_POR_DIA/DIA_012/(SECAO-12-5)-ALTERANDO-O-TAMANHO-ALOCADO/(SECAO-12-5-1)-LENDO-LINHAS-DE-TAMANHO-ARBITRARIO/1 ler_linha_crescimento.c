#include <stdio.h>
#include <stdlib.h>

/* OBJETIVO: Ler uma linha do usuário (entrada padrão) sem saber o tamanho
   antecipadamente. O buffer começa pequeno e vai dobrando de tamanho
   sempre que fica cheio, usando realloc. NÃO faz o encolhimento final. */

int main() {
    int capacidade = 8;          // Tamanho inicial do buffer (em bytes)
    int tamanho = 0;             // Quantos caracteres lidos até agora
    char *buffer;                // Ponteiro para o buffer dinâmico
    int caractere;               // Último caractere lido

    // Aloca buffer inicial
    buffer = malloc(capacidade * sizeof(char));
    if (buffer == NULL) {
        fprintf(stderr, "Erro fatal: não foi possível alocar buffer.\n");
        return 1;
    }

    printf("Digite uma linha (Enter para finalizar): ");

    // Lê caractere por caractere até encontrar newline ou EOF
    while ((caractere = getchar()) != '\n' && caractere != EOF) {
        // Verifica se precisa aumentar o buffer (deixa 1 byte para o '\0')
        if (tamanho >= capacidade - 1) {
            capacidade *= 2;     // Dobra a capacidade
            char *novo_buffer = realloc(buffer, capacidade * sizeof(char));

            if (novo_buffer == NULL) {
                fprintf(stderr, "Erro: falha ao redimensionar buffer.\n");
                free(buffer);
                return 1;
            }
            buffer = novo_buffer;
            printf("(Buffer redimensionado para %d bytes)\n", capacidade);
        }

        // Armazena o caractere no buffer e avança o contador
        buffer[tamanho++] = (char)caractere;
    }

    // Adiciona terminador nulo
    buffer[tamanho] = '\0';

    printf("\nLinha lida: \"%s\"\n", buffer);
    printf("Tamanho da linha: %d caracteres\n", tamanho);
    printf("Capacidade final do buffer: %d bytes\n", capacidade);

    free(buffer);
    buffer = NULL;
    return 0;
}