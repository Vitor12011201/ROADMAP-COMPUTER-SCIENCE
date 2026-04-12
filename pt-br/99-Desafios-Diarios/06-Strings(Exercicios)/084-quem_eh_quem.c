/* Objetivo: Diferenciar o ponteiro do conteúdo usando o que aprendemos sobre sizeof.
1. Declare char *ptr = "Programacao";.
2. Declare char arr[] = "Programacao";.
3. Imprima o sizeof(ptr) e o sizeof(arr).
4. Use um loop while ou for para contar quantos caracteres existem no arr até chegar no \0.
Dica: while (arr[i] != '\0') { ... }
5. Compare o número de letras que você contou com o valor do sizeof(arr). Por que o sizeof é sempre 1 número maior?
Resposta: Porque quando medimos o Array no sizeof ele conta todos os caracteres da palavra "Programação" que tem 11 caracteres + o nulo(\0), asssim dando 12 caracteres ou Bytes*/

#include <stdio.h>

int main()
{
    char *ptr = "Programacao";
    char arr[] = "Programacao";

    int i = 0;

    printf("Essa e a contagem de caracteres que tem no Array arr[] ate chegar no nulo\n");

    while (arr[i] != '\0')
    {
        i++;
        printf("[%d] ", i);
    }
    printf("\nEssa e a medida do ponteiro ptr: [%zu] Bytes\n", sizeof(ptr));
    printf("Essa e a medida do Array arr[]: [%zu] Bytes\n", sizeof(arr));
}
