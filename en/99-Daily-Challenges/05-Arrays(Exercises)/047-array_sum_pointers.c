/* Declare an array of 5 integers.
Ask the user to input the 5 numbers.
Create a function that receives:
- a pointer to the array
- the array size
Inside the function:
- traverse the array using pointers (do not use [])
- calculate the sum of all numbers
The function must return the sum.
In the main function, print the result. */

#include <stdio.h>

int sumArray(int *ptr, int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        // Pointer arithmetic: *(ptr + i) is the same as ptr[i]
        sum += *(ptr + i);
    }

    return sum;
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

    int result = sumArray(numbers, 5);

    printf("Total sum: %d\n", result);

    return 0;
}