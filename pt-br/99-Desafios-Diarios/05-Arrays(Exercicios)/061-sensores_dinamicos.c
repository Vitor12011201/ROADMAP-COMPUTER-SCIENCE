/*Crie um programa que:
Use o #define para criar uma constante chamada MAX com o valor 6.
Declare um array de inteiros chamado alertas[MAX].
Inicialize o array em uma única linha da seguinte forma:
Defina o primeiro elemento (índice 0) como 10.
Use a expressão [MAX - 3] para definir o valor 50.
Logo após o 50 (na mesma sequência, sem usar novos colchetes), coloque o valor 100.
Use um loop for para imprimir todos os índices e valores do array.*/

#include <stdio.h>
#define MAX 6

int main() {
    int alerta[MAX] = {10 , [MAX - 3] = 50 , 100};
    printf("OS numeros do Array sao: \n");
    for (int i = 0; i < 6; i++) {
        printf("%d\n", alerta[i]);
    }
}