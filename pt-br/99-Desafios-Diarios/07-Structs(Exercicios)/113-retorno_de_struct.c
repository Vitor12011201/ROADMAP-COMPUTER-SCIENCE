/*Objetivo: Praticar uma função que retorna uma struct inteira (em vez de um ponteiro).
1. Crie uma struct Retangulo com float largura e float altura.
2. Crie uma função struct Retangulo criar_quadrado(float lado).
3. Dentro da função, declare uma struct temporária, preencha a largura e altura com o lado e dê um return nela.
4. No main, receba esse retorno: struct Retangulo r = criar_quadrado(5.0);.
5. Imprima a área do retângulo recebido.*/

#include <stdio.h>

struct retangulo {
    float largura;
    float altura;
};

struct retangulo criar_quadrado(float lado) {
    struct retangulo r;
    r.largura = lado;
    r.altura = lado;
    return r;
}

int main() {
    struct retangulo r = criar_quadrado(5.00);
    float area = r.largura * r.altura;
    printf("A Area desse do retangulo recebido e de: %.2f\n", area);

    return 0;
}

