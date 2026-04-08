/*Objetivo: Ler de volta a struct que você salvou no Exercício 139.
1. Abra o arquivo salve.dat no modo "rb".
2. Crie uma struct vazia: struct Player p_lido;.
3. Use o fread para "sugar" os dados do arquivo para dentro de p_lido.
4. Imprima os valores (id, nivel e itens) para conferir se o C "ressuscitou" os dados corretamente.*/

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

    fp = fopen("salve.dat","wb");

    if (fp == NULL)
    {
        fprintf(stderr,"Erro ao abrir o arquivo\n");
        return 1;
    }

    fwrite(&jogador_1, sizeof(struct Jogadores), 1, fp);

    fclose(fp);

    fp = fopen("salve.dat","rb");

    if (fp == NULL)
    {
        fprintf(stderr,"Esse arquivo nao existe\n");
        return 1;
    }

    struct Jogadores p_lidos;

    while (fread(&p_lidos, sizeof(struct Jogadores), 1 , fp) > 0)
    {
        printf("ID: %d\nNIVEL: %.2f\nITENS: %d\n",p_lidos.id, p_lidos.nivel, p_lidos.itens);
    }

    fclose(fp);

    return 0;

}



