// O desreferenciamento não serve só para mudar o valor,
// mas também para ler o que está lá dentro sem usar o nome da variável original.

#include <stdio.h>

int main(void) {
    char letra = 'A';
    char *p = &letra;

    // Aqui usamos o '*' apenas para PEGAR o valor e mostrar no printf
    printf("A variavel 'letra' contem: %c\n", *p);

    if (*p == 'A') {
        printf("O ponteiro confirmou: e a letra A mesmo!\n");
    }

    return 0;
}