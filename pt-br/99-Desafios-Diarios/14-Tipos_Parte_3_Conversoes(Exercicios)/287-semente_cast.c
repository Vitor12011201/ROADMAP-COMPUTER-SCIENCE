/* Objetivo: Usar o cast explícito para converter e truncar valores de tempo de sistema para alimentar geradores de números aleatórios.
Instruções:
1. A função padrão srand() (da <stdlib.h>) serve para iniciar o gerador de números aleatórios do C e ela espera estritamente um argumento do tipo unsigned int.
2. No entanto, a função que usamos para pegar o tempo do sistema, time(NULL) (da <time.h>), retorna um tipo chamado time_t (que geralmente é um long long de 64 bits).
3. No seu main, faça a inicialização do gerador aplicando o cast explícito de forma limpa: srand((unsigned int)time(NULL));.
4. Gere e imprima um número aleatório entre 1 e 10 usando rand() % 10 + 1. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned int)time(NULL));

    int numero_aleatorio = rand() % 10 + 1;

    printf("Numero aleatorio: %d\n", numero_aleatorio);

    return 0;
}