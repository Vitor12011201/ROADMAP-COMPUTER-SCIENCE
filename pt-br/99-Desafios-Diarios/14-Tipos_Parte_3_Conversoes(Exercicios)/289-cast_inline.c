/* Objetivo: Dominar a sintaxe assustadora, mas eficiente, de fazer o cast e a desreferenciação de um void* na mesma linha (inline).
Instruções:
1. Crie uma função chamada int compara_floats(const void *a, const void *b).
2. Dentro dela, sem criar nenhuma variável auxiliar, faça o cast de a e b para (const float*) e desreferencie-os usando *.
3. A lógica deve ser:
 - Se o valor de a for maior que b, retorne 1.
 - Se o valor de a for menor que b, retorne -1.
 - Se forem iguais, retorne 0.
4. No main, declare dois floats, chame sua função passando os endereços deles e imprima o resultado.*/

#include <stdio.h>

int compara_floats(const void *a, const void *b)
{
 if (*(const float *)a > *(const float *)b)
 {
  return 1;
 }

 if (*(const float *)a < *(const float *)b)
 {
  return -1;
 }

 return 0;
}

int main(void)
{
 float primeiro = 7.5f;
 float segundo = 4.2f;

 int resultado = compara_floats(&primeiro, &segundo);

 printf("Resultado: %d\n", resultado);

 return 0;
}