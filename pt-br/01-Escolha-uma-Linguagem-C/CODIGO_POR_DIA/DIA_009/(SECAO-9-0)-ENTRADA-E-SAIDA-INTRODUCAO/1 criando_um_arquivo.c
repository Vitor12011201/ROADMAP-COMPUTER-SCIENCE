#include <stdio.h>

/* OBJETIVO: Criar um arquivo e escrever uma palavra dentro dele.
 */

int main() {
    // FILE* eh o "ponteiro" que segura o arquivo aberto
    FILE *arq;

    // fopen("nome", "modo"). O "w" significa WRITE (escrever)
    arq = fopen("notas.txt", "w");

    // fprintf funciona como o printf comum, mas manda para o arquivo 'arq'
    fprintf(arq, "Estudando C com o Beej!");

    // Fecha o arquivo (obrigatorio!)
    fclose(arq);

    printf("Arquivo criado com sucesso!\n");
    return 0;
}