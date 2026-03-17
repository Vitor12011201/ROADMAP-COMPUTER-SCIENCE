#include <stdio.h>

/* Create a C program that:
1- Read 6 integers
2- Store everything in an array
3- Use a function to calculate the average of the numbers
4- Use another function to count how many numbers are greater than the average
5- Show in the main function:
   The average
   The quantity of numbers above the average */

void readNumbers(float numbers[], int size) {
    for (int i = 0; i < size; i++) {
        printf("(%d) Enter a number: ", i + 1);
        scanf("%f" ,&numbers[i]);
    }
}

float calculateAverage(float numbers[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    return sum / size;
}

int countAboveAverage(float numbers[], int size, float average) {
    int counter = 0;
    for (int i = 0; i < size; i++) {
        if (numbers[i] > average) {
            counter++;
        }
    }
    return counter;
}

int main() {
    float array[6];
    readNumbers(array, 6);

    float resultAverage = calculateAverage(array, 6);
    int aboveCount = countAboveAverage(array, 6, resultAverage);

    printf("The average of the entered numbers is: %.2f \n", resultAverage);
    printf("There are (%d) number(s) greater than the average\n", aboveCount);

    return 0;
}