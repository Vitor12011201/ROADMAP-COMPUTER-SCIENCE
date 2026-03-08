/* Create a program in C that:
Ask the user for 5 integers.
Store these numbers in an array.
Use a function with pointers to calculate the average of the values.
Print the average at the end.
*/

#include <stdio.h>

float calculateAverage(int *ptr, int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += *(ptr + i);
    }

    float average = (float)sum / size;

    return average;
}

int main() {

    int numbers[5];

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    float average = calculateAverage(numbers, 5);

    printf("Average of the numbers: %.2f\n", average);

    return 0;
}