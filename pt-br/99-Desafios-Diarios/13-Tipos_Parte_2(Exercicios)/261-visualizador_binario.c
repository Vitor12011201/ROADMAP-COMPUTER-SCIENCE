/* Objetivo: Resolver a limitação do printf mencionada pelo autor: criar sua própria lógica para imprimir um número em binário usando operadores de bits (bitwise).
Instruções:
1. No main, declare int x = 0b101010; (que é 42 em decimal).
2. Para descobrir se cada bit é 0 ou 1, use um loop for que comece do bit mais alto (vamos usar 7 para olhar apenas o último byte, de 7 até 0 decrecendo: i--).
3. Dentro do loop, use o operador de deslocamento para a direita (>>) e o operador E lógico bit a bit (&) para isolar o bit atual: (x >> i) & 1.
4. Imprima o resultado de cada bit um do lado do outro. */

#include <stdio.h>

int main() {

int x = 0b101010;

for (int i = 7; i >= 0; i--)
{
    int bit = (x >> i) & 1;
    printf("Bit(%d): %d\n", i , bit);
}

return 0;

}