/* Objetivo: Entender o modificador unsigned (sem sinal), que remove os números negativos e dobra a capacidade dos números positivos.
Instruções:
1. Declare uma variável short int com_sinal = 32767;.
2. Declare uma variável unsigned short int sem_sinal = 32767;.
3. Some 1 em ambas as variáveis.
4. Imprima o resultado das duas na tela (use %d para a com sinal e %u para a sem sinal).
O Desafio: Explique no comentário do código por que a variável com_sinal "estourou" para um número negativo, enquanto a sem_sinal continuou subindo perfeitamente.*/

/*
A variável com_sinal estourou porque um short int com sinal
só pode armazenar valores entre -32768 e 32767.

Ao somar 1 ao valor máximo (32767), ocorre um overflow
(estouro de capacidade), fazendo o valor "dar a volta"
e se tornar -32768.

Já a variável sem_sinal é unsigned short int, que não
armazena números negativos e possui faixa de 0 a 65535.

Por isso, ao somar 1 em 32767, ela continua normalmente
para 32768 sem estourar.
*/

#include <stdio.h>

int main()
{
    short int com_sinal = 32767;
    unsigned short int sem_sinal = 32767;

    com_sinal = com_sinal + 1;

    sem_sinal = sem_sinal + 1;

    printf("A variavel (com_sinal) vale: %d\n", com_sinal);
    printf("A variavel (sem_sinal) vale: %u\n", sem_sinal);

    return 0;
}