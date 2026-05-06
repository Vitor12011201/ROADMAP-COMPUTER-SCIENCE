/* Objetivo: Entender o perigo do "Memory Leak" (Vazamento de Memória).
1. Crie uma função chamada criar_dados() que aloca um array de 1000 inteiros com malloc, mas não usa o free.
2. No main, use um loop para chamar essa função 100 vezes.
3. A cada chamada, o ponteiro retornado pela função é perdido (sobrescrito), mas a memória continua ocupada no sistema.
4. O Desafio: Corrija o programa para que ele receba o ponteiro da função, use-o e depois libere a memória corretamente, garantindo que o programa termine com "zero" de desperdício.*/

#include <stdio.h>
#include <stdlib.h>

int* criar_dados() {

    return malloc(1000 * sizeof(int));

}

int main() {

    int *dados;

    for (int i = 0; i < 100; i++) {
        dados = criar_dados();

        if (dados == NULL) {
            printf("Erro de memoria\n");
            return 1;
        }

        free(dados);

        dados = NULL;
    }

    return 0;

}