#include <stdio.h>
#include <stdlib.h>

/* OBJETIVO: Encapsular a alocação de um array dinâmico em uma função
   separada, que retorna NULL em caso de falha. A função main trata o erro
   adequadamente. Mostra como alocar qualquer tipo (aqui char para string). */

// Função que aloca um array de caracteres (string) com um tamanho específico
char* criar_string_dinamica(int tamanho) {
    // Aloca 'tamanho' bytes (cada char é 1 byte)
    char *str = malloc(tamanho * sizeof(char));

    // Se falhar, retorna NULL para a função chamadora
    if (str == NULL) {
        return NULL;
    }

    return str;
}

int main() {
    int comprimento = 20;
    char *meu_texto;

    // Tenta criar um array de caracteres (string)
    meu_texto = criar_string_dinamica(comprimento);

    // Verifica se a alocação falhou
    if (meu_texto == NULL) {
        printf("Erro: Não foi possível alocar %d caracteres.\n", comprimento);
        return 1;
    }

    // Se chegou aqui, a memória está garantida
    printf("Array de %d caracteres alocado com sucesso!\n", comprimento);
    printf("Endereço da memória: %p\n", (void*)meu_texto);

    // Libera a memória
    free(meu_texto);
    meu_texto = NULL;

    return 0;
}