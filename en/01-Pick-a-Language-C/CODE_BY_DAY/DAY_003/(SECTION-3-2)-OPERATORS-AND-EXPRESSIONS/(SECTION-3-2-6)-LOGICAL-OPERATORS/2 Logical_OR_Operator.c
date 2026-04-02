#include <stdio.h>

// Logical OR Operator - ||

int main() {
    int has_cash = 0;
    int has_card = 1;

    // Enters if at least ONE condition is true
    if (has_cash || has_card) {
        printf("Can buy the snack!\n");
    }

    return 0;
}