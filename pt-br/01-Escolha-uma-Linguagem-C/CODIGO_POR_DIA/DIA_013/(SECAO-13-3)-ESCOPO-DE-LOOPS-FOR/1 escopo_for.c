#include <stdio.h>

/* OBJETIVO: Demonstrar o escopo básico de uma variável declarada dentro do 'for'.
   A variável 'i' nasce na inicialização do loop e deixa de existir (morre na Stack)
   assim que o loop termina. */

int main() {
    // 'i' existe apenas dentro deste bloco de controle
    for (int i = 0; i < 5; i++) {
        printf("Contagem: %d\n", i);
    }

    // Se você tentar descomentar a linha abaixo, o código não compila:
    // printf("Valor final de i: %d\n", i); // ERRO: 'i' undeclared

    return 0;
}