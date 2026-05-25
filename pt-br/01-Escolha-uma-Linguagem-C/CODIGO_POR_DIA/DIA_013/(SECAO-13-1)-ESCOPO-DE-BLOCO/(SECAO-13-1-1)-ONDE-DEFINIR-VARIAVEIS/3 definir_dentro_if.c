#include <stdio.h>

/* OBJETIVO: Mostrar que podemos definir variáveis dentro de blocos
   internos (como um if), e elas só existem dentro daquele bloco.
   Isso é útil para variáveis temporárias que não precisam existir fora. */

int main() {
    int valor = 5;

    if (valor > 0) {
        int temporario = valor * 2;   // definida dentro do if
        printf("Dentro do if: temporario = %d\n", temporario);
    }

    // tentar usar temporario aqui daria erro:
    // printf("%d\n", temporario);   // ERRO: fora de escopo

    printf("Fora do if, valor = %d\n", valor);
    return 0;
}