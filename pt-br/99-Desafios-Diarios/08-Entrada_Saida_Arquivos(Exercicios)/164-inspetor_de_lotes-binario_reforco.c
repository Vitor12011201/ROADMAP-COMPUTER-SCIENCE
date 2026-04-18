/*Cenário: Uma fábrica produz peças em lotes. Cada lote tem um número de identificação e uma quantidade de peças defeituosas. Seu programa deve identificar quais lotes precisam ser descartados.
1. Crie uma struct Lote com: int id, int total_pecas e int defeituosas.
2. No main, crie um array com 4 lotes:
ID 101: 500 peças, 5 defeituosas.
ID 102: 300 peças, 45 defeituosas.
ID 103: 450 peças, 10 defeituosas.
ID 104: 200 peças, 40 defeituosas.
3. Grave esse array no arquivo lotes.bin.
4. Reabra o arquivo para leitura.
5. Ação de Inspeção (Loop único): Percorra o arquivo e, para cada lote, calcule a taxa de defeito (defeitos dividido pelo total).
6. Se a taxa de defeito for maior que 10% (0.10), imprima: [ALERTA] Lote %d REPROVADO (Taxa: %.1f%%).
7.  final do loop, mostre quantos lotes no total foram aprovados e quantos foram reprovados.*/

#include <stdio.h>

struct Lote {
    int id;
    int total_pecas;
    int defeituosas;

};

struct Lote id_lote[4] = {
    {.id = 101, .total_pecas = 500, .defeituosas = 5},
    {.id = 102, .total_pecas = 300, . defeituosas = 45},
    {.id = 103, .total_pecas = 450, .defeituosas = 10},
    {.id = 104, .total_pecas = 200, .defeituosas = 40}
};

struct Lote temp = {0};

int main() {

    FILE *fp;

    fp = fopen("lotes.bin", "wb");

    if (fp == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo\n");
        return 1;
    }

    fwrite(id_lote, sizeof(struct Lote), 4 , fp);

    fclose(fp);

    fp = fopen("lotes.bin" , "rb");

    if (fp == NULL)
    {
        fprintf(stderr,"Erro ao abrir o arquivo\n");
        return 1;
    }

    while (fread(&temp, sizeof(struct Lote) , 1 , fp) > 0) {

         float taxa_de_defeito =(float) temp.defeituosas / temp.total_pecas;

        if (taxa_de_defeito > 0.10)
        {
            printf("[ALERTA] Lote %d REPROVADO (Taxa: %.0f%)\n", temp.id , taxa_de_defeito * 100);
        }
    }

    fclose(fp);

    return 0;

}