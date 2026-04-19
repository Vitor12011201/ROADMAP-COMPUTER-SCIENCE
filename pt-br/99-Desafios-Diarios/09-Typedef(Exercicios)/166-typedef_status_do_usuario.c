/*Objetivo: Usar typedef para tornar o código mais explicativo.
1. Crie um typedef int Status;. (Onde 1 significa "Ativo" e 0 significa "Inativo").
2. Crie uma struct com typedef chamada Usuario com char nome[30] e uma variável do tipo Status situacao;.
3. No main, cadastre um usuário e defina a situação dele como 1.
4. Se usuario.situacao for igual a 1, imprima "Usuário está Ativo".*/

#include <stdio.h>

typedef int Status;
typedef struct
{
    char nome[30];
    Status situacao;
} Usuario;

int main()
{
    Usuario usuarios[2] = {
        {.nome = "Julio", .situacao = 1},
        {.nome = "Pedro", .situacao = 0}
    };

    for (int i = 0; i < 2; i++)
    {
        if (usuarios[i].situacao == 1)
        {
            printf("O usuario %s consta como ATIVO\n", usuarios[i].nome);
        } else
        {
            printf("O usuario %s consta como INATIVO\n", usuarios[i].nome);
        }
    }

    return 0;

}
