/* O que você deve fazer:
Declare uma matriz cinema[3][3] de inteiros.
Preencha a matriz assim:
Coloque 0 para cadeiras vazias.
Coloque 1 para cadeiras ocupadas.
Exemplo: Tente deixar a cadeira do meio (1, 1) ocupada.
Use dois loops for (um dentro do outro) para imprimir o mapa do cinema. */

#include <stdio.h>

int main () {
    int cinema[3][3] = {
        {0,1,0},
        {1,1,0},
        {1,0,0}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d", cinema[i][j]);
        }
        printf("\n");
    }

printf("tamanho total do cinema: %zu bytes\n", sizeof(cinema));
printf("tamanho total de uma fileira: %zu bytes\n", sizeof(cinema[0]));
printf("tamanho total de uma cadeira especifica: %zu bytes\n", sizeof(cinema[0][0]));
}