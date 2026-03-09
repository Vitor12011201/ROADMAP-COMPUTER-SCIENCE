#include <stdio.h>

int main() {
    // We declare space for 5, but only provide 2 values
    int inventory[5] = {10, 25};

    printf("Automatic Zero-Filling:\n");
    for (int i = 0; i < 5; i++) {
        printf("Position [%d]: %d\n", i, inventory[i]);
    }
    // Result: 10, 25, 0, 0, 0

    return 0;
}