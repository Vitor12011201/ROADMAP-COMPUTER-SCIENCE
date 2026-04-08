/*Objetivo: Mostrar por que binário é tão poderoso para salvar estruturas complexas.
1- Crie uma struct:
struct Jogadores {
    int id;
    float nivel;
    unsigned char itens;
};
2- Inicialize um jogador: {1, 45.5, 3}.
3- Abra um arquivo salve.dat em modo "wb".
4- Salve a struct inteira com uma única linha:
5- fwrite(&p1, sizeof(struct Jogadores), 1, fp);
6- Feche o arquivo.*/

#include <stdio.h>

struct Jogadores
{
    int id;
    float nivel;
    unsigned char itens;
};

int main()
{
    struct Jogadores jogador_1 = {.id = 1, .nivel = 45.5, .itens = 3};

    FILE *fp;

    fp = fopen("salve.dat", "wb");

    if (fp == NULL)
    {
        fprintf(stderr,"Erro ao abrir o arquivo\n");
        return 1;
    }

    fwrite(&jogador_1, sizeof(struct Jogadores), 1, fp);

    fclose(fp);

    return 0;
}
