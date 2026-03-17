/* Declare an array of 5 integers.
Ask the user to input the numbers.
Create a function that receives a pointer to the array.
The function must traverse the array using pointers.
The function must return the highest number found. */

#include <stdio.h>

int findMax(int *ptr, int size) {
    int max = *ptr;

    for (int i = 1; i < size; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    return max;
}

void printArray(int *ptr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
}

int main() {
    int numbers[5];

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Numbers entered: ");
    printArray(numbers, 5);

    int maxNumber = findMax(numbers, 5);

    printf("Highest number: %d\n", maxNumber);

    return 0;
}