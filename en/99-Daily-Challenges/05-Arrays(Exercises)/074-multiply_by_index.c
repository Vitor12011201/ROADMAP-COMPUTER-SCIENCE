/* Goal: Practice direct modification of original values.
1. Create a function void apply_index(int *a, int length).
2. This function should multiply each array element by its own index (e.g., a[i] = a[i] * i).
3. In main, create an array {10, 10, 10, 10, 10}.
4. Call the function and print the array in main. The expected result is {0, 10, 20, 30, 40}. */

#include <stdio.h>

void apply_index(int *a, int length) {

    for (int i = 0; i < length; i++) {
        int multiplication = a[i] * i;
        a[i] = multiplication;

        printf("Element: [%d], from the Array multiplied by its index: [%d] has a total value of: [%d]\n", a[i] / (i == 0 ? 1 : i), i, multiplication);
    }
}

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int length = sizeof(array) / sizeof(int);

    apply_index(array, length);

}