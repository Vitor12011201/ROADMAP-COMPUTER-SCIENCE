/*Objetivo: Praticar a gravação e leitura de uma estrutura completa (struct) de uma vez só.
1. Crie uma struct Pessoa que contenha: char nome[50] e int idade.
2. No main, crie uma variável dessa struct e preencha: Pessoa p1 = {"Vitor", 22};.
3. Abra o arquivo cadastro.bin em modo "wb".
4. Use o fwrite para gravar a struct inteira.
Dica: fwrite(&p1, sizeof(struct Pessoa), 1, fp);
5. Feche e reabra em modo "rb".
6. Crie uma variável struct Pessoa p2 (vazia).
7. Use o fread para ler do arquivo e jogar os dados direto na p2.
8. Imprima os dados da p2 (p2.nome e p2.idade) para provar que funcionou.*/

#include <stdio.h>

struct Pessoa
{
    char nome[50];
    int idade;
};

int main()
{

    struct Pessoa p_1 = {.nome = "Vitor", .idade = 22};
    struct Pessoa p_2 ={0};

    FILE *fp;

    fp = fopen("cadastro.bin", "wb");

    if (fp == NULL)
    {
        fprintf(stderr,"Erro ao abrir o arquivo\n");
        return 1;
    }

    fwrite(&p_1,sizeof(struct Pessoa), 1 , fp);

    fclose(fp);

    fp = fopen("cadastro.bin", "rb");

    if (fp == NULL)
    {
        fprintf(stderr,"Erro ao abrir o arquivo\n");
        return 1;
    }

    fread(&p_2, sizeof(struct Pessoa), 1 , fp);

    printf("Meu nome e: %s\nMinha idade e: %d\n", p_2.nome , p_2.idade);

    fclose(fp);

    return 0;

}