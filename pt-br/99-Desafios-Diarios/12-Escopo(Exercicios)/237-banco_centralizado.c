/* Objetivo: Simular um sistema de saldo bancário onde múltiplas funções manipulam e validam o mesmo recurso global.
Instruções:
1. Declare uma variável de escopo de arquivo float saldo_global = 1000.00;.
2. Crie a função void depositar(float valor) que adiciona o valor ao saldo_global.
3. Crie a função int sacar(float valor) que verifica se há saldo suficiente. Se houver, subtrai do saldo_global e retorna 1 (sucesso). Se não houver, não altera o saldo e retorna 0 (falha).
4. No main, realize uma sequência de depósitos e saques e imprima o saldo final para testar as validações. */

#include <stdio.h>

float saldo_global = 1000.00;

void depositar(float valor)
{
    saldo_global += valor;
}

int sacar(float valor)
{
    if (saldo_global >= valor)
    {
        saldo_global -= valor;
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    depositar(10.00);

    if (sacar(200.00))
    {
        printf("Saque de R$200.00 realizado com sucesso.\n");
    }
    else
    {
        printf("Saldo insuficiente.\n");
    }

    if (sacar(100.00))
    {
        printf("Saque de R$100.00 realizado com sucesso.\n");
    }
    else
    {
        printf("Saldo insuficiente.\n");
    }

    depositar(500.00);

    printf("Saldo final: R$%.2f\n", saldo_global);

    return 0;
}