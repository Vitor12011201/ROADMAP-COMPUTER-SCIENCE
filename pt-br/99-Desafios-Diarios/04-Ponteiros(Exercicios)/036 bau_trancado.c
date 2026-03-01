/* Crie um mini-RPG com as seguintes regras:
No main, tenha uma variável int dano_espada = 50;.
Tenha um ponteiro chamado mao_do_heroi que começa como NULL.
Crie um loop while que mostre um menu:
1 - Atacar: Se a mao_do_heroi for NULL, o herói ataca com as mãos (dano 5). Se NÃO for NULL, o herói ataca com a espada (usa o valor apontado pelo ponteiro).
2 - Abrir Baú: O herói encontra a espada! Aqui você deve fazer mao_do_heroi apontar para o endereço de dano_espada.
0 - Sair.*/

#include <stdio.h>

void espada_mao(int* ptr, int* ptr_1)
{
    if (ptr == NULL)
    {
        *ptr_1 = *ptr_1 - 5;
        printf("Heroi atacou usando a mao\n");
    }
    else
    {
        *ptr_1 = *ptr_1 - *ptr;
        printf("O Heroi atacou usando a espada\n");
    }
}

int main()
{
    int resposta_usuario;
    int* mao_heroi = NULL;
    int vida_vilao = 150;
    int dano_espada = 20;

    printf("Nosso Heroi encontrou um Vilao, em uma floresta\n");
    printf("Atras do nosso heroi tem um BAU secreto\n");
    while (resposta_usuario != 0 && vida_vilao > 0)
    {
        printf("Oque deseja fazer agora?\n");
        printf("1 - Atacar o Vilao\n");
        printf("2 - Correr e pegar o BAU antes que seja atacado pelo vilao\n");
        printf("0 - Sair da batalha\n");
        scanf("%d", &resposta_usuario);

        switch (resposta_usuario)
        {
        case 1:
            espada_mao(mao_heroi, &vida_vilao);
            printf("O Heroi atacou o vilao: (vida vilao %d)\n", vida_vilao);
            break;

        case 2:
            if (mao_heroi == NULL) {
            printf("O Heroi abriu o Bau e dentro tinha uma espada (vida vilao %d)\n", vida_vilao);
            mao_heroi = &dano_espada;
        } else
        {
            printf("Sua espada ja esta equipada\n");
        }
            break;
        }
    }
    printf("O Heroi derrotou o Vilao, parabens\n");
}
