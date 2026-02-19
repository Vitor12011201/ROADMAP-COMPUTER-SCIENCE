#include <stdio.h>

// Create a function that tells if a number is even or odd.

int isPositive(int n) {
    if (n >= 0) {
        return 1;
    } else {
        return 0;
    }
}

int isEven(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main () {
    int nu;
    printf("Enter a number: \n");
    scanf("%d" , &nu);
    if (isEven(nu)) {
        printf("Even \n");
    } else {
        printf("Odd \n");
    }
    printf("Your number is %d \n", nu);

    if (isPositive(nu)) {
        printf("Positive");
    } else {
        printf("Negative");
    }
}