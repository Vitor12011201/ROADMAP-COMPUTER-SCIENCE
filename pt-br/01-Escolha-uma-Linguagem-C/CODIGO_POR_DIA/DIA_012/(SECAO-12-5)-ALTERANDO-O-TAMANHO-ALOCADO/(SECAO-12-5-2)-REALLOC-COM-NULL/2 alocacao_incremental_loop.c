#include <stdio.h>
#include <stdlib.h>

/* OBJETIVO: Usar realloc com ponteiro inicialmente NULL para ir
   aumentando um array dinamicamente dentro de um loop, sem precisar
   de um malloc separado para o primeiro elemento. */

int main() {
    int *valores = NULL;   // Começa como NULL – perfeito para realloc
    int capacidade = 0;    // Quantos elementos cabem atualmente
    int tamanho = 0;       // Quantos elementos foram inseridos
    int entrada;

    printf("Digite números inteiros (negativo para parar):\n");

    while (1) {
        printf("> ");
        scanf("%d", &entrada);

        if (entrada < 0) break;   // negativo termina

        // Se não houver espaço suficiente, aumenta a capacidade
        if (tamanho >= capacidade) {
            // Define nova capacidade (começa com 4, depois dobra)
            int nova_capacidade = (capacidade == 0) ? 4 : capacidade * 2;

            // realloc com ponteiro NULL na primeira vez funciona como malloc
            int *temp = realloc(valores, nova_capacidade * sizeof(int));

            if (temp == NULL) {
                fprintf(stderr, "Erro: falha ao realocar para %d inteiros.\n", nova_capacidade);
                free(valores);   // libera o que já foi alocado
                return 1;
            }

            valores = temp;
            capacidade = nova_capacidade;
            printf("  -> Capacidade aumentada para %d\n", capacidade);
        }

        valores[tamanho++] = entrada;
    }

    // Exibe os valores armazenados
    printf("\nVocê digitou %d números:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    free(valores);
    valores = NULL;

    return 0;
}