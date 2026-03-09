#include <stdio.h>

int main() {
    // We define index 0, jump to 4, and then to 9.
    // Note that 88 comes right after 77 because we didn't define a specific index for it.
    int score[10] = {10, [4]=77, 88, [9]=999};

    printf("--- Score Table ---\n");
    for (int i = 0; i < 10; i++) {
        printf("Position [%d]: %d points\n", i, score[i]);
    }

    return 0;
}