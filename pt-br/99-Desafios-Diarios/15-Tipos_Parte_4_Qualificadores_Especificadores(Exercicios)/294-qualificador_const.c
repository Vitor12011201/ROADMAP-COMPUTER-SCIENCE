/* Objetivo: Praticar a criação de variáveis imutáveis e entender como o compilador usa isso como segurança.
Instruções:
1. Declare uma constante float para o valor de PI: const float PI = 3.14159f;.
2. Crie uma função chamada float calcula_area_circulo(const float raio) que recebe o raio como uma constante.
3. Tente modificar o valor de raio dentro da função (ex: raio = 10.0f;) e veja o erro de compilação.
4. Corrija o código retornando a fórmula correta PI * raio * raio; e imprima a área calculada no main. */

#include <stdio.h>

const float PI = 3.14159f;

float calcula_area_circulo(const float raio)
{

    return PI * raio * raio;
}

int main(void)
{
    float raio = 5.0f;
    float area = calcula_area_circulo(raio);

    printf("Raio: %.2f\n", raio);
    printf("Area do circulo: %.2f\n", area);

    return 0;
}