/*Objetivo: Ler os primeiros caracteres de um arquivo manualmente.
1. Crie manualmente um arquivo chamado segredo.txt e escreva "Cevada" dentro dele.
2. No seu código, abra o arquivo no modo "r".
3. Chame fgetc(fp) três vezes seguidas, guardando cada resultado em uma variável int diferente.
4. Imprima os três caracteres.
Note como o ponteiro fp "anda" sozinho para a próxima letra a cada chamada!
5. Não esqueça do fclose(fp).*/

#include <stdio.h>

int main() {

    FILE *fp;

    fp = fopen("segredo.txt", "w");

    if (fp == NULL) {
        printf("O arquivo nao existe\n");
        return 1;
    }
        fputs("Cevada", fp);

        fclose(fp);

        fp = fopen("segredo.txt", "r");

        if (fp == NULL) {
            printf("O arquivo nao existe\n");
            return 1;
        }

        int letra_1 = fgetc(fp);
        int letra_2 = fgetc(fp);
        int letra_3 = fgetc(fp);

        printf("Mostrar as letras: %c , %c , %c \n", letra_1, letra_2, letra_3);

        fclose(fp);

        return 0;
}