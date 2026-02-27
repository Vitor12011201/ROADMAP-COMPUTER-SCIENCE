/* O Scanner de Segurança
No main, declare um ponteiro int *sensor = NULL; e uma variável int leitura = 42;.
Crie uma função chamada verificar_sistema(int *p) que:
Se o ponteiro for NULL, imprime: "SISTEMA DESLIGADO: Conecte o sensor."
Se o ponteiro NÃO for NULL, imprime: "SISTEMA ATIVO: Valor da leitura = [valor]."
No main, chame a função passando o sensor (que é NULL).
Depois, aponte o sensor para a leitura (sensor = &leitura) e chame a função novamente.*/

#include <stdio.h>

void verificar_sistema(int* ptr)
{
    if (ptr == NULL)
    {
        printf("O Sistema esta DESLISGADO\n");
    } else {
        printf("O Sistema esta ATIVO\n");
    }
}

int main ()
{
    int* sensor = NULL;
    int leitura = 42;
    verificar_sistema(sensor);
    sensor = &leitura;
    verificar_sistema(sensor);
}

