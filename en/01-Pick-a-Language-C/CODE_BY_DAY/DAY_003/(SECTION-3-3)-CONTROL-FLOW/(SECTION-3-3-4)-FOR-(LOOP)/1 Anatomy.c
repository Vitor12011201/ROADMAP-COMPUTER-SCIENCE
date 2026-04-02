#include <stdio.h>

int main() {
    // 1. i = 0 (Starts here - Initialization)
    // 2. i < 5 (Asks before each iteration - Condition)
    // 3. i++   (Does this at the END of each iteration - Increment)
    for (int i = 0; i < 5; i++) {
        printf("Count: %d\n", i);
    }

    return 0;
}