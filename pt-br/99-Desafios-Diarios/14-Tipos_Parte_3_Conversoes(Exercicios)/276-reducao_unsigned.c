/* Objetivo: Forçar a conversão de um tipo inteiro grande para um tipo unsigned menor para observar o efeito odômetro na prática.
Instruções:
1. Declare uma variável unsigned int grande = 258;.
2. Crie uma variável unsigned char pequeno; (lembre-se que o limite máximo do unsigned char é 255).
3. Faça a atribuição forçando a conversão: pequeno = grande;.
4. Imprima o valor de pequeno usando %d.
O Desafio: Explique matematicamente no comentário por que o resultado final foi 2. (Dica: Pense no resto da divisão do número 258 pela capacidade total de um byte, que é 256).*/
/* O unsigned char tem capacidade total de 256 valores, de 0 a 255. Como 258 ultrapassa esse limite, o valor “dá a volta” e fica apenas com o resto da divisão por 256. Como 258 % 256 = 2, o resultado final é 2.*/

#include <stdio.h>

int main()
{
    unsigned int grande = 258;
    unsigned char pequeno;

    pequeno = grande;

    printf("pequeno: %d", pequeno);

    return 0;

}