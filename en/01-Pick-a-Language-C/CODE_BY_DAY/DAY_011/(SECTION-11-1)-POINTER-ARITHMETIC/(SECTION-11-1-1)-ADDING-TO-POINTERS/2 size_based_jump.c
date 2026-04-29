#include <stdio.h>

/* OBJECTIVE: Visualize that adding 1 to an 'int' pointer jumps several bytes,
   while adding 1 to a 'char' pointer jumps only one. */

int main() {
    int  arr_i[2] = {10, 20};
    char arr_c[2] = {'A', 'B'};

    int  *p_i = arr_i;
    char *p_c = arr_c;

    printf("INT:  Current %p -> Next %p (Jump of %zu bytes)\n",
            (void*)p_i, (void*)(p_i + 1), sizeof(int));

    printf("CHAR: Current %p -> Next %p (Jump of %zu byte)\n",
            (void*)p_c, (void*)(p_c + 1), sizeof(char));

    return 0;
}