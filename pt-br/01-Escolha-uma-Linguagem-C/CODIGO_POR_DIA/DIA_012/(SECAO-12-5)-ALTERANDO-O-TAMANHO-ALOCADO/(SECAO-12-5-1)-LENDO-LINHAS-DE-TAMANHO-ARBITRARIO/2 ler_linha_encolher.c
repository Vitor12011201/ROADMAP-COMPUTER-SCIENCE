#include <stdio.h>
#include <stdlib.h>

/* OBJETIVO: Ler uma linha de um arquivo (ou stdin) com buffer dinâmico,
   e depois usar realloc para encolher o buffer para exatamente o tamanho
   necessário (mais o terminador nulo). Retornar o ponteiro para a linha
   já encolhida. */

// Função que lê uma linha de qualquer arquivo (FILE*) e retorna a linha
// em um buffer exatamente do tamanho certo. O chamador deve dar free.
char* ler_linha(FILE *arquivo) {
    int capacidade = 8;       // capacidade inicial
    int tamanho = 0;          // número de caracteres lidos (sem o '\0')
    char *buffer;             // buffer dinâmico
    int c;

    buffer = malloc(capacidade * sizeof(char));
    if (buffer == NULL) return NULL;

    // Lê até newline ou EOF
    while ((c = fgetc(arquivo)) != '\n' && c != EOF) {
        // Se o buffer está cheio (deixa 1 byte para '\0'), dobra
        if (tamanho >= capacidade - 1) {
            capacidade *= 2;
            char *temp = realloc(buffer, capacidade * sizeof(char));
            if (temp == NULL) {
                free(buffer);
                return NULL;
            }
            buffer = temp;
        }
        buffer[tamanho++] = (char)c;
    }

    // Verifica se leu algo (caso EOF logo no início)
    if (c == EOF && tamanho == 0) {
        free(buffer);
        return NULL;   // fim de arquivo sem nenhum caractere
    }

    // --- ENCOLHIMENTO (shrink to fit) ---
    // Agora sabemos que o buffer tem 'tamanho' caracteres úteis.
    // Alocamos o tamanho exato + 1 byte para o terminador nulo.
    int tamanho_ideal = tamanho + 1;
    char *buffer_encolhido = realloc(buffer, tamanho_ideal * sizeof(char));

    if (buffer_encolhido != NULL) {
        buffer = buffer_encolhido;   // encolheu com sucesso
    } // Se falhar, mantém o buffer original (maior)

    // Adiciona o terminador nulo
    buffer[tamanho] = '\0';
    return buffer;
}

int main() {
    FILE *arquivo = fopen("entrada.txt", "r");

    // Se o arquivo não existir, cria um exemplo
    if (arquivo == NULL) {
        printf("Arquivo 'entrada.txt' não encontrado. Criando exemplo...\n");
        arquivo = fopen("entrada.txt", "w");
        fprintf(arquivo, "Primeira linha de exemplo.\nSegunda linha bem mais longa, com vários caracteres.\n");
        fclose(arquivo);
        arquivo = fopen("entrada.txt", "r");
        if (arquivo == NULL) {
            fprintf(stderr, "Erro ao criar/abrir arquivo.\n");
            return 1;
        }
    }

    char *linha;
    int num_linha = 1;
    while ((linha = ler_linha(arquivo)) != NULL) {
        printf("Linha %d (%ld bytes exatos): \"%s\"\n", num_linha, strlen(linha) + 1, linha);
        free(linha);
        num_linha++;
    }

    fclose(arquivo);
    return 0;
}