/* Goal: Use functions to "clean" or restrict data in an array.
Imagine you are receiving sensor data that cannot exceed 100.
1. Create a function void apply_ceiling(int a[], int length).
2. If any value in the array is greater than 100, the function must change it to exactly 100.
3. In main, use an array with values like {45, 120, 88, 250, 95}.
4. Print the array before and after calling the function to see the "clamping" happening. */

#include <stdio.h>

void apply_ceiling(int *a, int length) {

    for (int i = 0; i < length; i++) {
        if (a[i] > 100) {
            a[i] = 100;
        }
        printf("%d\n", a[i]);
    }
}

int main() {

    int array[] = {45, 120, 88, 250, 95};

    printf("No number in the Array can exceed 100, I will solve this with a function: \n");

    apply_ceiling(array, sizeof(array) / sizeof(int));

    printf("Modified value at index [1]: %d\n", array[1]);

    return 0;
}