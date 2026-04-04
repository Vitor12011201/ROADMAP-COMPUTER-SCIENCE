/* Objetivo: Entender o perigo de não saber o tamanho real da string.
Em alguns exemplos, é comum usar uma condição como i < 13 para percorrer a string "Hello, world!", já que o número de caracteres é conhecido.
E se a gente não quiser contar na mão?
1. Crie um programa com char s[] = "Uma frase qualquer";.
2. Use um loop for sem um número fixo (como 13). Use a condição s[i] != '\0' para o loop parar sozinho no lugar certo.
3. Dentro do loop, imprima o caractere e o seu índice: s[0] = U, s[1] = m...*/

#include <stdio.h>

int main()
{
    char s[] = "Uma Frase qualquer";

    for (int i = 0; s[i] != '\0'; i++)
    {
        printf("s[%d] = %c\n", i, s[i]);
    }
}
