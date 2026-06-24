/* Objetivo: Compreender como o printf normaliza a exibição de números em notação científica, independentemente de como foram digitados.
Instruções:
1. No main, declare a variável: double x = 123.456e+3;.
2. Imprima esse número usando três especificadores diferentes na mesma linha ou em linhas consecutivas:
 - Usando %f (notação decimal padrão).
 - Usando %e (notação científica com e minúsculo).
 - Usando %E (notação científica com E maiúsculo).
3. Observe como o printf reorganiza o número para deixar apenas um dígito antes do ponto na versão científica. */

#include <stdio.h>

int main()
{

 double x = 123.456e+3;

 printf("Com %%f: %f\n", x);
 printf("Com %%e: %e\n", x);
 printf("Com %%E: %E\n", x);

 return 0;

}

