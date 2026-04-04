/* Objetivo: Comparar strings e inteiros dentro de uma struct.
1. Crie uma struct Usuario com char nome[20] e int senha.
2. Crie um "usuário mestre" no main: {"admin", 1234}.
3. Peça para o usuário digitar um nome e uma senha. Guarde isso em outra struct chamada tentativa.
O Desafio: Compare se a tentativa é igual ao mestre.
Dica: Use strcmp() para o nome e == para a senha.
4. Se for igual, imprima "Acesso Permitido", senão "Acesso Negado".*/

#include <stdio.h>
#include <string.h>

struct usuario
{
    char nome[20];
    int senha;
};

int main()
{
    struct usuario usuario_mestre = {.nome = "admin", .senha = 1234};
    struct usuario tentativa;

    do
    {
        printf("Digite o seu usuario: \n");
        scanf("%s", tentativa.nome);
        printf("\n");
        printf("Digite sua senha: \n");
        scanf("%d", &tentativa.senha);


        if (strcmp(usuario_mestre.nome, tentativa.nome) == 0 && usuario_mestre.senha == tentativa.senha)
        {
            printf("Senha autorizada\n");
            printf("Seja bem-vindo, Administrador\n");
        }
        else
        {
            printf("Senha negada, tente de novo\n");
            printf("\n");
        }
    }
    while (!(strcmp(usuario_mestre.nome, tentativa.nome) == 0 && usuario_mestre.senha == tentativa.senha));

    return 0;
}
