/*Objetivo: Ler o arquivo do Beej e mostrar os valores em Hexadecimal, como um hacker faria.
1- Crie o arquivo output.bin exatamente como o Beej fez (com os números 5, 37, 0, 88, 255, 12).
2- No seu programa de leitura, use o loop do fread.
3- Em vez de %d, use o printf com o especificador %02X.
Dica: %02X imprime em Hexadecimal com 2 dígitos e letras maiúsculas.
4- O resultado deve ser algo como: 05 25 00 58 FF 0C.*/

#include <stdio.h>

int main()
{

    FILE *fp;

    unsigned char bytes[6] = {5 , 37 , 0 , 88 , 255 , 12};

    fp = fopen("output.bin" , "wb");

    if (fp == NULL)
    {
        fprintf(stderr,"Erro ao abrir o arquivo\n");
        return 1;
    }

    fwrite(bytes, sizeof(char), 6 , fp);

    fclose(fp);

    fp = fopen("output.bin" , "rb");

    if (fp == NULL)
    {
        fprintf(stderr,"Esse arquivo nao existe\n");
        return 1;
    }

    fread(bytes, sizeof(char),6,fp);

    for (int i = 0; i < 6; i++)
    {
        printf("%02X ", bytes[i]);
    }

    fclose(fp);

    return 0;

}