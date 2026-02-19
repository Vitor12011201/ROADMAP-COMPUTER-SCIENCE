#include <stdio.h>
#include <stdlib.h>

// 2 - Write an algorithm to receive any number and print on the screen whether the number is even or odd, positive or negative.

int main () {

    int numero;

    printf("Enter a number: ");
    scanf("%d" , &numero);

    if (numero % 2 == 0 && numero >= 0) {
        printf("Your number is EVEN and POSITIVE");
    } else if (numero % 2 == 1 && numero >= 0) {
        printf("Your number is ODD and POSITIVE");
    } else if (numero % 2 == 0 && numero <= 0) {
        printf("Your number is EVEN and NEGATIVO");
    } else {
        printf("Your number is ODD and NEGATIVE");
    }
}