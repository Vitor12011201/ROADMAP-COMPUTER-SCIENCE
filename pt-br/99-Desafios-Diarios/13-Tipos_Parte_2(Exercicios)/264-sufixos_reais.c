/* Objetivo: Praticar o uso de sufixos em notação científica para evitar conversões implícitas do compilador.
Instruções:
1. Declare uma variável float chamada micro_raio e atribua o valor $1.25 \times 10^{-4}$ usando a notação e e o sufixo correto para float.
2. Declare uma variável long double chamada massa_astro e atribua o valor $5.97 \times 10^{24}$ usando o sufixo correto para precisão máxima.
3. Imprima o micro_raio usando %e e a massa_astro usando %Le */

#include <stdio.h>

int main()
{
    float micro_raio = 1.25e-4f;
    long double massa_astro = 5.97e24L;

    printf("micro_raio: %e\n", micro_raio);
    printf("massa_astro: %Le\n", massa_astro);

    return 0;
}
