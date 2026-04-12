/* Objetivo: Praticar a comparação de strings lidas de um arquivo. Este exercício é fundamental para entender como programas "lembram" nomes de usuários ou senhas salvos em texto.
1. No seu código, crie um arquivo chamado usuarios.txt no modo de escrita.
2. Escreva o nome de um usuário (ex: Vitor) e um ano de nascimento (ex: 2000) separados por um espaço.
3. Feche o arquivo.
4. Reabra o arquivo usuarios.txt no modo de leitura.
5. Use o fscanf para carregar o nome em um array char nome_arquivo[50] e o ano em um int ano.
6. Peça para o usuário digitar um nome no console usando scanf e guarde em char nome_digitado[50].
7. Use a função strcmp (da biblioteca <string.h>) para comparar o nome que você leu do arquivo com o nome que o usuário digitou.
8. Exiba na tela se o usuário é o mesmo ou não.*/

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char usuario[50];
    char usuario_digitado[50];
    int ano_nascimento;
    int ano_nascimento_digitado;

    fp = fopen("usuarios.txt", "w");

    if (fp == NULL)
    {
        fprintf(stderr, "Err ao abrir esse arquivo\n");
        return 1;
    }

    fprintf(fp,"Vitor 2002");

    fclose(fp);

    fp = fopen("usuarios.txt" , "r");

    if (fp == NULL)
    {
        fprintf(stderr,"Erro ao abrir esse arquivo\n");
        return 1;
    }

    fscanf(fp, "%s %d", usuario , &ano_nascimento);

    printf("Digite o seu nome de usuario: \n");
    scanf("%s", usuario_digitado);
    printf("Digite o ano do seu nascimento: \n");
    scanf("%d", &ano_nascimento_digitado);

    if (strcmp(usuario, usuario_digitado) == 0 && ano_nascimento == ano_nascimento_digitado)
    {
        printf("Usuario Existe e esta autorizado a entrar no sistema\n");
    } else
    {
        printf("Usuaria nao existe na base de dados\n");
    }

    fclose(fp);

    return 0;
}