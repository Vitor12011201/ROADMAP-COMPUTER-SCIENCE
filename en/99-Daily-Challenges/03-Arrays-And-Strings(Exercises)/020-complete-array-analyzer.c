#include <stdio.h>

/*🧠 Exercise: Number Analyzer
Create a C program that:
Asks the user to enter 10 integers
Stores these numbers in an array
Uses separate functions to:
Display all entered numbers
Find the maximum number
Find the minimum number
Calculate the average of the values
At the end, the main function should print:
List of numbers
Maximum
Minimum
Average */

void readNumbers(int numbers[], int size) {
    for (int i = 0; i < size; i++) {
        printf("(%d) Enter a number: \n", i + 1);
        scanf("%d", &numbers[i]);
    }
}

void displayNumbers(int numbers[], int size) {
    printf("Entered Numbers: \n");
    for (int i = 0; i < size; i++) {
        printf("[%d] \n", numbers[i]);
    }
}

int getMaxValue(int numbers[], int size) {
    int max = numbers[0];
    for (int i = 0; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    return max;
}

int getMinValue(int numbers[], int size) {
    int min = numbers[0];
    for (int i = 0; i < size; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    return min;
}

float getAverage(int numbers[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    return sum / size;
}

int main() {
    int array[10];
    int size = 10;

    readNumbers(array, size);
    displayNumbers(array, size);

    int max = getMaxValue(array, size);
    printf("The maximum number is: %d \n", max);

    int min = getMinValue(array, size);
    printf("The minimum number is: %d \n", min);

    float average = getAverage(array, size);
    printf("The average of the numbers is: %.2f \n", average);

    return 0;
}