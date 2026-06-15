/* Objetivo: Replicar o experimento de degradação de dígitos do livro para ver onde o seu compilador joga a toalha.
Instruções:
1. Crie um programa que inicialize variáveis do tipo float com números que vão aumentando a quantidade de dígitos significativos de forma sequencial (ex: 0.1, 0.12, 0.123, 0.1234, até chegar em 10 dígitos).
2. Imprima cada um deles com a quantidade exata de casas decimais que você tentou guardar.
3. Identifique visualmente em qual linha o número impresso começou a divergir do número que você digitou no código e comente se ele obedeceu o limite de FLT_DIG (6 dígitos). */

#include <stdio.h>

    int main()
    {
        float a = 0.1f;
        float b = 0.12f;
        float c = 0.123f;
        float d = 0.1234f;
        float e = 0.12345f;
        float f = 0.123456f;
        float g = 0.1234567f;
        float h = 0.12345678f;
        float i = 0.123456789f;
        float j = 0.1234567891f;

        printf("a = %.10f\n", a);
        printf("b = %.10f\n", b);
        printf("c = %.10f\n", c);
        printf("d = %.10f\n", d);
        printf("e = %.10f\n", e);
        printf("f = %.10f\n", f);
        printf("g = %.10f\n", g);
        printf("h = %.10f\n", h);
        printf("i = %.10f\n", i);
        printf("j = %.10f\n", j);

        return 0;
    }