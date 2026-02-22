#include <stdio.h>

/* Create a C program that:
Asks the user to enter 6 integers
Stores these numbers in an array
Uses a function to find the minimum number in the array
Shows the result in the main function */

void readNumbers(int numbers[6]) {
    for (int i = 0; i < 6; i++) {
        printf("(%d) Enter a number: ", i + 1);
        scanf("%d", &numbers[i]);
    }
}

int getMinNumber(int numbers[6]) {
    int minNumber = numbers[0];
    for (int i = 0; i < 6; i++) {
        if (numbers[i] < minNumber) {
            minNumber = numbers[i];
        }
    }
    return minNumber;
}

int main () {
    int array[6];
    readNumbers(array);
    int result = getMinNumber(array);
    printf("The minimum number is: %d", result);
}