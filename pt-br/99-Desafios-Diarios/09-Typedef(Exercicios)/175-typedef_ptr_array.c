/*Objetivo: Lidar com a confusão visual que o autor mencionou ao misturar arrays e ponteiros "escondidos".
1. Crie um typedef char* String;.
2. No main, crie duas variáveis: char letra_a = 'A'; e char letra_b = 'B';.
3. Crie um array de String (que na verdade será um array de ponteiros) com 2 posições.
4. Aponte a primeira posição para letra_a e a segunda para letra_b.
5. Use um loop para imprimir o caractere que está "dentro" de cada posição do array.
Reflexão: Note como no loop você terá que usar *array[i]. É aqui que a confusão que o autor citou acontece: você tem um * mas a declaração do array não tinha nenhum!*/

#include <stdio.h>

typedef char* String;

int main() {

    char letra_a = 'A';
    char letra_b = 'B';
    String array[2] = {&letra_a , &letra_b};

    for (int i = 0; i < 2; i++) {
        printf("Letra: %c\n", *array[i]);
    }

    return 0;

}