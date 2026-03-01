/*Crie um programa que simule uma batalha entre um Herói e um Vilão.
Declare variáveis de Vida (HP) e Mana para ambos no main.
Crie funções para Atacar, Curar e Recuperar Mana.
Cada função deve receber ponteiros (int *ptr) para alterar os valores originais.
As funções de ataque devem alterar dois valores: a vida do alvo e a mana de quem ataca.
Use um loop while para manter a luta enquanto o HP de ambos for maior que zero.
(O objetivo é praticar como funções usam ponteiros para modificar múltiplas variáveis do main ao mesmo tempo).
*/

#include <stdio.h>

void jogar_pedra(int* ptr,int* mana)
{
    *ptr = *ptr - 10;
    *mana = *mana - 5;
}

void atacar_com_estilingue(int* ptr, int *mana)
{
    *ptr = *ptr - 20;
    *mana = *mana - 10;
}

void atacar_com_espada(int* ptr,int* mana)
{
    *ptr = *ptr - 30;
    *mana = *mana - 15;
}

void curar(int* ptr,int* mana)
{
    *ptr = *ptr + 10;
    *mana = *mana - 5;
    if (*ptr > 100)
    {
        *ptr = 100;
    }
}

void recuperar_mana(int* ptr)
{
    *ptr = *ptr + 10;

    if (*ptr > 50)
    {
        *ptr = 50;
    } else if (*ptr < 0)
    {
        *ptr = 0;
    }
}

int main()
{
    int resposta_usuario;
    int heroi_vida = 100;
    int vilao_vida = 100;
    int heroi_mana = 50;
    int vilao_mana = 50;

    printf("Nosso Heroi esta andando pelo pela floresta quando derrepente...\n");
    printf("Nosso Heroi se depara com o Vilao e eles entram em confronto\n");
    printf("Nosso Heroi e o primeiro a atacar\n");

    while (heroi_vida > 0 && vilao_vida > 0)
    {
        printf("E a vez do nosso HEROI atacar, oque desseja fazer? \n");
        printf("1 - Atacar com uma Pedra\n");
        printf("2 - Atacar com um Estilingue\n");
        printf("3 - Atacar com a Espada\n");
        printf("4 - Se curar\n");
        printf("5 - Recuperar mana\n");
        scanf("%d", &resposta_usuario);

        switch (resposta_usuario)
        {
        case 1:
            jogar_pedra(&vilao_vida, &heroi_mana);
            printf("O Heroi tacou uma pedra e deu dano no Vilao (Vida do vilao e: %d). Sua mana atual (%d)\n", vilao_vida, heroi_mana);
            break;

        case 2:
            atacar_com_estilingue(&vilao_vida, &heroi_mana);
            printf("O Heroi atacou com um estilingue e deu dano no Vilao (Vida do vilao e: %d). Sua mana atual (%d)\n", vilao_vida, heroi_mana);
            break;

        case 3:
            atacar_com_espada(&vilao_vida, &heroi_mana);
            printf("O Heroi atacou com uma espada e deu dano no Vilao (Vida do vilao e: %d). Sua mana atual (%d)\n", vilao_vida, heroi_mana);
            break;

        case 4:
            curar(&heroi_vida, &heroi_mana);
            if (heroi_vida < 100)
            {
                printf("O Heroi se curou (Nova Vida do Heroi e: %d. Sua mana atual (%d)\n", heroi_vida, heroi_mana);
            }
            else
            {
                printf("(VIDA CHEIA) O Heroi perdeu a a chance de jogar essa rodada\n");
            }
            break;

        case 5:
            recuperar_mana(&heroi_mana);
            printf("O Heroi Recuperou Mana (Sua mana atual e de: %d)\n", heroi_mana);
        }
        printf("Agora e a vez do vilao atacar: \n");
        printf("Oque quer fazer? \n");
        printf("1 - Atacar com um cajado\n");
        printf("2 - Atacar com magia mediana\n");
        printf("3 - Atacar com a magia mais forte\n");
        printf("4 - Se Curar\n");
        printf("5 - Recuperar mana\n");
        scanf("%d", &resposta_usuario);

        switch (resposta_usuario)
        {
        case 1:
            jogar_pedra(&heroi_vida, &vilao_mana);
            printf("O vilao atingiu o Heroi com o cajado (Vida do Heroi e: %d). Sua mana atual (%d)\n", heroi_vida, vilao_mana);
            break;

        case 2:
            atacar_com_estilingue(&heroi_vida, &vilao_mana);
            printf("O vilao atingiu o Heroi com o a magia mediana (Vida do Heroi e: %d). Sua mana atual (%d)\n", heroi_vida, vilao_mana);
            break;

        case 3:
            atacar_com_espada(&heroi_vida, &vilao_mana);
            printf("O vilao atingiu o Heroi com o a magia mais forte (Vida do Heroi e: %d). Sua mana atual (%d)\n", heroi_vida, vilao_mana);
            break;

        case 4:
            curar(&vilao_vida, &vilao_mana);
            if (vilao_vida <= 100)
            {
                printf("O Vilao se curou (Nova Vida do vilao e: %d. Sua mana atual (%d)\n", vilao_vida, vilao_mana);
            }
            else
            {
                printf("(VIDA CHEIA) O Vilao perdeu a a chance de jogar essa rodada\n");
            }
            break;

        case 5:
            recuperar_mana(&vilao_mana);
            printf("O Vilao Recuperou Mana (Sua mana atual e de: %d)\n", vilao_mana);
        }
    }
    if (heroi_vida > vilao_vida)
    {
        printf("O vencedor e o Heroi\n");
    }
    else
    {
        printf("O vencedor e o Vilao\n");
    }
}
