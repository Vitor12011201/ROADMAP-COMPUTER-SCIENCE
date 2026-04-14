/*Objetivo: Praticar a leitura e escrita de dados que não são apenas nomes, mas "chaves" e "valores". Isso simula como programas salvam configurações (volume do som, brilho da tela, etc).
1. No seu código, crie um arquivo chamado config.txt no modo de escrita.
2. Escreva três configurações, uma em cada linha:
Brilho 80
Volume 50
Idioma 1 (Aqui o 1 pode significar Português)
3. Feche o arquivo.
4. Reabra o arquivo config.txt no modo de leitura.
5. O seu programa deve ler todas as configurações e, se o Volume for maior que 70, deve imprimir um aviso: "Aviso: Volume muito alto (%d)!".
6. Além disso, se o Brilho for menor que 30, imprima: "Aviso: Brilho muito baixo (%d)!".
7. No final, exiba todas as configurações lidas no formato: [CHAVE]: VALOR.*/

#include <stdio.h>
#include <string.h>

int main() {

    FILE *fp;
    char config[50];
    int volume = 0;

    fp = fopen("config.txt", "w");

    if (fp == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo\n");
        return 1;
    }

    fprintf(fp, "Brilho 80\n");
    fprintf(fp, "Volume 50\n");
    fprintf(fp,"Idioma 1\n");

    fclose(fp);

    fp = fopen("config.txt", "r");

    if (fp == NULL) {
        fprintf(stderr,"Erro ao abrir o arquivo\n");
        return 1;
    }

    while (fscanf(fp,"%s %d", config , &volume) != EOF) {
        if (strcmp(config,"Volume") == 0 && volume > 70) {
            printf("CUIDADO: O %s do som esta muito alto [%d]\n", config, volume);
        }
        if (strcmp(config,"Brilho") == 0 && volume < 30) {
            printf("ATENCAO: %s muito baixo [%d]\n", config, volume);
        }
                printf("[%s] : %d\n", config, volume);
            }

    fclose(fp);

    return 0;
}