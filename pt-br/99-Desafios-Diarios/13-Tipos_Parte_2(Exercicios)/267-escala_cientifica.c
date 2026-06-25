/* Objetivo: Manipular o expoente da notação científica (e) para entender como o compilador normaliza números muito grandes ou muito pequenos.
Instruções:
1. Declare três variáveis do tipo double:
 - a recebendo 1234.5e-3
 - b recebendo 0.12345e+1
 - c recebendo 12.345e-1
2. Imprima o valor de todas elas usando o formato padrão %f. */

#include <stdio.h>

int main(void)
{
 double a = 1234.5e-3;
 double b = 0.12345e+1;
 double c = 12.345e-1;

 printf("a = %f\n", a);
 printf("b = %f\n", b);
 printf("c = %f\n", c);

 return 0;
}