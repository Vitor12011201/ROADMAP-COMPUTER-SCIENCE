/* 🎮 Exercício: O Sistema de XP (Experiência)
Imagine que você está programando um RPG. O herói ganha experiência, mas existem regras para isso.
Seu objetivo:
Crie uma função chamada calcular_xp.
Essa função deve receber dois parâmetros: int xp_atual e int bonus.
Dentro da função, multiplique o bonus por 2 e some ao xp_atual.
No main:
Crie uma variável meu_xp começando com 100.
Peça para o usuário digitar o bônus que o herói ganhou.
Importante: Tente atualizar a variável meu_xp usando a função, para que o novo valor seja salvo.
Ao final, imprima o valor de meu_xp.*/

#include <stdio.h>

int calcular_xp(int xp_atual, int bonus)
{
    int experiencia_atual = xp_atual + (bonus * 2);
    return experiencia_atual;
}

int main()
{
    int bonus;
    int meu_xp = 100;
    printf("A jornada foi longe e voce ganhou XP extras\n");
    printf("Digite aqui quantos XPs voce ganhou na sua jornada \n");
    scanf("%d", &bonus);
    meu_xp = calcular_xp(meu_xp, bonus);
    printf("Parabens voce ganhou %d de XP a mais para sua proxima jornada, com bonus seu xp dobra para: %d \n", bonus,
           bonus * 2);
    printf("Seu bonus atual e de: %d", meu_xp);
}
