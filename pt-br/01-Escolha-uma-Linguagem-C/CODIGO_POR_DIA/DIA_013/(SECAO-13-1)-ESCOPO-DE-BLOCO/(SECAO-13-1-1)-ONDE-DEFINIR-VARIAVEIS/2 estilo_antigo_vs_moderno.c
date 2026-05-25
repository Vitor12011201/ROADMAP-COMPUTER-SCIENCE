#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* OBJETIVO: Comparar o estilo C89 (variáveis todas no início) com o estilo
   C99 (definir próximo do uso). Demonstrar como o estilo moderno reduz
   erros e melhora legibilidade, principalmente com alocação dinâmica. */

int main() {
    printf("=== Estilo C89 (todas no início) ===\n");
    // No C89, todas as variáveis viriam aqui, mesmo as usadas só depois:
    int x, y, z;
    char nome[50];
    int *ponteiro;
    int resultado;

    x = 10;
    y = 20;
    z = x + y;
    printf("z = %d\n", z);

    strcpy(nome, "C89");
    printf("Nome: %s\n", nome);

    ponteiro = (int*)malloc(sizeof(int));
    if (ponteiro != NULL) {
        *ponteiro = 99;
        resultado = *ponteiro;
        free(ponteiro);
    }
    printf("Resultado: %d\n", resultado);

    printf("\n=== Estilo C99 (definir próximo do uso) ===\n");
    // Agora definimos cada variável imediatamente antes de precisar dela
    int a = 10;
    int b = 20;
    int c = a + b;
    printf("c = %d\n", c);

    char nome2[50] = "C99 moderno";
    printf("Nome: %s\n", nome2);

    // Definição e alocação juntas
    int *p = (int*)malloc(sizeof(int));
    if (p == NULL) {
        fprintf(stderr, "Erro de alocação\n");
        return 1;
    }
    *p = 99;
    int res = *p;
    free(p);
    p = NULL;
    printf("Resultado: %d\n", res);

    // Vantagem: escopo menor para ponteiros, menos chance de uso indevido
    {
        char *temp = (char*)malloc(20 * sizeof(char));
        if (temp != NULL) {
            strcpy(temp, "temporário");
            printf("Bloco interno: %s\n", temp);
            free(temp);
        }
        // 'temp' morre aqui, não pode ser usado depois
    }

    return 0;
}