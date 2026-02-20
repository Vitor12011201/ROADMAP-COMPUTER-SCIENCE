#include <stdio.h>

int main() {
    int x = 0;

    // The error: instead of comparing, you are ASSIGNING 10 to x!
    // Since 10 is non-zero, the IF will always be TRUE.
    if (x = 10)
    {
        printf("This will print, even though it looks wrong!\n");
        printf("Now the value of x has changed to: %d\n", x);
    }
}
