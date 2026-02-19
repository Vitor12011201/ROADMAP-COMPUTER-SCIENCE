#include <stdio.h>

int main() {
    int x = 5;

    if (x == 10)
        printf("Sentence 1: Only appears if x is 10\n");
    printf("Sentence 2: I APPEAR EVEN IF X IS 5!\n"); // COMMON ERROR!

    return 0;
}