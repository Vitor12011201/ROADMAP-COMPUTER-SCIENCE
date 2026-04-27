/* Objetivo: Unir typedef de array com struct para simular um hardware real.
1. Crie um typedef float Amostras[5]; (um array de 5 leituras).
2. Crie uma struct Sensor que contenha:
int pino_conexao;
Amostras dados; (aqui está o array escondido!).
3. Crie uma função chamada processarLeitura(Sensor *s) que preenche o array de amostras com valores de 0 a 10 (pode usar um loop simples).
4. No main, declare um Sensor s1, chame a função para preencher os dados e, por fim, calcule a média das 5 amostras.*/

#include <stdio.h>

typedef float Amostras[5];

typedef struct {
    int pino_conexao;
    Amostras dados;
} Sensor;

void processarLeitura(Sensor *s) {
    for (int i = 0; i < 5; i++) {
        s->dados[i] = i * 2.5;
    }
}

int main() {
    Sensor s1;
    s1.pino_conexao = 13;

    processarLeitura(&s1);

    float soma = 0;

    for (int i = 0; i < 5; i++) {
        soma += s1.dados[i];
    }

    float media = soma / 5;

    printf("Pino: %d\n", s1.pino_conexao);
    printf("Media das amostras: %.2f\n", media);

    return 0;
}