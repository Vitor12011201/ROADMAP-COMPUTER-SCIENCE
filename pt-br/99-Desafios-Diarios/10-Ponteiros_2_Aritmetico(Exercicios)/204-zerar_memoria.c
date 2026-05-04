/*Objetivo: Criar sua própria versão simplificada de uma função de manipulação de bytes (estilo memset).
1. Crie uma função void zerar(void *dados, int bytes).
2. Dentro da função, converta o void * para char * para poder navegar byte a byte.
3. Use um loop para colocar o valor 0 em cada byte.
4. No main, crie um array int numeros[3] = {10, 20, 30}; e um double nota = 9.5;.
5. Use sua função zerar para limpar os dois (lembre-se de usar sizeof para passar a quantidade de bytes correta).
6. Imprima os valores após a limpeza para confirmar que viraram zero.*/

#include <stdio.h>

void zerar(void *dados, int bytes)
{
    char *ptr = dados;
    for (int i = 0; i < bytes; i++)
    {
        ptr[i] = 0;
    }

}

int main()
{

    int numeros[3] = {10 , 20 , 30};
    double nota = 9.5;

    printf("ANTES DA FUNCAO: numeros [%d] , [%d] , [%d]\n", numeros[0] , numeros[1], numeros[2]);

    printf("ANTES DA FUNCAO: nota %.2f\n", nota);

    printf("\n");

    zerar(numeros, sizeof(numeros));
    zerar(&nota, sizeof(nota));

    printf("DEPOIS DA FUNCAO: numeros [%d] , [%d] , [%d]\n", numeros[0] , numeros[1], numeros[2]);

    printf("DEPOIS DA FUNCAO: nota %.2f\n", nota);

    return 0;

}