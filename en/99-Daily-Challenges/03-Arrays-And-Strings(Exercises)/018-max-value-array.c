#include <stdio.h>

// Create a program that: Reads 5 numbers - Stores them in an array - Uses a function to find the maximum value - Shows the result in main

void readNumbers(int numbers[]) {
    for (int i = 0; i < 5; i++) {
        printf("(%d) Enter a number: ", i + 1);
        scanf("%d", &numbers[i]);
    }
}

int getMaxValue(int numbers[]) {
    int max = numbers[0];
    for (int i = 0; i < 5; i++) {
        if (max < numbers[i]) {
            max = numbers[i];
        }
    }
    return max;
}

int main() {
    int numbers[5];
    readNumbers(numbers);
    int max = getMaxValue(numbers);

    printf("The greatest number is %d \n", max);

    return 0;
}