/* Objetivo: Praticar o truque da subtração de '0' para capturar o valor numérico de um caractere digitado.
Instruções:
1. Peça para o usuário digitar um único dígito (de 0 a 9) usando scanf(" %c", &letra_digito); ou getchar().
2. Converta esse caractere para um número inteiro usando o truque de subtrair '0'.
3. Some 10 a esse número e imprima o resultado com %d.*/

#include <stdio.h>

int main()
{
    char resposta_usuario;

    printf("Digite um unico digito (de 0 a 9): \n");

    scanf(" %c", &resposta_usuario);

    int numero = resposta_usuario - '0';

    int resultado = numero + 10;

    printf("Resultado: %d", resultado);

    return 0;

}