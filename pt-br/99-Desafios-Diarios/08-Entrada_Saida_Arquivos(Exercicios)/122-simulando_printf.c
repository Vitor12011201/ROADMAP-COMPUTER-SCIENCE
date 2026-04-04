/* Objetivo: Entender que o printf é "preguiçoso".
Crie uma variável int idade = 25;.
1. Em vez de usar printf, use apenas fprintf(stdout, ...) para imprimir: "A idade e %d anos\n".
2. Tente fazer o mesmo com o stdin usando o fscanf.
Dica: fscanf(stdin, "%d", &idade);.
3. Imprima o resultado final.*/

#include <stdio.h>

int main()
{
    int idade = 25;

    fprintf(stdout, "A idade e: [%d anos]\n", idade);

    fprintf(stdout, "Digite uma nova idade: \n");

    fscanf(stdin, "%d", &idade);

    fprintf(stdout, "Agora a idade e: [%d anos]\n", idade);

    return 0;
}
