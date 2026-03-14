#include <stdio.h>
#include <stdbool.h>

/**
 * Estilo Visual (a[])
 * O uso de 'int a[]' ajuda na leitura rapida do codigo.
 */
bool existe_no_array(int a[], int len, int busca) {
    for (int i = 0; i < len; i++) {
        if (a[i] == busca) return true;
    }
    return false;
}

int main() {
    int nums[] = {10, 20, 30, 40};
    if (existe_no_array(nums, 4, 30)) {
        printf("Valor encontrado!\n");
    }
    return 0;
}