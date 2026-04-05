/*Objetivo: Simular uma interação entre duas structs usando ponteiros e setas.
1. Crie uma struct Personagem com char *nome, int vida e int forca.
2. Crie uma função void atacar(struct Personagem *atacante, struct Personagem *defensor).
A lógica é: a vida do defensor deve diminuir de acordo com a força do atacante.
Exemplo: defensor->vida -= atacante->forca;
3. No main, crie o "Guerreiro" (Vida 100, Força 20) e o "Orc" (Vida 50, Força 10).
4. Faça o Guerreiro atacar o Orc e imprima a vida restante do Orc.*/

#include <stdio.h>

struct personagem
{
    char *nome;
    int vida;
    int forca;
};

void atacar(struct personagem* guerreiro, struct personagem* orc)
{
    orc->vida = orc->vida - guerreiro->forca;
}

int main()
{
    struct personagem guerreiro = {.nome = "Link", .vida = 100, .forca = 20};
    struct personagem orc = {.nome = "Ganondorf", .vida = 50, .forca = 10};

    printf("O nosso heroi [%s] se depara com o vilao [%s]\n", guerreiro.nome, orc.nome);
    printf("\n");
    printf("O nosso vilao [%s], tem [%d] de vida\n", orc.nome, orc.vida);
    printf("\n");
    printf("O nosso heroi [%s] surprende o vilao e ataca causando [%d] de dano ao vilao\n", guerreiro.nome,
           guerreiro.forca);
    atacar(&guerreiro, &orc);
    printf("O nosso vilao [%s] ficou ferido e agora so tem mais [%d] de vida\n", orc.nome, orc.vida);

    return 0;
}
