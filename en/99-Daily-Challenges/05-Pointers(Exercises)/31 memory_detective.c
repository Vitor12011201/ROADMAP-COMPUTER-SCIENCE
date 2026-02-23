/* Write a program that declares three variables of different types: a char, an int, and a double.
Print the value of each one.
Print the address of each one using %p.
Print the size each one occupies in memory using sizeof.
Tip: Observe if the addresses are close to each other! */

#include <stdio.h>

int main() {
    char n_1 = 'A';
    int n_2 = 20;
    double n_3 = 30;

    printf("The value of variable n_1 is: %c\n", n_1);
    printf("The memory address of n_1 is: %p\n", (void *)&n_1);
    printf("The size of variable n_1 is: %zu bytes\n", sizeof(n_1));

    printf("================================================\n");

    printf("The value of variable n_2 is: %d\n", n_2);
    printf("The memory address of n_2 is: %p\n", (void *)&n_2);
    printf("The size of variable n_2 is: %zu bytes\n", sizeof(n_2));

    printf("================================================\n");

    printf("The value of variable n_3 is: %.2f\n", n_3);
    printf("The memory address of n_3 is: %p\n", (void *)&n_3);
    printf("The size of variable n_3 is: %zu bytes\n", sizeof(n_3));

    return 0;
}