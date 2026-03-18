/* Goal: Create a function that receives an array and its size.
Write a function int sum_all(int *a, int length) that iterates through the array and returns the sum of all elements.
In main, create an array with 4 values: {5, 10, 15, 20}.
Call the function by passing the array and the number 4, and print the result of the sum. */

#include <stdio.h>

int sum_array(int *a, int length) {

    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum = sum + a[i];
    }
    return sum;
}

int main() {
    int array[4] = {5, 10, 15, 20};

    int total_sum = sum_array(array, 4);

    printf("The sum of all array elements is: [%d]\n", total_sum);

    return 0;
}