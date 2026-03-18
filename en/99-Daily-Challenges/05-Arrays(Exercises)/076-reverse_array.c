/* Goal: Manipulate the order of elements in the program's display.
1. Create a function void reverse(int *a, int length).
2. This function should reverse the order of the array output.
3. In main, declare an array {1, 2, 3, 4, 5, 6}.
4. Call the function and prove that it now shows {6, 5, 4, 3, 2, 1}. */

#include <stdio.h>

void reverse_value(int *a, int length) {
    printf("=============================\n");
    printf("Reversed Array sequence:\n");

    for (int i = length - 1; i >= 0; i--) {
        printf("%d\n", a[i]);
    }
}

int main() {

    int array[] = {1, 2, 3, 4, 5, 6};
    int length = sizeof(array) / sizeof(int);

    printf("Array sequence in order:\n");
    for (int i = 0; i < length; i++) {
        printf("%d\n", array[i]);
    }

    reverse_value(array, length);

    return 0;
}