/* Objetivo: Demonstrar que variáveis podem ser definidas após código executável, mas não podem ser usadas antes da linha de definição
Escreva um programa:
1. Que leia um número inteiro do usuário.
2. Imprima "Digite um número: " e use scanf para ler para uma variável n.
3. Após ler n, defina uma variável int dobro = n * 2 (depois de n estar definido).
4. Imprima "O dobro é %d\n", dobro.
5. Agora, faça algo propositalmente errado (mas deixe comentado no código final):
 - Tente, antes da definição de n, escrever printf("Valor de n: %d\n", n);. Explique no comentário qual erro ocorreria.
6. Por fim, defina uma variável int quadrado = n * n; em qualquer lugar após n (pode ser até depois do printf do dobro) e imprima o quadrado.*/

#include <stdio.h>

int main()
{
    // printf("Valor de n: %d\n", n);
    // Erro: a variável n ainda não foi declarada nesse ponto do código.

    int n = 0;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);

    int dobro = n * 2;

    printf("O dobro e: %d\n", dobro);

    int quadrado = n * n;

    printf("O quadrado e: %d\n", quadrado);

    return 0;
}