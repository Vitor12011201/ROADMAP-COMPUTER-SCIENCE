#include <stdio.h>

/* OBJETIVO: Criar uma função que aceita um ponteiro para QUALQUER tipo de dado
   usando void*, diferenciando a leitura interna por meio de uma flag de tipo. */

void imprimir_dado(void *ponteiro, char tipo) {
    printf("Dado recebido: ");
    if (tipo == 'i') {
        // Passo 1: Transforma o void* em um int*
        int *p_int = ponteiro;
        // Passo 2: Desreferencia para pegar o valor
        printf("%d (Inteiro)\n", *p_int);
    }
    else if (tipo == 'f') {
        // Podemos fazer o cast e a desreferenciação em uma única linha compacta:
        printf("%.2f (Float)\n", *(float *)ponteiro);
    }
}

int main() {
    int idade = 28;
    float taxa = 5.75f;

    printf("--- Impressor Polimorfico via void* ---\n");

    // Passando endereços de tipos completamente diferentes para a mesma função
    imprimir_dado(&idade, 'i');
    imprimir_dado(&taxa, 'f');

    return 0;
}