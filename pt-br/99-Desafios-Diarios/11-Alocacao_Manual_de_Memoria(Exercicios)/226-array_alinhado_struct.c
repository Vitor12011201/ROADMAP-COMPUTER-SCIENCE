/* Objetivo: Aplicar aligned_alloc para alocar um array de estruturas com alinhamento maior que o padrão
1. Defina uma estrutura Sensor com campos:
 - timestamp (unsigned long long)
 - valor (double)
 - status (char)
2. Sabendo que em alguns sistemas embarcados pode ser vantajoso alinhar essa estrutura em 32 bytes (para cache ou DMA), faça:
3. Peça ao usuário o número N de sensores (positivo, máx 100).
4. Aloque um array de N estruturas Sensor usando aligned_alloc com alinhamento 32.
O tamanho total deve ser N * sizeof(Sensor), e deve ser múltiplo de 32.
(Se N * sizeof(Sensor) não for múltiplo de 32, arredonde para cima até o próximo múltiplo – mas para simplificar, garanta que sizeof(Sensor) já é múltiplo de 32? Não necessariamente; use cálculo: tamanho_total = ((N * sizeof(Sensor) + 31) / 32) * 32.)
5. Preencha os sensores com dados fictícios (timestamp = i*1000, valor = i*0.5, status = 'A').
6. Imprima o endereço base do array e o endereço de cada elemento, mostrando que cada um começa em um offset múltiplo de 32.
7. Libere a memória. */

#include <stdio.h>
#include <stdlib.h>

struct Sensor
{
    unsigned long long timestamp;
    double valor;
    char status;
};

int main()
{
    int n_sensores = 0;

    printf("Digite a quantidade de sensores: ");
    scanf("%d", &n_sensores);

    if (n_sensores <= 0 || n_sensores > 100)
    {
        fprintf(stderr, "Quantidade invalida\n");
        return 1;
    }

    size_t tamanho_normal =
        n_sensores * sizeof(struct Sensor);

    size_t tamanho_total =
        ((tamanho_normal + 31) / 32) * 32;

    struct Sensor *sensores =
        aligned_alloc(32, tamanho_total);

    if (sensores == NULL)
    {
        fprintf(stderr, "Erro ao alocar memoria\n");
        return 1;
    }

    for (int i = 0; i < n_sensores; i++)
    {
        sensores[i].timestamp = i * 1000;
        sensores[i].valor = i * 0.5;
        sensores[i].status = 'A';
    }

    printf("\nEndereco base do array: %p\n",
           (void *)sensores);

    printf("\nsizeof(struct Sensor): %zu bytes\n",
           sizeof(struct Sensor));

    for (int i = 0; i < n_sensores; i++)
    {
        printf(
            "\nSensor %d\n"
            "Endereco: %p\n"
            "Offset: %lld bytes\n"
            "Timestamp: %llu\n"
            "Valor: %.2f\n"
            "Status: %c\n",

            i,

            (void *)&sensores[i],

            (long long)(
                (char *)&sensores[i] -
                (char *)sensores),

            sensores[i].timestamp,
            sensores[i].valor,
            sensores[i].status);
    }

    free(sensores);
    sensores = NULL;

    return 0;
}