/* Crie um programa que:
1. Declare um array int sequencia[8].
2. Na inicialização, defina o índice 0 como 100.
3. Defina o índice 4 como 500 e, na mesma linha, coloque os valores 600 e 700 logo em seguida (sem usar novos colchetes para eles).
4. Use um loop para imprimir o array inteiro e observe o que aconteceu nos índices 5 e 6.*/

#include <stdio.h>

int main()
{
    int sequencia[8] = {100, [4] = 500, 600, 700};
    printf("Os numeros dos Arrays sao: \n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", sequencia[i]);
    }
}
