#include <stdio.h>

int main() {
    int i = 10;

    i += 3;  // i becomes 13 (same as i = i + 3)
    i -= 5;  // i becomes 8  (same as i = i - 5)
    i *= 2;  // i becomes 16 (same as i = i * 2)
    i /= 4;  // i becomes 4  (same as i = i / 4)
    i %= 3;  // i becomes 1  (same as i = i % 3)

    printf("Final value of i: %d\n", i);

    return 0;
}