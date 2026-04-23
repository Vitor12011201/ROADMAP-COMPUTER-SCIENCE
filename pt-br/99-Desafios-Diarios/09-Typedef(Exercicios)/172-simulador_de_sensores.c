/*Objetivo: Usar typedef para lidar com dados brutos de hardware que podem mudar de tamanho (de 8 bits para 16 bits, por exemplo).
1. Crie um typedef chamado Leitura para o tipo unsigned char (representando um sensor de 0 a 255).
2. Crie uma struct Sensor com: int id e um array de Leitura chamado historico[5].
3. No main, crie um sensor e preencha o histórico com 5 valores aleatórios.
4. Ação de Manutenção: Agora, imagine que o sensor foi trocado por um modelo mais potente que vai até 65.535.
5. Mude o typedefde Leitura para unsigned short e verifique se o seu código de impressão e cálculo de média dos sensores ainda faz sentido.*/

#include <stdio.h>

typedef unsigned short Leitura;

typedef struct
{
    int id;
    Leitura historico[5];
} Sensor;

int main()
{
    Sensor s_1 = {.id = 654321, .historico = {43, 64 , 3 , 67 , 6}};

    printf("Sensor ID: %d\n", s_1.id);

    for (int i = 0; i < 5; i++) {
    printf("Historico [%d]: %d\n", i + 1 , s_1.historico[i]);
    }

    return 0;

}