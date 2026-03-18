/* Goal: Use pointer notation to find the highest value.
1. Create a function void analyze_maximum(int *a, int length).
2. This function should find the largest value in the array and its index.
3. At the end of the function, print: "The highest value is X and it is at index Y".
4. In main, use the shorthand we learned: pass the array without brackets and use sizeof to calculate the length dynamically before calling the function. */

#include <stdio.h>

void analyze_maximum(int *a, int length) {
    int maximum = *a;
    int index = 0;

    for (int i = 0; i < length; i++) {
        if (maximum < a[i]) {
            maximum = a[i];
            index = i;
        }
    }
    printf("The highest element in the Array is: [%d] and it is at position [%d]\n", maximum, index);
}

int main() {
    int array[] = {-4, 6, -5, 8, 9};

    analyze_maximum(array, sizeof(array) / sizeof(int));

    return 0;
}