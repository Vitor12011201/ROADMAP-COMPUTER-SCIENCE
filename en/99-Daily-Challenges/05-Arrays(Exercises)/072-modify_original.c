/* Goal: Prove that functions can modify the original array because they receive its address.
1. Create a function void zero_negatives(int a[], int len). It should iterate through the array, and if it finds a number less than zero, it should change it to 0.
2. In main, create an array with mixed values: {10, -5, 20, -1, 30}.
3. Print the array before calling the function.
4. Call the function and print the array after. */

#include <stdio.h>

void zero_negative_numbers(int a[], int length) {
    for (int i = 0; i < length; i++) {
        if (a[i] < 0) {
            a[i] = 0;
        }
    }
}

int main() {
    int array[5] = {10, -5, 20, -1, 30};

    printf("The original Array is:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", array[i]);
    }

    printf("=====================\n");
    printf("The Array after modification is:\n");

    zero_negative_numbers(array, 5);

    for (int i = 0; i < 5; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}