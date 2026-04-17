/*Objetivo: Praticar o uso de struct com char e int misturados, lendo um por um com while.
1. Crie uma struct Game com char titulo[30] e int ano.
2. Crie um array com 2 games (ex: "Mario", 1985 e "Zelda", 1986).
3. Grave em games.bin.
4. Reabra e use o while (fread(&temp, sizeof(struct Game), 1, fp) > 0) para listar os jogos no formato: Jogo: %s (%d).*/

#include <stdio.h>

struct Game
{
    char titulo[30];
    int ano;
};

int main()
{
    struct Game jogo[2] = {
        {.titulo = "Mario", .ano = 1985},
        {.titulo = "Zelda", .ano = 1986}
    };
    struct Game temp[2] = {0};

    FILE *fp;

    fp = fopen("games.bin" , "wb");

    if (fp == NULL)
    {
        fprintf(stderr,"Erro ao abrir o arquivo\n");
        return 1;
    }

    fwrite(&jogo, sizeof(struct Game), 2, fp);

    fclose(fp);

    fp = fopen("games.bin", "rb");

    if (fp == NULL)
    {
        fprintf(stderr, "Erro ao abrir o arquivo\n");
        return 1;
    }

    while (fread(&temp, sizeof(struct Game), 1, fp) > 0)
    {
        int i = 0;
        printf("Jogo: %s (%d)\n", temp[i].titulo, temp[i].ano);
        i++;
    }

    fclose(fp);

    return 0;
}



