/* Goal: See how an array can "invade" another's space when we overflow the limit.
Declare two variables in sequence:
1. First: int dangerous_array[2] = {1, 1};
2. Second: int neighbor = 500;
3. Create a loop that iterates through the dangerous_array, but instead of stopping at index 1, goes up to index 5.
See if, at any point during the printing, your neighbor's value of 500 appears "out of nowhere". */

#include <stdio.h>

int main() {
    int array[2] = {1, 1};
    int neighbor = 500;

    for (int i = 0; i < 5; i++) {
        printf("Index [%d]: %d\n", i, array[i]);
    }

    return 0;
}