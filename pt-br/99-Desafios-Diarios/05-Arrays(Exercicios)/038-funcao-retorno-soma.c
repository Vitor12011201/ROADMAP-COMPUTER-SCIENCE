#include <stdio.h>

/* Objetivo
1. Ler 3 números
2. Calcular a soma usando uma função
3. Mostrar o resultado no main
- Regras
Função NÃO pode imprimir
Função TEM que retornar a soma
Só array + for
Nada de ponteiro explícito ainda */

int somaNumeros(int numero[])
{
    return numero[0] + numero[1] + numero[2];
}

int main()
{
    int numeros[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Digite um numero (%d): \n", i + 1);
        scanf("%d", &numeros[i]);
    }
    printf("O soma dos numeros é: %d", somaNumeros(numeros));
}
