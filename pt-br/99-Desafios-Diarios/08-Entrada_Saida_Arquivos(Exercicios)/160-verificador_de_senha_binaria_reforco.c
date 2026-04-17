/*Objetivo: Praticar a comparação de um dado lido do arquivo com uma entrada do usuário.
1. Grave um único int senha_mestra = 1234; em um arquivo chamado secret.bin.
2. Feche o arquivo.
3. Peça para o usuário digitar uma senha no console (scanf).
4. Abra o arquivo, leia a senha_mestra para uma variável e compare: se a senha digitada for igual à do arquivo, imprima "Acesso Permitido".*/

#include <stdio.h>

int main()
{
    FILE *fp;
    int senha_mestra = 1234;
    int temp = 0;
    int verificar_senha = 0;

    fp = fopen("secret.bin", "wb");

    if (fp == NULL)
    {
        fprintf(stderr, "Erro ao abrir esse arquivo\n");
        return 1;
    }

    fwrite(&senha_mestra, sizeof(senha_mestra), 1 , fp);

    fclose(fp);

    fp = fopen("secret.bin" , "rb");

    if (fp == NULL)
    {
        fprintf(stderr, "Erro ao abrir o arquivo\n");
        return 1;
    }

    printf("Digite a sua senha: \n");
    scanf("%d" , &verificar_senha);

    fread(&temp, sizeof(senha_mestra), 1 , fp);

    if (temp == verificar_senha)
    {
        printf("Acesso autorizado\n");
    } else
    {
        printf("Acesso Negado\n");
    }

    fclose(fp);

    return 0;

}