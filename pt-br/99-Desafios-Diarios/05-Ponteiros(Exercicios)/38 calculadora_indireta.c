/* Tente fazer esse sem usar o nome das variáveis x e y depois que elas forem criadas:
Crie int x = 10, y = 20, soma;.
Crie dois ponteiros p1 e p2 apontando para x e y.
Calcule a soma de x e y, mas use apenas os ponteiros para fazer a conta (ex: soma = *p1 + ...).
Crie um terceiro ponteiro p_soma para a variável soma.
Através do p_soma, mude o resultado da soma para 0.
No fim, imprima o valor real da variável soma.*/

#include <stdio.h>

int main () {
    int x = 10;
    int y = 20;
    printf("A soma de %d + %d = %d\n", x, y, (x + y));
    int *p_x = &x;
    int *p_y = &y;
    *p_x = x;
    *p_y = y;
    int soma = *p_x + *p_y;
    printf("A soma de %d + %d = %d\n", x , y , soma);
    int *soma_1 = &soma;
    *soma_1 = 0;
    printf("Agora a resultado de %d + % d = %d\n", *p_x , *p_y, *soma_1);
}

