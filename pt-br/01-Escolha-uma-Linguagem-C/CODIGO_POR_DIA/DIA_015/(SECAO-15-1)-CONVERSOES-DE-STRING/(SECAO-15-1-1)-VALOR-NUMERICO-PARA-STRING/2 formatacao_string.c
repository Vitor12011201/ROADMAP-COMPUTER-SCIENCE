#include <stdio.h>

/* OBJETIVO: Combinar a conversão numérica com formatação avançada de strings,
   controlando as casas decimais de um double e inserindo prefixos textuais. */

int main() {
    char preco_formatado[16];
    double preco_produto = 1250.7583;

    /* Além de converter, podemos usar o '%.2f' para arredondar visualmente
       para duas casas decimais e embutir o símbolo da moeda na mesma string. */
    snprintf(preco_formatado, sizeof(preco_formatado), "R$ %.2f", preco_produto);

    printf("Texto final gerado no buffer: %s\n", preco_formatado);

    return 0;
}