#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* OBJETIVO: Encapsular a lógica de redimensionamento em uma função
   que trata erros e não vaza memória. Trabalhar com array de estruturas,
   onde precisamos preservar os dados existentes. */

typedef struct {
    int id;
    char nome[50];
    float nota;
} Aluno;

// Função para redimensionar um array de Alunos de forma segura
// Recebe o ponteiro atual e o novo tamanho. Retorna novo ponteiro ou NULL se falhar.
Aluno* redimensionar_alunos(Aluno *lista_atual, int novo_tamanho) {
    Aluno *nova_lista;

    // Tenta redimensionar (realloc já copia os dados antigos se necessário)
    nova_lista = realloc(lista_atual, novo_tamanho * sizeof(Aluno));

    if (nova_lista == NULL) {
        fprintf(stderr, "Erro: Falha ao redimensionar array de alunos.\n");
        return NULL;  // lista_atual continua válida, quem chamou decide se libera
    }

    // Se os novos elementos estiverem além do tamanho antigo, podemos inicializá-los
    // Mas realloc não zera os novos. Neste exemplo, vamos apenas retornar.
    return nova_lista;
}

int main() {
    Aluno *alunos;
    int tamanho = 3;

    // Aloca espaço para 3 alunos (com calloc para zerar)
    alunos = calloc(tamanho, sizeof(Aluno));
    if (alunos == NULL) {
        fprintf(stderr, "Erro fatal: Falha na alocação inicial.\n");
        return 1;
    }

    // Preenche os 3 primeiros
    alunos[0].id = 1;
    strcpy(alunos[0].nome, "Ana");
    alunos[0].nota = 8.5;

    alunos[1].id = 2;
    strcpy(alunos[1].nome, "Bruno");
    alunos[1].nota = 7.0;

    alunos[2].id = 3;
    strcpy(alunos[2].nome, "Carla");
    alunos[2].nota = 9.0;

    printf("Lista original (%d alunos):\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("ID %d: %s, Nota %.1f\n", alunos[i].id, alunos[i].nome, alunos[i].nota);
    }

    // Redimensiona para 5 alunos
    int novo_tamanho = 5;
    Aluno *temp = redimensionar_alunos(alunos, novo_tamanho);

    if (temp == NULL) {
        free(alunos);
        return 1;
    }

    alunos = temp;  // Atualiza o ponteiro

    // Os novos alunos (índices 3 e 4) estão com lixo de memória.
    // Precisamos inicializá-los manualmente:
    alunos[3].id = 4;
    strcpy(alunos[3].nome, "Daniel");
    alunos[3].nota = 6.5;

    alunos[4].id = 5;
    strcpy(alunos[4].nome, "Elisa");
    alunos[4].nota = 8.0;

    printf("\nLista após redimensionar e adicionar novos alunos (%d alunos):\n", novo_tamanho);
    for (int i = 0; i < novo_tamanho; i++) {
        printf("ID %d: %s, Nota %.1f\n", alunos[i].id, alunos[i].nome, alunos[i].nota);
    }

    free(alunos);
    alunos = NULL;

    return 0;
}