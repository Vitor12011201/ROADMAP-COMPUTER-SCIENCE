#include <stdio.h>

int main() {
    int x = 10;

    if (x == 10) {
        printf("x is actually 10.\n");
        printf("Now, this sentence also depends on the if statement.\n");
        int sum = x + 5;
        printf("Result inside the block: %d\n", sum);
    }

    return 0;
}