#include <stdio.h>

/*
 * Diferenca entre char[] (mutavel) e char* (constante literal).
 */
int main() {
    // Como array, podemos mudar as letras
    char mutavel[] = "Gato";
    mutavel[0] = 'R';
    printf("Alterado: %s\n", mutavel); // Vira "Rato"

    // IMPORTANTE: char *p = "Texto" geralmente aponta para uma area
    // de memoria que o sistema operacional nao deixa voce escrever.
    char *fixo = "Imutavel";

    printf("String fixa: %s\n", fixo);
    // fixo[0] = 'A'; // ISSO CAUSARIA UM ERRO (Segmentation Fault)!

    return 0;
}