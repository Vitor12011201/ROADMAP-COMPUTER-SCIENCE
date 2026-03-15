#include <stdio.h>

// A primeira dimensao e opcional, mas a SEGUNDA (colunas) e OBRIGATORIA.
// O '3' diz ao C que cada linha tem 3 inteiros de largura.
void imprimir_matriz(int m[][3], int linhas) {
    printf("--- Conteudo da Matriz ---\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < 3; j++) {
            // O C usa o '3' da definicao para calcular onde m[i][j] esta na memoria
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int minha_matriz[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    // Passamos a matriz e o numero de linhas separadamente
    imprimir_matriz(minha_matriz, 2);

    return 0;
}