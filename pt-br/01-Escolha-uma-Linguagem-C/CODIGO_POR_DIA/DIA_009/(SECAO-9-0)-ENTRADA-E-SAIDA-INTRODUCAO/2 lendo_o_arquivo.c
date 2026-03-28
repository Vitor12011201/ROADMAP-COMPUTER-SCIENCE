#include <stdio.h>

/* OBJETIVO: Abrir o arquivo para ler o que esta escrito nele.
 */

int main() {
    FILE *arq;
    char texto[100]; // Uma "gaveta" para guardar o que vamos ler

    // Abrimos no modo "r", que significa READ (ler)
    arq = fopen("notas.txt", "r");

    // fgets pega uma linha inteira do arquivo e guarda na variavel 'texto'
    fgets(texto, 100, arq);

    // Mostra na tela o que foi lido do arquivo
    printf("O que estava no arquivo: %s\n", texto);

    fclose(arq);
    return 0;
}