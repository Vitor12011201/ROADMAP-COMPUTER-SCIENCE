#include <stdio.h>

/* OBJETIVO: Visualizar que somar 1 a um ponteiro de int pula vários bytes,
   enquanto somar 1 a um ponteiro de char pula apenas um. */

int main() {
    int  arr_i[2] = {10, 20};
    char arr_c[2] = {'A', 'B'};

    int  *p_i = arr_i;
    char *p_c = arr_c;

    printf("INT:  Atual %p -> Proximo %p (Pulo de %zu bytes)\n",
            (void*)p_i, (void*)(p_i + 1), sizeof(int));

    printf("CHAR: Atual %p -> Proximo %p (Pulo de %zu byte)\n",
            (void*)p_c, (void*)(p_c + 1), sizeof(char));

    return 0;
}