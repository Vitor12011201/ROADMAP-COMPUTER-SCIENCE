#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* OBJETIVO: Implementar um leitor de linhas que mantém uma estrutura
   com o buffer, capacidade atual e tamanho real, permitindo reuso
   do mesmo buffer para múltiplas linhas (otimização de alocações).
   Usa realloc para crescer e opcionalmente encolher. */

typedef struct {
    char *dados;        // ponteiro para o buffer
    int capacidade;     // bytes alocados atualmente
    int tamanho;        // bytes usados (sem contar '\0')
} LinhaDinamica;

// Inicializa a estrutura com um tamanho inicial
void inicializar_linha(LinhaDinamica *linha, int capacidade_inicial) {
    linha->dados = malloc(capacidade_inicial * sizeof(char));
    if (linha->dados == NULL) {
        linha->capacidade = 0;
        linha->tamanho = 0;
        return;
    }
    linha->capacidade = capacidade_inicial;
    linha->tamanho = 0;
    linha->dados[0] = '\0';   // string vazia por enquanto
}

// Libera a memória interna da estrutura
void liberar_linha(LinhaDinamica *linha) {
    free(linha->dados);
    linha->dados = NULL;
    linha->capacidade = 0;
    linha->tamanho = 0;
}

// Lê a próxima linha do arquivo usando o buffer interno (reutiliza memória)
// Retorna 1 se leu uma linha, 0 se EOF ou erro.
int ler_linha_reutilizavel(FILE *arquivo, LinhaDinamica *linha) {
    // Reinicia o tamanho (sobrescreve a linha anterior)
    linha->tamanho = 0;
    int c;

    while ((c = fgetc(arquivo)) != '\n' && c != EOF) {
        // Verifica se precisa crescer (deixa 1 byte para '\0')
        if (linha->tamanho >= linha->capacidade - 1) {
            int nova_capacidade = (linha->capacidade == 0) ? 8 : linha->capacidade * 2;
            char *temp = realloc(linha->dados, nova_capacidade * sizeof(char));
            if (temp == NULL) {
                return 0;   // falha, mantém dados antigos
            }
            linha->dados = temp;
            linha->capacidade = nova_capacidade;
        }
        linha->dados[linha->tamanho++] = (char)c;
    }

    // Se encontrou EOF sem ler nenhum caractere, não há linha
    if (c == EOF && linha->tamanho == 0) {
        return 0;
    }

    // Adiciona terminador nulo
    linha->dados[linha->tamanho] = '\0';

    // Opcional: encolher para o tamanho exato se houver muita folga
    // (só encolhe se a folga for > 20% da capacidade, por exemplo)
    if (linha->capacidade > linha->tamanho + 1 &&
        linha->capacidade > 32) {  // evita micro-encolhimentos
        int tamanho_ideal = linha->tamanho + 1;
        char *temp = realloc(linha->dados, tamanho_ideal * sizeof(char));
        if (temp != NULL) {
            linha->dados = temp;
            linha->capacidade = tamanho_ideal;
        }
    }

    return 1;
}

int main() {
    FILE *arquivo = fopen("frases.txt", "r");

    // Cria arquivo de exemplo se não existir
    if (arquivo == NULL) {
        printf("Criando arquivo 'frases.txt' de exemplo...\n");
        arquivo = fopen("frases.txt", "w");
        fprintf(arquivo, "Esta é a primeira frase.\n"
                         "Uma segunda frase consideravelmente mais longa apenas para teste.\n"
                         "Curta\n"
                         "Linha final com algum texto.\n");
        fclose(arquivo);
        arquivo = fopen("frases.txt", "r");
        if (arquivo == NULL) {
            fprintf(stderr, "Erro ao abrir arquivo.\n");
            return 1;
        }
    }

    LinhaDinamica linha;
    inicializar_linha(&linha, 16);   // capacidade inicial 16 bytes

    int contador = 0;
    while (ler_linha_reutilizavel(arquivo, &linha)) {
        contador++;
        printf("Linha %d (capacidade=%d, tamanho=%d): \"%s\"\n",
               contador, linha.capacidade, linha.tamanho, linha.dados);
    }

    liberar_linha(&linha);
    fclose(arquivo);
    return 0;
}