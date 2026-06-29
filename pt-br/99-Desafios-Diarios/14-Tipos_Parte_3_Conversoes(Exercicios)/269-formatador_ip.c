/* Objetivo: Combinar múltiplos números inteiros (unsigned char) em uma única string bem formatada, simulando a montagem de um endereço de rede.
Instruções:
1. Declare quatro variáveis do tipo unsigned char representando os octetos de um IP (ex: n1 = 192, n2 = 168, n3 = 1, n4 = 15).
2. Crie um array char ip_texto[16]; (tamanho exato para o maior IP possível "255.255.255.255" + \0).
3. Use o snprintf para juntar esses quatro números separados por pontos dentro de ip_texto.
4. Imprima a string final. */

#include <stdio.h>

int main()
{

    char ip_texto[16];
    unsigned char n1 = 192;
    unsigned char n2 = 168;
    unsigned char n3 = 1;
    unsigned char n4 = 15;

    snprintf(ip_texto, 16 , "%d.%d.%d.%d", n1 , n2 , n3 , n4);

    printf("%s\n", ip_texto);

    return 0;

}