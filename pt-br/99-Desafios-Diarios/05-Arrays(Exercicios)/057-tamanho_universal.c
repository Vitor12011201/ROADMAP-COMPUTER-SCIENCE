/*Crie um programa que:
Calcule e imprima quantos bytes seriam necessários para armazenar um array de 150 inteiros (int).
Calcule e imprima quantos bytes seriam necessários para um array de 10 floats.
Use apenas o sizeof com a notação de tipo, por exemplo: sizeof(int [150])*/

#include <stdio.h>

int main()
{
    int tamanho_int = sizeof(int[150]);
    printf("Vai ser necessario [%d] Bytes para criar um array de 150 inteiros\n", tamanho_int);
    int tamanho_float = sizeof(float[10]);
    printf("Vai ser necessario [%d] Bytes para criar um array de 10 floats\n", tamanho_float);
}
