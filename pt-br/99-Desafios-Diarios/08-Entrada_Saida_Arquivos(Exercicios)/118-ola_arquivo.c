/* Objetivo: Criar o seu primeiro arquivo de texto via código.
Declare um FILE *fp;.
Use fp = fopen("teste.txt", "w"); para abrir um arquivo chamado "teste.txt" no modo de escrita.
Use a função fputc('A', fp); para escrever a letra 'A' dentro dele.
MUITO IMPORTANTE: Use fclose(fp); no final para salvar e fechar. Se você não fechar, o Windows/Linux pode não salvar as alterações!
Abra a pasta do seu projeto e veja se o arquivo apareceu lá.*/

#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("texte.txt", "w");

    fputc('A', fp);

    fclose(fp);

    return 0;
}
