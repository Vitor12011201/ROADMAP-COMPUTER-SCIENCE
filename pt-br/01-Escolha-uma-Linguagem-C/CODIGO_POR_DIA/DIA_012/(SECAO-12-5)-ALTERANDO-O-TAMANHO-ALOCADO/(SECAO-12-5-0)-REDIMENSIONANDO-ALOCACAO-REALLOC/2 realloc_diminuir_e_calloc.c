#include <stdio.h>
#include <stdlib.h>

/* OBJETIVO: Mostrar realloc também pode reduzir o tamanho (shrink).
   Comparar com alocação inicial via calloc (que já zera) e depois
   redimensionar mantendo os dados existentes. */

int main() {
    int elementos_iniciais = 8;
    int elementos_finais = 4;
    int *numeros, *temp;

    // Usa calloc para alocar e já zerar tudo
    numeros = calloc(elementos_iniciais, sizeof(int));
    if (numeros == NULL) {
        perror("Falha no calloc");
        return 1;
    }

    // Preenche alguns valores
    for (int i = 0; i < elementos_iniciais; i++) {
        numeros[i] = (i + 1) * 10;  // 10, 20, 30, ..., 80
    }

    printf("Array original (tamanho %d):\n", elementos_iniciais);
    for (int i = 0; i < elementos_iniciais; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // Diminui o array para apenas 4 elementos (descarta os 4 últimos)
    temp = realloc(numeros, elementos_finais * sizeof(int));

    if (temp == NULL) {
        fprintf(stderr, "Erro ao reduzir o array.\n");
        free(numeros);
        return 1;
    }

    numeros = temp;  // Atualiza o ponteiro (pode ser o mesmo ou diferente)

    printf("\nArray reduzido (tamanho %d) - apenas os primeiros elementos foram mantidos:\n", elementos_finais);
    for (int i = 0; i < elementos_finais; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // Tenta aumentar novamente para 6 elementos (os novos terão lixo!)
    elementos_finais = 6;
    temp = realloc(numeros, elementos_finais * sizeof(int));

    if (temp == NULL) {
        fprintf(stderr, "Erro ao aumentar novamente.\n");
        free(numeros);
        return 1;
    }

    numeros = temp;

    printf("\nArray aumentado para %d elementos (novas posições contêm lixo/valores indeterminados):\n", elementos_finais);
    for (int i = 0; i < elementos_finais; i++) {
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }

    free(numeros);
    numeros = NULL;

    return 0;
}