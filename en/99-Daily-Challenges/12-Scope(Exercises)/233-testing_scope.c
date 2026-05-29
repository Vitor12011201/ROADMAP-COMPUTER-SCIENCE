/* Question:
What will be the output of the program? */

#include <stdio.h>

int number = 100;

void test() {
    int number = 50;

    {
        int number = 10;
        printf("Inside the block: %d\n", number);
    }

    printf("Inside the function: %d\n", number);
}

int main() {
    test();

    printf("Global: %d\n", number);

    return 0;
}