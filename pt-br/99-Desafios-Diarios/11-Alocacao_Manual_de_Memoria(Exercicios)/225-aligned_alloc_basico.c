/* Objetivo: Fixar a sintaxe do aligned_alloc e verificar o alinhamento
Escreva um programa que:
1. Aloque 128 bytes de memória com alinhamento de 16 bytes usando aligned_alloc(16, 128).
2. Verifique se a alocação foi bem-sucedida (ponteiro não NULL).
3. Preencha os primeiros 20 bytes com a string "Alinhado!" usando strcpy.
4. Imprima o endereço do ponteiro (formato %p) e a string.
5. Libere a memória com free. */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *p = _aligned_malloc(128, 16);

    if (p == NULL)
    {
        fprintf(stderr, "Erro ao alocar memoria\n");
        return 1;
    }

    strcpy(p, "Alinhado!");

    printf("Endereco: %p\n", (void *)p);
    printf("String: %s\n", p);

    _aligned_free(p);

    p = NULL;

    return 0;
}